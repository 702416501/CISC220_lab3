/*
 * HanningWindow.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Allie
 */

#include <iostream>
#include "HanningWindow.hpp"

using namespace std;

HanWindow::HanWindow(int winSize, int *oArr, int aSize, int *fArr ){
              windowSize = winSize;
              originalArr = oArr;
              arrSize = aSize;
              filteredArr = fArr;
}
int HanWindow::weightedAverage(int val){
              int avg = 0;
              if (val<(windowSize/2) || val > ((arrSize-1)/2)){
                           return avg;
              } else {
                           int x = 2;
                           int weight = (windowSize/2)+1;
                           avg += originalArr[val]*weight;
                           for (int i=val+1; i<val+(windowSize/2); i++){
                                         weight--;
                                         avg += originalArr[val]*weight;
                                         avg += originalArr[val-x]*weight;
                                         x += 2;
                           }
                           avg = avg/windowSize;
                           return avg;
              }
}
void HanWindow::changeWindow(int size){
              if (size%2 != 0){
                           windowSize = size-1;
              } else {
                           windowSize = size;
              }
}
void HanWindow::filterArr(){
              for (int i=1; i<arrSize; i++){
                           filteredArr[i] = weightedAverage(i);
              }
}
void HanWindow::printArray(bool x){
              int *grArr;
              if (x){
                           grArr = filteredArr;
              } else {
                           grArr = originalArr;
              }

              for (int i=0; i<arrSize; i++){
                           if (i == arrSize-1){
                                         cout << grArr[i] << endl;
                           } else {
                                         cout << grArr[i] << ",";
                           }
              }
}
void HanWindow::graphArray(bool x){

              int *grArr;
              if (x){
                           grArr = filteredArr;
              } else {
                           grArr = originalArr;
              }

              int high = grArr[0];
              for (int i=0; i<arrSize; i++){
                           if (high < grArr[i]){
                                         high = grArr[i];
                           }
              }

              int low = grArr[0];
              for (int i=0; i<arrSize; i++){
                           if (low > grArr[i]){
                                         low = grArr[i];
                           }
              }

              for(int i=high; i>low; i--){
                           cout << i << ":";
                           for (int j=0; j<arrSize; j++){
                                         if(i == grArr[j]){
                                                       cout <<"*"<< "";
                                         } else {
                                                       cout << " " << "";
                                         }
                           }
                           cout << endl;
              }
}



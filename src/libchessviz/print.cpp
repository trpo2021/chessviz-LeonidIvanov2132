#include <libchessviz/print.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void print(char Chess[9][9]){
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j ++){
      if(j == 1){
        cout << Chess[i][j] << ' ';
      }
      else{
        cout << Chess[i][j] << ' ';
      }
    }
    cout << endl;
  }
}

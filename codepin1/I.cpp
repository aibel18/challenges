#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

bool verifyRaina(int x1,int y1,int x2,int y2){

  /// if its horizontal or vertical
  if( x1 == x2 || y1 == y2 )
    return true;
  /// if its diagnal
  int dif1 = x1 - x2;
  int dif2 = y1 - y2;
  if( abs(dif1) == abs(dif2))
    return true;
  return false;
}

int main(){

  int x1,y1,x2,y2;
  bool isTest = true;
  while(true){
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(!x1 && !y1 && !x2 && !y2)
      break;

    if( x1== x2 && y1== y2  )
      cout << 0 << endl;
    else if(verifyRaina(x1,y1,x2,y2))
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }

  return 0;
}

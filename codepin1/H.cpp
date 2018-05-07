#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){

  int r1,x1,y1,r2,x2,y2;
  while(scanf("%d%d%d%d%d%d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){

    double distance = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );

    if( r1 < r2 )
      printf( "MORTO\n") ;
    else if( distance <= r1 - r2 )
      printf( "RICO\n") ;
    else
      printf( "MORTO\n") ;
  }
  return 0;
}

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
  double p1X,p1Y, p2X, p2Y, result;
  cin >> p1X >> p1Y >> p2X >> p2Y;

  result = (p1X - p2X)*(p1X - p2X) + (p1Y - p2Y)*(p1Y - p2Y);
  result = sqrt(result);

  printf( "%.4f\n", result) ;

  return 0;
}

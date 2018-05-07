#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
  double a,b, c, x1,x2, dis;
  cin >> a >> b >> c;

  dis = b*b -4*a*c;

  if(dis<0 || a ==0){
    cout << "Impossivel calcular"<< endl;
    return 0;
  }
  x1 = (-b + sqrt(dis))/(2*a);
  x2 = (-b - sqrt(dis))/(2*a);

  printf( "R1 = %.5f\n", x1) ;
  printf( "R2 = %.5f\n", x2) ;
/*
  x1 = round(x1*100000)/100000.0;
  x2 = round(x2*100000)/100000.0;



  cout << "R1 = " << x1 << endl;
  cout << "R2 = " << x2 << endl;*/

  return 0;
}

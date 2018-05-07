#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
void deslocatedRight(double *v,int size,int pos){
  for(int i=size-2;i>=pos;i--){
    v[i+1] = v[i];
  }
}
void insertOrder(double *v,int size,double val){
  for(int i=0;i<size;i++){
    if( val > v[i] ){
      deslocatedRight(v,size,i);
      v[i] = val;
      break;
    }
  }
}

int main(){

  int size = 3;
  double v[size];
  double a;
  cin >> a ;
  insertOrder(v,size,a);

  cin >> a ;
  insertOrder(v,size,a);

  cin >> a ;
  insertOrder(v,size,a);

  if( v[0] >= v[1] + v[2] ){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
  }

  double cal = v[0]*v[0];
  double cal2 = v[1]*v[1] + v[2]*v[2];
  if( cal == cal2 ){
    printf("TRIANGULO RETANGULO\n");
  }
  else if( cal > cal2 ){
    printf("TRIANGULO OBTUSANGULO\n");
  }
  else if( cal < cal2 ){
    printf("TRIANGULO ACUTANGULO\n");
  }

  if( v[0] == v[1] && v[1] == v[2] ){
    printf("TRIANGULO EQUILATERO\n");
  }
  else if( v[0] == v[1] || v[0] == v[2] || v[1] == v[2] ){
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}

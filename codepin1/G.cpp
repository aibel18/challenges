#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  //scanf("%.1f%.1f%.1f%.1f%.1f%.1f",&a,&b,&c,&d,&e,&f);
  double a;
  int count = 0;
  for(int i=0;i<6;i++){
    cin >> a;
    if(a>0)
      count++;
  }
  printf( "%d valores positivos\n", count) ;
  return 0;
}

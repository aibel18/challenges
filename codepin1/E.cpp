#include <iostream>
#include <stdio.h>

using namespace std;

void registerDDD(int* v, const char **s){
  v[0] = 61;s[0] = "Brasilia";
  v[1] = 71;s[1] = "Salvador";
  v[2] = 11;s[2] = "Sao Paulo";
  v[3] = 21;s[3] = "Rio de Janeiro";
  v[4] = 32;s[4] = "Juiz de Fora";
  v[5] = 19;s[5] = "Campinas";
  v[6] = 27;s[6] = "Vitoria";
  v[7] = 31;s[7] = "Belo Horizonte";
}

int main(){

  int v[8];
  const char* s[8];
  registerDDD(v,s);
  int a;
  cin >> a ;

  for(int i=0;i<8;i++){
    if(a == v[i]){
      printf(s[i] );
      printf("\n");
      return 0;
    }
  }
  printf("DDD nao cadastrado\n" );
  return 0;
}

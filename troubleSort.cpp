#include <iostream>
using namespace std;

int SIZE_MAX = 30;
int swap(int* pVal,int &index){
  for( int i= index;i>=0 ;i-- ){
    if(pVal[i] == 0 && i< SIZE_MAX-2 && pVal[i+1]>0 ){
      pVal[i] = pVal[i+1] >> 1;
      pVal[i+1] = 0;
      index = i+1;
      cout<<pVal[i]<<endl;
      return pVal[i];
    }
  }
  return 0;
}
void calculate(int test,char*p,int damageMax){
  int pVal[SIZE_MAX];
  int damage = 0;
  int currentStrength = 1;
  int index = 0;
  for(int i=0;i < SIZE_MAX;i++){
    index = i;
    if(p[i]=='S'){
      damage += currentStrength;
      pVal[i] = currentStrength;
    }else if(p[i]=='C'){
      currentStrength = currentStrength << 1;
      pVal[i] = 0;
    }else{
      index--;
      break;
    }
  }
  int rest = 0;
  int numberHack = 0;
  while( damage > damageMax){
    rest = swap(pVal,index);
    if( !rest ){
      cout<<"Case #"<<test<<": IMPOSSIBLE"<<endl;
      return;
    }
    damage -=rest;
    numberHack++;
  }
  cout<<"Case #"<<test<<": "<<numberHack<<endl;
}
int main(){
  int t,d;
  char p[SIZE_MAX];
  cin >> t;
  for(int i=1;i<=t;i++){
    cin >> d;
    cin >> p;
    calculate(i,p,d);
  }
  return 0;
}

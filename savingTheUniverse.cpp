#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int SIZE_MAX = 30;
int swap(int* pVal,int size,int &index){

  //cout<<pVal[0]<<" "<<pVal[1]<<" "<<pVal[2]<<" "<<pVal[3]<<" "<<pVal[4]<<" "<<endl;
  for( int i= index;i>=0 ;i-- ){
    if(pVal[i] == 0 && i< size-1 && pVal[i+1]>0 ){
      pVal[i] = pVal[i+1] >> 1;
      pVal[i+1] = 0;
      index = i+1;
      return pVal[i];
    }
  }
  return 0;
}
void calculate(string &out,int test,char*p,int damageMax){
  int pVal[SIZE_MAX];
  int damage = 0;
  int currentStrength = 1;
  int index = 0;
  int sizeVal = 0;
  for(int i=0;i < SIZE_MAX;i++){
    index = i;
    if(p[i]=='S'){
      damage += currentStrength;
      pVal[i] = currentStrength;
    }else if(p[i]=='C'){
      currentStrength = currentStrength << 1;
      pVal[i] = 0;
    }else{
      sizeVal = index;
      index--;
      break;
    }
  }
  int rest = 0;
  int numberHack = 0;
  while( damage > damageMax){
    rest = swap(pVal,sizeVal,index);
    if( !rest ){
      std::ostringstream s;
      s<<"Case #"<<test<<": IMPOSSIBLE"<<endl;
      out.append(s.str());
      return;
    }
    damage -=rest;
    numberHack++;
  }
  std::ostringstream s;
  s<<"Case #"<<test<<": "<<numberHack<<endl;
  out.append(s.str());

}
int main(){
  int t,d;
  char p[SIZE_MAX];
  cin >> t;
  string out;
  for(int i=1;i<=t;i++){
    cin >> d;
    cin >> p;
    calculate(out,i,p,d);
  }
  cout<<out;
  return 0;
}

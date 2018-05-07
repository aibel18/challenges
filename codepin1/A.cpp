#include <iostream>

using namespace std;

int main(){

  int num;
  int maxNum = 0;
  int posMaxNum = 0;
  for(int i=1;i<=100;i++){
    cin >> num;

    if( num > maxNum ){
      maxNum = num;
      posMaxNum = i;
    }
  }

  cout << maxNum << endl;
  cout << posMaxNum << endl;

  return 0;
}

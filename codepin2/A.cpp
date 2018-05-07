#include <iostream>
#include <stdio.h>
#include <map>
#include <set>
#include <cmath>

using namespace std;

struct mypair{
  float p;
  int n;
  mypair(float p,int n):p(p),n(n){};
};

bool comparator(const struct mypair &elem1, const struct mypair &elem2)
{
    return elem1.p >= elem2.p;
}

int main(){

  map<string,float> guns;
  map<string,int> mosters;
  map<string,float>::iterator itGun;
  map<string,int>::iterator itMoster;

  /// Register guns
  guns["HANDGUN"] = 2.0f;
  guns["RED9"] = 3.5f;
  guns["BLACKTAIL"] = 3.5f;
  guns["MATILDA"] = 2.0f;
  guns["HANDCANNON"] = 60.0f;
  guns["STRIKER"] = 12.0f;
  guns["TMP"] = 1.2f;
  guns["RIFLE"] = 12.0f;
  /// Register mosters
  mosters["GANADOS"] = 50;
  mosters["COBRAS"] = 40;
  mosters["ZEALOT"] = 75;
  mosters["COLMILLOS"] = 60;
  mosters["GARRADOR"] = 125;
  mosters["LASPLAGAS"] = 100;
  mosters["GATLINGMAN"] = 150;
  mosters["REGENERATOR"] = 250;
  mosters["ELGIGANTE"] = 500;
  mosters["DR.SALVADOR"] = 350;

  int nA,nM,nMaxB;
  char buffer[255];

  //auto fun = [](struct mypair &elem1 ,struct mypair &elem2){return elem1.p < elem2.p};

  while(scanf("%d",&nA) != EOF){
    int numA;

    set<struct mypair,bool(*)(const struct mypair &elem1, const struct mypair &elem2)> gunsPotence(&comparator);

    for(int i=0;i<nA;i++){
      scanf("%s%d",&buffer,&numA);
      itGun = guns.find(buffer);
      if( itGun != guns.end() ){
        gunsPotence.insert(mypair(itGun->second,numA));
      }
      else{
        //cout<< "--- NOT FOUND ---" << endl;
      }
    }

    scanf("%d",&nM);
    int numM;
    float resistentTotal =  0.0f;
    for(int i=0;i<nM;i++){
      scanf("%s%d",&buffer,&numM);
      itMoster = mosters.find(buffer);
      if( itMoster != mosters.end() ){
        resistentTotal += itMoster->second * numM;
      }
      else{
        //cout<< "--- NOT FOUND ---" << endl;
      }
    }
    scanf("%d",&nMaxB);

    float potenceTotal =  0.0f;
    int numUsedBall = 0;
    //for(auto &ele : gunsPotence){
    for(set<struct mypair,bool(*)(const struct mypair &elem1, const struct mypair &elem2)>::iterator it = gunsPotence.begin(); it != gunsPotence.end(); it++){

      if( numUsedBall + (*it).n <= nMaxB ){
        potenceTotal += (*it).p * (*it).n;
        numUsedBall += (*it).n;
      }
      else{
        /*potenceTotal += ( nMaxB - numUsedBall) * (*it).p;
        numUsedBall += ( nMaxB - numUsedBall );
        break;*/
      }
    }

    if(resistentTotal > potenceTotal){
        cout << "You Are Dead\n";
    }
    else
      cout << "Missao completada com sucesso\n";

  }
  return 0;
}

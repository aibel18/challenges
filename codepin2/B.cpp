#include <iostream>
#include <string>
#include <map>
#include <stdio.h>

using namespace std;
int main(){

  map<string,string> d;
  map<string,string>::iterator it;

  d["brasil"] =              "Feliz Natal!";
  d["alemanha"] =            "Frohliche Weihnachten!";
  d["austria"] =             "Frohe Weihnacht!";
  d["coreia"] =              "Chuk Sung Tan!";
  d["espanha"] =             "Feliz Navidad!";
  d["grecia"] =              "Kala Christougena!";
  d["estados-unidos"] =      "Merry Christmas!";
  d["inglaterra"] =          "Merry Christmas!";
  d["australia"] =           "Merry Christmas!";
  d["portugal"] =            "Feliz Natal!";
  d["suecia"] =              "God Jul!";
  d["turquia"] =             "Mutlu Noeller";
  d["argentina"] =           "Feliz Navidad!";
  d["chile"] =               "Feliz Navidad!";
  d["mexico"] =              "Feliz Navidad!";
  d["antardida"] =           "Merry Christmas!";
  d["canada"] =              "Merry Christmas!";
  d["irlanda"] =             "Nollaig Shona Dhuit!";
  d["belgica"] =             "Zalig Kerstfeest!";
  d["italia"] =              "Buon Natale!";
  d["libia"] =               "Buon Natale!";
  d["siria"] =               "Milad Mubarak!";
  d["marrocos"] =            "Milad Mubarak!";
  d["japao"] =               "Merii Kurisumasu!";

  char country[128];

  while(scanf("%s",&country ) != EOF){
    it = d.find(country);
    if( it != d.end())
      cout<< it->second << endl;
    else
      cout<< "--- NOT FOUND ---" << endl;
  }

  return 0;
}

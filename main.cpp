#include <iostream>
#include <fstream>
#include <map>
using namespace std;

map<string,string> diccionario;
string linea;
string key,value;
string word;

void returnKeyAndValue(){
    for (int i = 0; i < linea.size(); ++i) {
        if (linea[i] == ' '){
            value = linea.substr(0,i);
            key = linea.substr(i+1,linea.size()-i-1);
            break;
        }
    }
}

int main() {

    while(getline(cin,linea)){
        if(linea.empty()) break;
        returnKeyAndValue();
        diccionario.emplace(key,value);
    }

    while(cin>>word) {
        if (diccionario.find(word) == diccionario.end()) puts("eh");
        else puts(diccionario[word].c_str());
    }
    return 0;
}

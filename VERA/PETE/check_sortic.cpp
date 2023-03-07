#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file;
    vector <int> mass;

    file.open("chek.txt");
    string fl;

    if(!file){
        cout << "blya";
    }else{
        cout << "fuuuuhhhhh";
    }

    while(fl != " "){
    file >> fl;
    int dead = stoi(fl);
    for(int i = 0; fl != '!'; i++){
        mass[i] = dead;
    }
    }

    for(int i = 0; mass.size()-1; i++){
        if(mass[i] > mass[i+1]){
        }else{
            cout << "K.O./(+[]+)/";
            return 0;
        }
    }
    cout << "OK(-_-)";
}

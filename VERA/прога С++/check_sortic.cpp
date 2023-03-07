#include <iostream>
#include <vector>
#include <string>
using namespace std;

int genie(string str){
    int a, x = 1, i2;
    for(int i = 0; str != "\n"; i++){
    while(i2 != 0){
        x = x * 10;
        i2--;
    }
    switch(str[i]){
        case "1":
        a += x * 1;
        break;
        case "2":
        a += x * 2;
        break;
        case "3":
        a += x * 3;
        break;
        case "4":
        a += x * 4;
        break;
        case "5":
        a += x * 5;
        break;
        case "6":
        a += x * 6;
        break;
        case "7":
        a += x * 7;
        break;
        case "8":
        a += x * 8;
        break;
        case "9":
        a += x * 9;
        break;
        case "0":
        a = x * 0;
        break;
    }
    }
}

int main(){
    vector <int> mass;
    string fl;

    for(int i = 0; fl != "!"; i++){
        cin >> fl;
        int dead = stoi(fl);
        mass[i] = dead;
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

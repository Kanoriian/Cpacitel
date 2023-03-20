#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

void pisirek(vector <int> &mass){
    for(int k = 0; k < mass.size()-1; k++){
        for(int i = 0; i < mass.size()-1; i++){
            if(mass[i] > mass[i+1]){
                mass[i] = mass[i] + mass[i+1];
                mass[i+1] = mass[i] - mass[i+1];
                mass[i] = mass[i] - mass[i+1];
            }
        }
    }
}

void sheikerskaya(vector <int> &mass){
    int b = 0;
    for(int k = 0; k < (mass.size()-b-1); k++){

        int a = 0;
        for(int i = 0; i < mass.size()-b-1; i++){
            if(mass[a] < mass[i]){
                a = i;
            }
        }
        for(int i = a; i < mass.size()-b-1; i++){
            mass[i] = mass[i] + mass[i+1];
            mass[i+1] = mass[i] - mass[i+1];
            mass[i] = mass[i] - mass[i+1];
        }

        a = mass.size()-b;
        for(int i = a; i < 0; i--){
            if(mass[a] < mass[i]){
                a = i;
            }
        }
        for(int i = a; i < 0; i--){
            mass[i] = mass[i] + mass[i+1];
            mass[i+1] = mass[i] - mass[i+1];
            mass[i] = mass[i] - mass[i+1];
        }
        b++;
    }
}

void sheikerskaya_2(vector <int> &mass){
    int b = 0;
    for(int k = 0; k < mass.size()-1; k++){

        int a = 0;
        for(int i = 0; i < mass.size()-1-b; i++){
            if(mass[a] < mass[i]){
                a = i;
            }
        }
        for(int i = 0; i < mass.size()-b; i++){
            mass[i] = mass[i] + mass[i+1];
            mass[i+1] = mass[i] - mass[i+1];
            mass[i] = mass[i] - mass[i+1];
        }

        a = 0;
        for(int i = 0; i < mass.size()-1-b; i++){
            if(mass[a] > mass[i]){
                a = i;
            }
        }
        for(int i = mass.size()-b; i < 0; i--){
            mass[i] = mass[i] + mass[i-1];
            mass[i-1] = mass[i] - mass[i-1];
            mass[i] = mass[i] - mass[i-1];
        }
        b+=2;
    }
}

void rashecon(vector <int> &mass){
    int msz = mass.size();
    long ch = (msz * 1000 / 1247) / 1000;
    for(int k = 0; k < mass.size()-1; k++){
        for(int i = 0; i < mass.size()-msz; i++){
            if(mass[i] > mass[i+msz]){
                mass[i] = mass[i] + mass[i+msz];
                mass[i+msz] = mass[i] - mass[i+msz];
                mass[i] = mass[i] - mass[i+msz];
            }
            msz--;
            ch = (msz * 1000 / 1247) / 1000;
        }
    }
}

int main(){
    vector <int> mass(20);
    mass[0] = 8;
    mass[1] = 16;
    mass[2] = 4;
    mass[3] = 13;
    mass[4] = 20;
    mass[5] = 9;
    mass[6] = 17;
    mass[7] = 5;
    mass[8] = 3;
    mass[9] = 14;
    mass[10] = 10;
    mass[11] = 18;
    mass[12] = 19;
    mass[13] = 2;
    mass[14] = 6;
    mass[15] = 11;
    mass[16] = 1;
    mass[17] = 15;
    mass[18] = 12;
    mass[19] = 7;

    //pisirek(mass);

    sheikerskaya_2(mass);

    //rashecon(mass);

    for(int i = 0; i < mass.size(); i++){
        cout << mass[i] << " ";
    }
    cout << endl;

}



































































































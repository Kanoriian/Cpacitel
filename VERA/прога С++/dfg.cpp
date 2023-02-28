#include<iostream>
#include<string>
#include<vector>

using namespace std;

void ficus(vector <int> &mass){
    int sz = mass.size()-1;
    for(int i = 0; i < mass.size()/2; i++){
        mass[i] = mass[i] + mass[sz];
        mass[sz] = mass[i] - mass[sz];
        mass[i] = mass[i] - mass[sz];
        sz--;
    }
}

int main(){
    vector <int> mass;
    mass.push_back(10);
    mass.push_back(-8);
    mass.push_back(67);
    mass.push_back(3);

    for(int i = 0; i < mass.size(); i++){
        cout << mass[i] << endl;
    }
    cout << endl;

    ficus(mass);

    for(int i = 0; i < mass.size(); i++){
        cout << mass[i] << endl;
    }
}

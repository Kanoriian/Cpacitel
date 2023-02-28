#include<vector>
#include<iostream>

using namespace std;

void itc_even_index_list(const vector <int> &mass, vector <int &mass2){
    for(int i = 0; i < mass.size(); i++){
        if (i % 2 == 0){
            mass.push_back(mass[i]):
        }
    }
}

int main(){
    vector <int> mass(5);
    vector <int> mass2;
    mass[0] = 34;
    mass[1] = 896;
    mass[2] = 4;
    mass[3] = 789;
    mass[4] = 46;
    itc_even_index_list(mass, mass2);
    for(int i = 0; i < mass2.size(); i++){
        cout << mass2[i] << " ";
    }
    return 0;
}

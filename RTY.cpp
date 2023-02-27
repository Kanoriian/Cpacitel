#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector <int> sa(vector <int> mass){
    int s = mass[0];
    mass[0] = mass[1];
    mass[1] = s;
    return mass;
}

vector <int> pb(vector <int> &mass1, vector <int> &mass2, int64_t msza){

}

void anti_fd8(vector <int> &mass){
    int k = mass[0];
    for(int i = 0; i < mass.size(); i++){
        mass[i] = mass[i+1];
    }
    mass[mass.size()-1] = k;
}

void fd8(vector <int> &mass){
    if(mass.size() == 0){
    }else{
        int a = mass[mass.size()-1];
        for(int i = mass.size()-1; i > 0; i--){
            mass[i] = mass[i-1];
        }
        mass[0] = a;
    }
}

int main(){
    vector <int> massA(5);
    vector <int> massB;
    int64_t msza = massA.size();
    int64_t mszB = 0;
    massA[0] = 1;
    massA[1] = 2;
    massA[2] = 3;
    massA[3] = 4;
    massA[4] = 5;


    massA = sa(massA);


    cout << massA[0];
    cout << massA[1];
    cout << massA[2];
    cout << massA[3];
    cout << massA[4];
}

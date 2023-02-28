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

void ra(vector <int> &mass){ // 23451
    int k = mass[0];
    for(int i = 0; i < mass.size(); i++){
        mass[i] = mass[i+1];
    }
    mass[mass.size()-1] = k;
}

void rra(vector <int> &mass){ // 51234
    if(mass.size() == 0){
    }else{
        int a = mass[mass.size()-1];
        for(int i = mass.size()-1; i > 0; i--){
            mass[i] = mass[i-1];
        }
        mass[0] = a;
    }
}

void pb(vector <int> &mass1, vector <int> &mass2, int msz1, int msz2){
    if(msz2 == 0){
        mass2[0] = mass1[0];
        msz2++;
    }if(msz2 == 1){
        mass2[1] = mass2[0];
        mass2[0] = mass1[0];
        msz2++;
    }else{
        vector <int> massd = mass2;
        for(int i = 0; i < msz2; i++){
            mass2[i+1] = massd[i];
        }
        mass2[0] = mass1[0];
        msz2++;
    }
    ra(mass1);
    msz1--;
}

int main(){
    vector <int> massA;
    vector <int> massB;
    int i = 0;
    char cent;
    while(i != 1){
        if(cent != '!'){
            cin >> massA[i];
        }else{
            i = 1;
        }
    }
    int mszA = massA.size();
    int mszB = massB.size();
    cout << mszB;
}


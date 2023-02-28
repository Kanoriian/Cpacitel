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
    vector <int> massA(5);
    vector <int> massB(3);
    int mszA = 5;
    int mszB = 3;

    massA[0] = 1;
    massA[1] = 2;
    massA[2] = 3;
    massA[3] = 4;
    massA[4] = 5;

    massB[0] = 7;
    massB[1] = 8;
    massB[2] = 9;

    pb(massA, massB, mszA, mszB);
    mszA--;
    mszB++;

    for(int i = 0; i < mszA; i++){
        cout << massA[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < mszB; i++){
        cout << massB[i] << endl;
    }
    return 0;
}

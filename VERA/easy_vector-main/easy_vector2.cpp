#include"easy_list.h"

using namespace std;

void itc_rev_list(vector <int> &mass){ //6
    int sz = mass.size()-1;
    for(int i = 0; i < mass.size()/2; i++){
        mass[i] = mass[i] + mass[sz];
        mass[sz] = mass[i] - mass[sz];
        mass[i] = mass[i] - mass[sz];
        sz = sz - 1;
    }
}

void itc_rev_par_list(vector <int> &mass){ //7
    if(mass.size() == 0){
    }else{
        for(int i = 0; i < mass.size(); i+=2){
            mass[i] = mass[i] + mass[i+1];
            mass[i+1] = mass[i] - mass[i+1];
            mass[i] = mass[i] - mass[i+1];
        }
    }
}

void itc_rshift_list(vector <int> &mass){ //8
    if(mass.size() == 0){
    }else{
        mass[mass.size()] = mass[0];
        for(int i = 0; i < mass.size(); i++){
            mass[i] = mass[i+1];
        }
    }
}

void itc_super_shift_list(vector <int> &mass, int n){ //9
    if(mass.size() == 0){
    }
    if(n >= 0){
        while(n > 0){
            mass[mass.size()] = mass[0];
            for(int i = 0; i < mass.size(); i++){
                mass[i] = mass[i+1];
            }
        }
    }
    if(n < 0){
        n = n * -1;
        while(n > 0){
            int k = mass[0];
            for(int i = 0; i < mass.size(); i++){
                mass[i] = mass[i+1];
            }
            mass[mass.size()-1] = k;
        }
    }
}

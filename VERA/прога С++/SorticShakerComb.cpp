#include<iostream>
#include<string>
#include<vector>

using namespace std;

void shakersort(vector <int> &mass){
    int leftIndex = 0;
    int rightIndex = mass.size()-1;
    bool tf = true;

    while(tf){
        tf = false;
        for(int i = leftIndex; i < rightIndex; i++){
            if(mass[i] > mass[i+1]){
                swap(mass[i], mass[i+1]);
                tf = true;
            }
        }
        rightIndex--;
        for(int i = rightIndex; i > leftIndex; i--){
            if(mass[i] < mass[i-1]){
                swap(mass[i], mass[i-1]);
                tf = true;
            }
        }
        leftIndex++;
    }
}

void combsort(vector <int> &mass){
    int can = mass.size();
    bool tf = true;

    while(can > 1 || tf){
        can = (can * 10) / 13;
        tf = false;
        for(int i = 0; i < mass.size()-can; i++){
            if(mass[i] > mass[i+can]){
                swap(mass[i], mass[i+can]);
                tf = true;
            }
        }
    }
}

int main(){
    vector <int> mass(20);
    mass[0] = 7;
    mass[1] = 10;
    mass[2] = 20;
    mass[3] = 4;
    mass[4] = 6;
    mass[5] = 16;
    mass[6] = 18;
    mass[7] = 15;
    mass[8] = 3;
    mass[9] = 11;
    mass[10] = 17;
    mass[11] = 14;
    mass[12] = 13;
    mass[13] = 2;
    mass[14] = 1;
    mass[15] = 8;
    mass[16] = 12;
    mass[17] = 5;
    mass[18] = 9;
    mass[19] = 19;

    shakersort(mass);

    combsort(mass);

    for(int i = 0; i < mass.size(); i++){
        cout << mass[i] << " ";
        cout << "idiot";
    }
}

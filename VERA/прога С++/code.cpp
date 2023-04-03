#include <iostream>
#include <string>
#include <vector>

using namespace std;

void vivid_tadgik(const vector <int> mass){
    for(int i = 0; i < mass.size(); i++){
        cout << mass[i];
        if(i < mass.size()-1){
            cout << " ";
        }
    }
    cout << endl;
}

void pisirek(vector <int> &mass){
    for(int k = 0; k < mass.size()-1; k++){
        for(int i = 0; i < mass.size()-1; i++){
            if(i != 0 || i != mass.size()-2){
                vivid_tadgik(mass);
            }
            if(mass[i] > mass[i+1]){
                swap(mass[i], mass[i+1]);
            }
        }
    }
}

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
    vector <int> mass{2,4,8,1,2,9,4,3,1};
    /*mass[0] = 8;
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
    mass[19] = 7;*/

    pisirek(mass);

}

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
    vector <int> mass;
    int msz, a;
    cout << "enter the length of the array: ";
    cin >> msz;
    cout << "enter the array numbers:" << endl;
    for(int i = 0; i < msz; i++){
        cin >> a;
        mass.push_back(a);
    }

    combsort(mass);

    for(int i = 0; i < mass.size(); i++){
        cout << mass[i] << " ";
    }
}

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
   ifstream file;
   file.open("my.txt");
   string f;
   file >> f;
   file.close();
   cout << f;
   return 0;
}















#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "sort.h"
using namespace std;

//////////////////////////-MAIN-//////////////////////////

int main() // START
{
int a, b, c, d;
ofstream file;
string e, f;

cin >> f;

d = 0;

vector <int> a2;
vector <int> b2;
vector <int> c2;

file.open("mass.txt");

for (int i = 0; f != "!"; i++) 
{
a2.push_back(mp(f));
cin >> f;
}

while (d < a2.size()) 
{

d = 0;
c = mn(a2);

while (a2[0] != c) 
{

ra(a2);

file << "ra" << endl;
cout << "ra" << endl;
}

pb(c2, a2);

file << "pb" << endl;
cout << "pb" << endl;
  
for (int l = 0; l < a2.size(); l++)
if (a2[l] == 2147483647)
d++;
}

for (int i = 0; i < c2.size(); i++) 
{

rra(c2);

file << "rrb" << endl;
cout << "rrb" << endl;

pb(b2, c2);

file << "pa" << endl;
cout << "pa" << endl;
}

zn(b2, a2);

for (int i = 0; i < a2.size(); i++)
cout << a2[i] << " ";
file.close();
return 0;
} // end

/////////////////////////////-END-/////////////////////////////

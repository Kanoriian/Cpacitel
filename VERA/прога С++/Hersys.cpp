#include<iostream>
#include<string>
#include<fstream>
#include<vector>


using namespace std;

void ra(vector <int> massA) // ra
{
if(massA.size()==0)
{
}
else
{
int a = massA[massA.size()-1];
for(int i=massA.size()-1; i>0;i--)
{
massA[i] = massA[i-1];
}
massA[0] = a;
}
} // end


int main()
{
vector <int> massA(3);
massA[0] = 1;
massA[1] = 2;
massA[2] = 3;
massA = ra(massA);
cout << massA[0];
return 0;
}















#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string zaim(string nn) {
    string rev;
    for (int i = nn.size() - 1; i >= 0; i--) {
        rev = rev.append(1, nn[i]);
    };
    return rev;
}

long long itc_len(string str) { //2+
    long long iiiiigor = 0;
    while (str[iiiiigor] != '\0') {
        iiiiigor++;
    }
    return iiiiigor;
}

string popback(string str){
    long long a = itc_len(str);
    a--;
    str[a] = '\0';
    return str;
}

long long o_pofikcheno(string cmotri){

}

int main(){
    ifstream rahat_lukum; // тип файл
    rahat_lukum.open("rahat_lukum.txt"); // открыть файл
    string cmotri;
    long long a_ho;
    long long nenado = 0;
    rahat_lukum >> cmotri; // читаем буковики из файла
    while(a_ho > 0){
          nenado += o_pofikcheno(cmotri);
          rahat_lukum >> cmotri;
          rahat_lukum.close(); // закрываем файл
    }
    cout << cmotri;
    return 0;
}

#include"str_easy.h"

using namespace std;

int itc_count_char_in_str(char ch, string str){ //5+
    char cent;
    long long geniq, sdr, a;
    geniq = 0;
    sdr = itc_len(str);
    a = 0;
    while(a <= sdr){
        cent = str[a];
        a++;
        if(cent == ch){
            geniq++;
        }else
            geniq = geniq;
    }
    return geniq;
}

string itc_even_place(string str){ //6+
    char cent;
    string Qineg = "\0";
    long long sdr, a;
    sdr = itc_len(str);
    a = 1;
    if(sdr <= 1){
        string ssd = "-1";
        return ssd;
    }
    while(sdr > a){
        cent = str[a];
        a++;
        a++;
        Qineg+= cent;
    }
    return Qineg;
}

double itc_percent_lower_uppercase(string str){ //7+
    char cent;
    double sera = 0;
    double sira = 0;
    long long a = 0;
    long long sdr = itc_len(str);
    while(sdr > a){
        cent = str[a];
        a++;
        if(cent == 'a' || cent == 'b' || cent == 'c' || cent == 'd' || cent == 'e' || cent == 'f' || cent == 'g' || cent == 'h' || cent == 'i' || cent == 'j' || cent == 'k' || cent == 'l' || cent == 'm' || cent == 'n' || cent == 'o' || cent == 'p' || cent == 'q' || cent == 'r' || cent == 's' || cent == 't' || cent == 'u' || cent == 'v' || cent == 'w' || cent == 'x' || cent == 'y' || cent == 'z'){
            sira++;
        }else
        if(cent == 'A' || cent == 'B' || cent == 'C' || cent == 'D' || cent == 'E' || cent == 'F' || cent == 'G' || cent == 'H' || cent == 'I' || cent == 'J' || cent == 'K' || cent == 'L' || cent == 'M' || cent == 'N' || cent == 'O' || cent == 'P' || cent == 'Q' || cent == 'R' || cent == 'S' || cent == 'T' || cent == 'U' || cent == 'V' || cent == 'W' || cent == 'X' || cent == 'Y' || cent == 'Z'){
            sera++;
        }
    }
    if(sira > sera){
        sira = sera / sira * 100;
    }else
        sira = sira / sera * 100;
    return sira;
}

string itc_reverse_str(string str){ //8+
    str = zaim(str);
    return str;
}

string itc_slice_str(string str, int start, int kon){ //9
    string aboba = "";
    long long soskafil = itc_len(str);
    long long a;
    if(kon > soskafil)
        kon = soskafil;
    for(a = start; a < kon; a++){
        aboba += str[a];
    }
    aboba += '\0';
    return aboba;
}

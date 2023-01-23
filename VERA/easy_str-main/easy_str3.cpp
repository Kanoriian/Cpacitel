#include"str_easy.h"

using namespace std;

string popback(string str){
    long long a = itc_len(str);
    a--;
    str[a] = '\0';
    return str;
}

bool itc_equal_reverse(string str){ // 10+
    string sdr = zaim(str);
    if(sdr == str){
        return true;
    }else
        return false;
}

string itc_cmp_str(string str1, string str2, int num){ // 11+
    string dedliparkourkillerdarkbrawlstarsassasinstalkersnaiper1931 = "";
    string mamariodejanerio;
    long long sas = itc_len(str1);
    long long soska = itc_len(str2);
    long long a;
    for(a = 0; a < num; a++){
        dedliparkourkillerdarkbrawlstarsassasinstalkersnaiper1931 += str1[a];
    }
    for(a = 0; a < soska; a++){
        dedliparkourkillerdarkbrawlstarsassasinstalkersnaiper1931 += str2[a];
    }
    for(a = num; a < sas; a++){
        dedliparkourkillerdarkbrawlstarsassasinstalkersnaiper1931 += str1[a];
    }
    for(a = 0; a < sas; a++){
        mamariodejanerio += dedliparkourkillerdarkbrawlstarsassasinstalkersnaiper1931[a];
    }
    return mamariodejanerio;
}

long long itc_find_str(string s1, string s2){ // 12
long long cute, cutenelia;
string bibaiboba;
cute = 0;
cutenelia = 0;

   while (s1[cute] != '\0'){
      if (s1[cute] == s2[cutenelia]){
           bibaiboba += s1[cute];
           cute++;
           cutenelia++;
      }else
           bibaiboba = "\0";
           cutenelia = 0;

      if (bibaiboba == s2)
           cute -= (cutenelia - 1);
           return cute;
   }
   return -1;
}

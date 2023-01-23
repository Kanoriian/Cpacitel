#ifndef EASY_STR_H_H_INCLUDED
#define EASY_STR_H_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

string zaim(string nn);

string itc_hello_str(string name); // 1

long long itc_len(string str); // 2

void itc_print_copy_str(string str, int number); // 3

void itc_first_end_three(string str); // 4

int itc_count_char_in_str(char ch, string str); // 5

string itc_even_place(string str); // 6

double itc_percent_lower_uppercase(string str); // 7

string itc_reverse_str(string str); // 8

string itc_slice_str(string str, int start, int end); //9

string popback(string str);

bool itc_equal_reverse(string str); // 10

string itc_cmp_str(string str1, string str2, int num); // 11

long long itc_find_str (string s1, string s2); // 12


#endif // EASY_STR_H_H_INCLUDED

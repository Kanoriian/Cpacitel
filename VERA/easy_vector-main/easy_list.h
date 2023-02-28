#ifndef EASY_STR_H_H_INCLUDED
#define EASY_STR_H_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2); //1+

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2); //2+

int itc_positive_list(const vector <int> &mass); //3

int itc_sl_list(const vector <int> &mass); //4

bool itc_same_parts_list(const vector <int> &mass); //5

void itc_rev_list(vector <int> &mass); //6

void itc_rev_par_list(vector <int> &mass); //7

void itc_rshift_list(vector <int> &mass); //8

void itc_super_shift_list(vector <int> &mass, int n); //9



#endif // EASY_STR_H_H_INCLUDED

/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-52.cpp
 *
 *     Description: 6.52 (Function Template minimum)
 *								  
 *
 *        Version:  1.0
 *        Created:  22/05/18 00:07:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Answer me in one word.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>
using namespace std;

template<typename T>
void minimum(T one,T two){cout<<(one<two?one:two)<<endl;}

int main(){

int a=2,b=5;
char ca='c',cb='o';
double da=2.5,db=2.4;

minimum(a,b);
minimum(ca,cb);
minimum(da,db);

return 0;
}
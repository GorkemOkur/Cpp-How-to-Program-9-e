/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-53.cpp
 *
 *     Description: 6.53 (Function Template maximum)
 *								  
 *
 *        Version:  1.0
 *        Created:  22/05/18 00:10:00
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
void maximum(T a,T b){cout<<(a>b?a:b)<<endl;}

int main(){

int a=10,b=8;
double da=12.5,db=12.9;
char ca='p',cb='e';

maximum(a,b);
maximum(da,db);
maximum(ca,cb);

return 0;
}
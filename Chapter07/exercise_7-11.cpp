/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-11.cpp
 *
 *     Description: 7.11 (One-Dimensional array Questions) 
 *								  
 *
 *        Version:  1.0
 *        Created:  23/05/18 00:05:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Begin at the beginning, … and go on till you come to the end: then stop.
 *   —Lewis Carroll
 * =====================================================================================
 */

#include<iostream>
#include<array>
using namespace std;


int main(){

//int counts[10]{};
array<int,10> counts = {};
cout<<"counts : ";for(auto i: counts){cout<<i;}cout<<endl;

array<int,15> bonus{};
cout<<"bonus : ";for(auto i: bonus){cout<<i;}cout<<endl;
for(auto& i: bonus){++i;}
cout<<"bonus after each element add 1 : ";for(auto i: bonus){cout<<i;}cout<<endl;

array<double,12> monthlyTemperatures;
for(auto& i: monthlyTemperatures){cout<<"Enter a Number : ";cin>>i;}
cout<<"monthlyTemperatures : ";for(auto& i: monthlyTemperatures){cout<<i<<" ";}cout<<endl;

array<int,15> bestScores={};
for(int i=1; i<=15 ; ++i){cout<<bestScores[i-1]<<(i%5?" ":"\n");}


return 0;
}

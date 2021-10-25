/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-18.cpp
 *
 *    Description: 2.18 (ComparingIntegers) : Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the 
 *						 words"is larger." If the numbers are equal, print the message "These numbers are equal."
 *
 *        Version:  1.0
 *        Created:  09/05/18 09:55
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   One person can make a difference and every person should try.
 *	 —John F. Kennedy
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

int main(){

int a,b;

cout<<"Enter First number : ";
cin>>a;

cout<<"Enter Second number : ";
cin>>b;

if(a>b){
	cout<<a<<" is larger.\n";
}else if(b>a){
	cout<<b<<" is larger.\n";
}else{cout<<"These numbers are equal.\n";}

return 0;
}

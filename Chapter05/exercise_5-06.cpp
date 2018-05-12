/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-06.cpp
 *
 *     Description: 5.6 (Averaging Integers)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 01:15:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   The used key is always bright.
 *   —Benjamin Franklin
 * =====================================================================================
 */

#include<iostream>
using namespace std;


int main(){

	int num=0,i=0;
	double avg=0;

	for (; num != 9999 ;)
	{
		cout<<"Enter a number : ";
		cin>>num;
		++i;
		avg=( num!=9999 ?avg+num:avg);
	}
	
	cout<<"Average : "<<avg/--i<<endl;

return 0;
}
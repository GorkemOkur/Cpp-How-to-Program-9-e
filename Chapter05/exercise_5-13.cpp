/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-13.cpp
 *
 *     Description: 5.13 (Bar Chart)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 02:40:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Who can control his fate?
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>
using namespace std;


int main(){

	int bar[5];

	for(int i=0;i<5;++i){cout<<"Enter a number : ";cin>>bar[i];}

	cout<<endl;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = bar[i]; 0<j; --j){cout<<"*";}
		cout<<endl;
	}

return 0;
}
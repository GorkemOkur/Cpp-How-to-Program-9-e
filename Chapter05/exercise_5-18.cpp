/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-18.cpp
 *
 *     Description: 5.18 (Number Systems Table)
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
#include <iomanip>
using namespace std;


int main(){

	//decimal
	for (int i = 1; i <= 256; ++i)
	{
		if(i==33 || i==65 || i==97 || i==129 || i==161 || i==193 || i==225){cout<<endl;}
		cout<<std::dec<<std::setw(3)<<i<<' ';
	}

cout<<endl<<endl;

	//octal
	for (int i = 1; i <= 256; ++i)
	{
		if(i==33 || i==65 || i==97 || i==129 || i==161 || i==193 || i==225){cout<<endl;}
		cout<<std::oct<<std::setw(3)<<i<<' ';
	}

cout<<endl<<endl;

	//hexedecimal
	for (int i = 1; i <= 256; ++i)
	{
		if(i==33 || i==65 || i==97 || i==129 || i==161 || i==193 || i==225){cout<<endl;}
		cout<<std::hex<<std::setw(3)<<i<<' ';
	}


return 0;
}
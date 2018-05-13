/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-12.cpp
 *
 *     Description: 5.12 (Drawing Patterns with Nested for Loops)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 02:30:00
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

	cout<<"(a)\n";
	for (int i=0; i<10 ;++i){
		for (int j=0; j < i; ++j){cout<<"*";}
		cout<<endl;
	}

	cout<<"(b)\n";
	for (int i=0; i<10 ;++i){
		for (int j=10; i<j ; --j){cout<<"*";}
		cout<<endl;
	}

	cout<<"(c)\n";
	for (int i=0; i<10 ;++i){
		for (int j = 0; j<i ; ++j){cout<<" ";}
		for (int j=10; i<j ; --j){cout<<"*";}
		cout<<endl;
	}

	cout<<"(d)\n";
	for (int i=0; i<10 ;++i){
		for (int j=10; i<j ; --j){cout<<" ";}
		for (int j=0; j<i ; ++j){cout<<"*";}
		cout<<endl;
	}

return 0;
}
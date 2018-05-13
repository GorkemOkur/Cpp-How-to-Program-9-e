/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-09.cpp
 *
 *     Description: 5.9 (Product of Odd Integers)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 02:00:00
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

	int sum=1;

	for (int i=1; i<15 ;++i){
		if(i%2){sum*=i;}
	}

	cout<<"Product of Odd Integers : "<<sum<<endl;

return 0;
}
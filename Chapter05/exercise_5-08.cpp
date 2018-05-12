/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-08.cpp
 *
 *     Description: 5.8 (Find the Smallest Integer)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 01:30:00
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

	int num=0,small,temp;

	cout<<"Enter a number : ";
	cin>>num;
	temp=num;
	for (int i=num; i>0 ;--i){
		cout<<"Enter a number : ";
		cin>>num;
		if(temp == i){small=num;}
		small=( num<small ?num:small);
	}

	cout<<"The smallest is : "<<small<<endl;

return 0;
}
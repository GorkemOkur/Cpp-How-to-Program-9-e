/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-05.cpp
 *
 *     Description: 5.5 (Summing Integers)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 01:10:00
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

	int num=0,sum=0;

	cout<<"Enter a number : ";
	cin>>num;

	for (int i=num; i>0 ;--i){
		cout<<"Enter a number : ";
		cin>>num;
		sum+=num;
	}

	cout<<"The sum is : "<<sum<<endl;

return 0;
}
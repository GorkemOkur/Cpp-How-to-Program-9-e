/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-30.cpp
 *
 *     Description: 6.30 (Reverse Digits)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:15:00
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

int main(){
	
	int num=0;

	cout<<"Enter a number : ";
	cin>>num;

	for(;num;num/=10){
		cout<<num%10;
	}

	cout<<endl;

return 0;
}

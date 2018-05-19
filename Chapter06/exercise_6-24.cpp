/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-24.cpp
 *
 *     Description: 6.24 (Separating Digits)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:55:00
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

void seriesOfDigits(int num){
	int temp=num,len=0,numD=1;
	for(int i=0;temp;++i,temp/=10){++len;}//find length
	for(int i=len-1;i>0;--i){numD*=10;}

	for(int i=numD; i ;i/=10){
		cout<<(num/i)%10<<"  ";
	}
}

int main(){
	
	int num=0,divider=0;

	cout<<"Enter Number : ";
	cin>>num;

	cout<<"Enter divider : ";
	cin>>divider;

	cout<<"Quotient : "<<num/divider<<endl;

	cout<<"Remainder : "<<num%divider<<endl;

	seriesOfDigits(num);

return 0;
}

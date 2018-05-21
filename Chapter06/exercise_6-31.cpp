/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-31.cpp
 *
 *     Description: 6.31 (Greatest Common Divisor)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:20:00
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

int gcd(int num1,int num2){
	if(num2==0){
		return num1;
	}else{
		return gcd(num2,num1%num2);
	}
}

int main(){
	
	int num1{},num2{};

	cout<<"Enter the number1 : ";cin>>num1;
	cout<<"Enter the number2 : ";cin>>num2;

	cout<<"Greatest Common Divisor between "<<num1" - "<<num2<<" : "<<gcd(num1,num2);

return 0;
}

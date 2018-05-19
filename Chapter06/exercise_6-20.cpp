/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-20.cpp
 *
 *     Description: 6.20 (Multiples)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:45:00
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

bool multiple(int num1,int num2){
	return ( !(num1%num2) ? true : false );
}

int main(){
	
	int num1=0,num2=0;

	cout<<"Enter num-1 : ";
	cin>>num1;
	cout<<"Enter num-2 : ";
	cin>>num2;

	cout<<"hypotenuse : "<<(multiple(num1,num2)?"TRUE":"FALSE")<<endl;

return 0;
}

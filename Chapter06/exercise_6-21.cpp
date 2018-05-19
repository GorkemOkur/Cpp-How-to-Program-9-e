/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-21.cpp
 *
 *     Description: 6.21 (Even Numbers)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:50:00
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

bool isEven(int num){ return !(num%2); }

int main(){
	
	int num=0;

	cout<<"Enter num-1 : ";
	cin>>num;

	cout<<"isEven : "<<(isEven(num)?"TRUE":"FALSE")<<endl;

return 0;
}

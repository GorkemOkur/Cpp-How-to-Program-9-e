/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-29.cpp
 *
 *     Description: 6.29 (Prime Numbers)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:10:00
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

bool isPrime(int num){
	bool isPrime=true;
	for (int i = 2; i < num/2; ++i)
	{
		if( !(num%i) ){isPrime=false;}
	}
	return isPrime;
}

int main(){
	
	for(int i=2; i<10 ;++i){
		if(isPrime(i)){
			cout<<i<<" is a prime number."<<endl;
		}
	}

return 0;
}

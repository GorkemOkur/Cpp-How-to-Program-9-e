/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-27.cpp
 *
 *     Description: 7.27 (The Sieve of Eratosthenes)
 *								  
 *
 *        Version:  1.0
 *        Created:  27/05/18 00:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Begin at the beginning, … and go on till you come to the end: then stop.
 *   —Lewis Carroll
 * =====================================================================================
 */

#include<iostream>
#include<array>
using namespace std;

const size_t size=1000;

void isPrime(int a);

int main(){

	array<int,size> prime;
	for(int& a:prime){a=1;}

	for(int i=1; i<size ;++i){if(i%2==0)prime[i]=0;}//subscript_2
   for(int i=1; i<size ;++i){if(i%3==0)prime[i]=0;}//subscript_3

	for(int i=1; i<size ;++i){
		if(prime[i] == 1){isPrime(i);}
	}
	
return 0;
}

void isPrime(int a){
	bool is=true;
	for(int i=2; i<a/2 ;++i){
		if(i!=a && a%i == 0){is=false;}
	}
	if(is){cout<<a<<" , ";}
}
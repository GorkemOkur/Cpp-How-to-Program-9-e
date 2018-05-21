/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-37.cpp
 *
 *     Description: 6.37 (Fibonacci Series: Iterative Solution)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:40:00
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

void fibonacci(int num){
	
	unsigned int fib[num];

	fib[0]=0;fib[1]=1;fib[2]=1;

	cout<<fib[0]<<","<<fib[1]<<","<<fib[2]<<(num > 3?",":"");

	for (int i = 3; i < num; ++i)
	{
	    fib[i]=fib[i-2]+fib[i-1];
		cout<<fib[i-2]+fib[i-1]<<(num > i+1?",":"");
	}

}//func fibonacci

int main(){

	fibonacci(4);

return 0;
}
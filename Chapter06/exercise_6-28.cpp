/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-28.cpp
 *
 *     Description: 6.28 (Perfect Numbers)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:05:00
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

bool isPerfect(int num){
	int sum=0;
	for (int i = 1; i < num; ++i)
	{
		if(!(num%i))
			sum+=i;
	}

	return (sum == num?true:false); 
}

int main(){

	for (int i=1; i < 1000 ; ++i)
	{
		if(isPerfect(i)){
			cout<<"Perfect Number : "<<i<<endl;
		}
	}

return 0;
}

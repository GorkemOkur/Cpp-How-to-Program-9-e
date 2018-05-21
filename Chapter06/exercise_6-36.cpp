/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-36.cpp
 *
 *     Description: 6.36 (Recursive Exponentiation)
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

double power(double base,int exponent){
	if(exponent == 1){return base;}
	return base * power(base,exponent-1);
}

int main(){

	cout<<power(3,3);

return 0;
}

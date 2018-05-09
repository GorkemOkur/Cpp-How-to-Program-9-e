/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-26.cpp
 *
 *    Description: 2.26 (Checkerboard Pattern) Display the following checkerboard pattern with eight output statements, 
 *								 then display the same pattern using as few statements as possible.
 *	
 *
 *        Version:  1.0
 *        Created:  10/05/18 01:41:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

int main(){

for (int i = 0; i < 8; ++i)
{
	cout<< (i%2 ? " * * * * * * * *\n" : "* * * * * * * *\n" ); 
}

return 0;
}

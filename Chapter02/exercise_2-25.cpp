/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-25.cpp
 *
 *    Description: 2.25 (Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second.
 *	
 *
 *        Version:  1.0
 *        Created:  10/05/18 01:31:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>

using namespace std;

int main(){

int a,b;

cout<<"Enter two integers : ";
cin>>a>>b;

cout<<(a%b?"first is not a multiple of the second":"first is a multiple of the second")<<endl;

return 0;
}

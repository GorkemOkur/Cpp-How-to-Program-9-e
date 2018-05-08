/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-16.cpp
 *
 *    Description:  (Arithmetic) : Write a program that asks the user to enter two numbers, obtains the two
 *						   numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
 *
 *        Version:  1.0
 *        Created:  09/05/18 00:44:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 *
 */

#include<iostream>

using namespace std;

int main(){

cout<<"---This program ask two number from the Users and returned this two numbers \nsum, \nproduct, \ndifference, \nand quotient---\n";

int a,b;

cout<<"Enter first number : ";
cin>>a;
cout<<"Enter Second number : ";
cin>>b;

cout<<"Sum of two numbers : "<<a+b;
cout<<"\nProduct of two numbers : "<<a*b;
cout<<"\nDifference of two numbers : "<<a-b;
cout<<"\nQuotient of two numbers : "<<a/b<<"\n";

return 0;
}
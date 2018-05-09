/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-24.cpp
 *
 *    Description: 2.24 (Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even
 *
 *        Version:  1.0
 *        Created:  10/05/18 00:55:00
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
  int a;
  cout<<"Enter an number : ";
  cin>>a;
  cout<<a<< (a%2?" is odd":" is even");
  
return 0;
}

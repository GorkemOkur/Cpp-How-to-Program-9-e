/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-28.cpp
 *
 *    Description: 2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and
 *								 prints them separated by three spaces each.
 *
 *        Version:  1.0
 *        Created:  10/05/18 01:10:00
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

  int n;

  cout<<"Enter a five-digit integer : ";
  cin>>n;

  cout<<n/10000<<"   "<<n/1000%10<<"   "<<n/100%10<<"   "<<n/10%10<<"   "<<n%10;

return 0;
}

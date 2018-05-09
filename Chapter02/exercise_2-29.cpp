/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-29.cpp
 *
 *    Description: 2.29 (Table) Using the techniques of this chapter, write a program that calculates the squares and cubes of the integers from 0 to 10.
 *								 -Use tabs to print-
 *
 *        Version:  1.0
 *        Created:  10/05/18 01:28:00
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

  cout<<"integer\t"<<"square\t"<<"cube\n";

  for (int i = 0; i <= 10; ++i)
  {
    cout<<i<<'\t'<<i*i<<'\t'<<i*i*i<<'\n';
  }

return 0;
}

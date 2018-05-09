/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-27.cpp
 *
 *    Description: 2.27 (Integer Equivalent of a Character) Write a program that prints the integer equivalent of a character typed at the keyboard.
 *								 Store the input in a variable of type char.
 *								 Test your program several times using uppercase letters, lowercase letters, digits and special characters (like $).
 *
 *        Version:  1.0
 *        Created:  10/05/18 01:13:00
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

char c;

cout<<"Enter a character : ";
cin>>c;

cout<<static_cast<int>(c);

return 0;
}

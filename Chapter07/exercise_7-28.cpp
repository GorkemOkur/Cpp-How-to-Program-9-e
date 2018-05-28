/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-28.cpp
 *
 *     Description: 7.28 (Palindromes)
 *								  
 *
 *        Version:  1.0
 *        Created:  28/05/18 00:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Begin at the beginning, … and go on till you come to the end: then stop.
 *   —Lewis Carroll
 * =====================================================================================
 */

#include<iostream>
#include<string>
using namespace std;

bool testPalindrome(string str,int n,int size){
	if(size == 0){return str[n] == str[size]; }
	return str[n] == str[size] && testPalindrome(str,n+1,size-1);
}

int main(){
    string str{};
    cout<<"Enter a string : ";
    getline(cin,str);
    
    cout<<testPalindrome(str,0,str.size()-1);

return 0;
}
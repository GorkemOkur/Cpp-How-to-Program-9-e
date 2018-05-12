/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-26.cpp
 *
 *     Description: 4.26 (Palindromes)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 00:30:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   All the evolution we know of proceeds from the vague to the definite.
 *   —Charles Sanders Peirce
 * =====================================================================================
 */

#include<iostream>
using namespace std;


int main(){
	int num=0,temp=0,pal=0,m=10000;

	cout<<"Enter five-digit integers : ";
	cin>>num;

	temp=num;

	for(int i=0;i<5;++i){
		pal+=(temp%10)*m;
		m/=10;
		temp/=10;
	}
cout<<"Numbers is ";
	if(pal == num){
		cout<<"palindrome.\n";
	}else{cout<<"not palindrome.\n";}

return 0;
}
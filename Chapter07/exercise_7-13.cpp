/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-13.cpp
 *
 *     Description: 7.13 (Duplicate Elimination with array)
 *								  
 *
 *        Version:  1.0
 *        Created:  23/05/18 00:10:00
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
#include<array>
#include<algorithm>
using namespace std;


int main(){

	array<int,20> arr{};
	int size=0;

	for (int i=0; i < 20; ++i)
	{
		int temp=0;
		cout<<"Enter a number between [10-100] : ";cin>>temp;
		if(temp>=10 && temp<=100){
			if(all_of(arr.begin(),arr.end(),[temp](int i){return i!=temp;})){
				arr[size++]=temp;
			}
		}
	}

	for(auto i: arr){if(i!=0)cout<<i<<" ";}
		
return 0;
}
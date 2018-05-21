/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-27.cpp
 *
 *     Description: 6.27 (Find the Minimum)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Answer me in one word.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>
using namespace std;

double smallest(double* nums,int sz){
	double temp=nums[0];
	for (int i = 0;i<sz; ++i)
	{
		if(temp > nums[i]){temp=nums[i];}
	}
	return temp;
}

int main(){
	
	int sz=3;
	double nums[sz];

	for(int i=0; i<3 ;++i){
		cout<<"Enter a number : ";
		cin>>nums[i];
	}

	cout<<smallest(nums,sz)<<endl;

return 0;
}

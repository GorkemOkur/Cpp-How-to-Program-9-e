/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-32.cpp
 *
 *     Description: 7.32 (Find the Minimum Value in an array)
 *								  
 *
 *        Version:  1.0
 *        Created:  30/05/18 08:00:00
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
using namespace std;

int recursiveMinimum(int* arr,int b,int e){
	if(b==e){return arr[0];}
	if(arr[0] > arr[b]){arr[0]=arr[b];}
	recursiveMinimum(arr,b+1, e);
}

int main(){
	int arr[]={2,1,5,0,8,6,7};

	cout<<"smallest element of the array : "<<recursiveMinimum(arr,0,7)<<endl;

return 0;
}

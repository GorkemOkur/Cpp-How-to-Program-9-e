/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-30.cpp
 *
 *     Description: 7.30 (Print a narray)
 *								  
 *
 *        Version:  1.0
 *        Created:  29/05/18 09:00:00
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

void printArray(int* arr,int b,int e){
	if(b == e){return;}
	cout<<arr[b]<<" , ";
	printArray(arr,++b,e);
}

int main(){
    int arr[]={0,1,2,3,4,5,6};

    printArray(arr,0,7);

return 0;
}

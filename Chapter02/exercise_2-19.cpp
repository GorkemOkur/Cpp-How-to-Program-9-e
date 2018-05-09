/*
 * =====================================================================================
 *
 *       Filename:  exercise_2-19.cpp
 *
 *    Description: 2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and 
 *                       prints the sum, average, product, smallest and largest of these numbers.
 *
 *        Version:  1.0
 *        Created:  10/05/18 00:43:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *   Organization:  -
 *
 *   What’s in a name? that which we call a rose By any other name would smell as sweet.
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>

using namespace std;

int main(){

int arr[3];

cout<<"Enter tree integers : ";
cin>>arr[0]>>arr[1]>>arr[2];

//bubble sort 
for(int i=0;i<3;++i){
	for (int j = 0; j < 3; ++j){
		if(arr[i]<arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}

cout<<"Sum is : "<<arr[0]+arr[1]+arr[2];
cout<<"\nAverage is : "<<arr[0]*arr[1]*arr[2];
cout<<"\nProduct is  : "<<(arr[0]+arr[1]+arr[2])/3;
cout<<"\nSmallest is : "<<arr[0];
cout<<"\nLargest is : "<<arr[2];

return 0;
}

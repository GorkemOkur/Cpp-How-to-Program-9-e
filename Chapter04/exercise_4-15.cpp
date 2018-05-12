/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-15.cpp
 *
 *     Description: 4.15 (Sales CommissionCalculator)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 12:52:00
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
	int sales=0;

	do{
		cout<<"Enter sales in dollars (-1 to end): ";
		cin>>sales;
		if(sales != -1){
			cout<<"Salary is: $"<<((sales/100)* 9)+200<<endl;	
		}
	}while(sales != -1);

return 0;
}
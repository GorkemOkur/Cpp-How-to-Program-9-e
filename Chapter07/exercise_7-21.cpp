/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-21.cpp
 *
 *     Description: 7.21 (Sales Summary)
 *								  
 *
 *        Version:  1.0
 *        Created:  25/05/18 23:00:00
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
#include<iomanip>
using namespace std;

int main(){

	array< array<int,4> ,5> salespeople{};

	for(int i=0; i<3 ;++i){// Days 
				int saNumber=0,prNumber=0,sumPrSold=0;
				cout<<"Enter the salesperson number :(1-4) ";cin>>saNumber;
				cout<<"Enter the product number :(1-5) ";cin>>prNumber;
				cout<<"Enter the total dollar value of that product sold that day : ";cin>>sumPrSold;

				salespeople[saNumber-1][prNumber-1]+=sumPrSold;
	}

for (int i = 0; i < salespeople.size() ; ++i){cout<<setw(8)<<"saler-"<<i+1;}


return 0;
}

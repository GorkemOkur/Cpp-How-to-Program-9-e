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
	array< array<int,5> ,4> salespeople;

    for(int i=0; i<5 ;++i){for(int j=0; j<4 ;++j)salespeople[i][j]=0;}

	for(size_t i=0; i<1 ;++i){// Days 
				int saNumber=0,prNumber=0,sumPrSold=0;
				cout<<"Enter the salesperson number :(1-4) ";cin>>saNumber;
				cout<<"Enter the product number :(1-5) ";cin>>prNumber;
				cout<<"Enter the total dollar value of that product sold that day : ";cin>>sumPrSold;

				salespeople[prNumber-1][saNumber-1]+=sumPrSold;
	}

cout<<setw(12)<<"Table";
for (size_t i = 0; i < salespeople.size() ; ++i){cout<<setw(12)<<"saler-"<<i+1;}
cout<<setw(12)<<"Total Sales"<<endl;

for (int i=0; i<5; ++i){
	cout<<setw(12)<<"Product-"<<i+1;
	int sum=0;
	for (int j=0; j<4; ++j){
	    sum+=salespeople[i][j];
		cout<<setw(12)<<salespeople[i][j];
	}
	cout<<setw(12)<<sum<<endl;
}

cout<<setw(12)<<"  Total Sales";

for (int i=0; i<4; ++i){
	int sum=0;
	for (int j=0; j<5; ++j){
		sum+=salespeople[j][i];
	}
	cout<<setw(12)<<sum;
}

return 0;
}
/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-13.cpp
 *
 *     Description: 4.13 (Gas Mileage)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 00:25:00
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
#include<iomanip>
#include <cstring>
using namespace std;


int main(){

	int cnt=1,c=0,bmiles=0;
	double bgalon=0;

	do{
		int m=0;
		double g=0; 

		cout<<"Enter miles driven (-1 to quit): ";
		cin>>m;

		if(m != -1){
			cout<<"Enter gallons used: ";
			cin>>g;
			cout<<"MPG this trip: "<<setprecision(8)<<m/g<<endl;
			
			bmiles+=m; bgalon+=g;

			cout<<"Total MPG: "<< bmiles/bgalon <<"\n\n";

			++cnt;
		}

		c=m;
	}while(c != -1);


return 0;
}
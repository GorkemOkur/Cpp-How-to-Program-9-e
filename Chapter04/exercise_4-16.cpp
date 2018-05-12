/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-16.cpp
 *
 *     Description: 4.17 (Salary Calculator)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 13:15:00
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
	int hour=0;
	double rate=0;

	do{
		cout<<"Enter hours worked (-1 to end): ";
		cin>>hour;

		if(hour != -1){
			cout<<"Enter hourly rate of the employee ($00.00): ";
			cin>>rate;

			double salary = ( hour <= 40 ? rate*hour :( (40*rate)+((hour-40)*(rate*1.5)) ) );

			cout<<"Salary is : $"<<salary<<"\n\n";
		}

	}while(hour != -1);

return 0;
}
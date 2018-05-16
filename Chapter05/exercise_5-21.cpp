/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-21.cpp
 *
 *     Description: 5.21 (Calculating Salaries)
 *								  
 *
 *        Version:  1.0
 *        Created:  15/05/18 08:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Who can control his fate?
 *   —William Shakespeare
 * =====================================================================================
 */

#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;


int main(){
	int employeeCode=0;
	double salary=0,hour=0;
	
	cout<<"Enter the Employee-Code : ";
	cin>>employeeCode;

	switch(employeeCode){
		case 1:{
			cout<<"Enter fixed weekly salary : ";
			cin>>salary;

			cout<<"weekly salary : $"<<salary<<endl;

			break;
		}
		case 2:{
			cout<<"Enter fixed weekly salary : ";
			cin>>salary;
			cout<<"Enter working hour : ";
			cin>>hour;
			
			cout<<"weekly salary : $"<<(hour > 40 ?(salary+((salary/40)*1.5)):salary)<<endl;

			break;
		}
		case 3:{
			cout<<"Enter gross weekly sales : ";
			cin>>salary;
			
			cout<<"weekly salary : $"<<((salary/100 * 5.7)+250)<<endl;

			break;
		}
		case 4:{
			cout<<"Enter produced item amount : ";
			cin>>salary;

			double item=0;
			cout<<"Enter price of per item : ";
			cin>>item;

			cout<<"weekly salary : $"<<salary*item<<endl;
			break;
		}
		default:{cout<<"Please Enter a valid Employee Code !...\n";}
	}

return 0;
}

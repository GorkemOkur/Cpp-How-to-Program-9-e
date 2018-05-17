/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-12.cpp
 *
 *     Description: 6.12 (Parking Charges)
 *								  
 *
 *        Version:  1.0
 *        Created:  17/05/18 08:00:00
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
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;

class Car{
	int carId;
	double hour;
public:
	Car(int id,double hour):carId(id),hour(hour){}
	
	int getCarId(){return carId;}
	double getHour(){return hour;}

	void setCarId(int id){carId = id;}
	void setCarId(double h){hour=h;}
};


void calculateCharges(vector<Car> v){
	double hour=0;
	double charge=0;
	cout<<"Car"<<"\tHours"<<"\tCharge\n";
	for_each(v.begin(), v.end(),[&hour,&charge](Car c){
		double ch=2;
		if(c.getHour() < 3){
			ch=2;
		}else{
			ch = (ch+((c.getHour()-3)*0.5)>10?10:ch+((c.getHour()-3)*0.5));
		}

		cout<<c.getCarId()<<"\t"<<c.getHour()<<"\t"<<ch<<"\n";
		hour+=c.getHour();
		charge+=ch;
	});

	cout<<"TOTAL\t"<<hour<<"\t"<<charge<<endl;
}


int main(){
	int carAmount=3;
	vector<Car> cars;

	for (int i = 0; i < carAmount; ++i)
	{
		double h=0;
		cout<<"Enter the hours parked : \n";
		cin>>h;
		if(h>24){h=24;}
		Car newCar{i+1,h};
		cars.push_back(newCar);
	}


	calculateCharges(cars);

return 0;
}

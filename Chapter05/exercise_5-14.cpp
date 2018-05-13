/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-14.cpp
 *
 *     Description: 5.14 (Calculating Total Sales)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 14:30:00
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
using namespace std;


int main(){
	int pn=0,quantity=0;
	double sum=0;

	cout<<"Enter  a product number : ";
	cin>>pn;

	cout<<"Enter  quantity of product : ";
	cin>>quantity;

	sum=quantity;

	switch(pn){
		case 1:{sum*=2.98;break;}
		case 2:{sum*=4.50;break;}
		case 3:{sum*=9.98;break;}
		case 4:{sum*=4.49;break;}
		case 5:{sum*=6.87;break;}
		default:{cout<<"\n--wrong product number--\n";}
	}

	cout<<"Product number: "<<pn<<" Quantity sold: "<<quantity<<" total price: "<<sum<<endl;

return 0;
}
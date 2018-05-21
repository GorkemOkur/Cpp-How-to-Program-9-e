/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-26.cpp
 *
 *     Description: 6.26 (Celsius and Fahrenheit Temperatures)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 13:50:00
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
#include<iomanip>
using namespace std;

double celsius(double f){return (f-32)/1.8;}
double fahrenheit(double c){return (c*1.8)+32;}

int main(){
	//cout<<"Celsius (°C)\n";
	cout<<"Celsius (\u2103)"<<"\tFahrenheit (\u2103)\n";
	for(int i=0; i<=100 ;++i){
		cout<<setw(11)<<std::left<<i<<'\t'<<fahrenheit(i)<<endl;
	}

return 0;
}

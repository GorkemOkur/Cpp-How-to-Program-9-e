/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-25.cpp
 *
 *     Description: 6.25 (Calculating Number of Seconds)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 01:50:00
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
#include<cmath>
using namespace std;

int getSecond(int hours,int minutes,int seconds){
	int ret=((hours*60)*60) + (minutes*60) + seconds;
	return ret;
}

int main(){
	
	cout<<"the amount of time in seconds between two times : "
		 <<abs(getSecond(6,30,0)-getSecond(0,0,0));
	

return 0;
}

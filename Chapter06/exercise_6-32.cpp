/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-32.cpp
 *
 *     Description: 6.32 (Quality Points for Numeric Grades)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:25:00
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
using namespace std;

int qualityPoints(int average){
	int ret=999;

	if(average<60){ret=0;}else if(average<70){ret=1;}else if(average<80){ret=2;}else if(average<90){ret=3;}else if(average<=100){ret=4;}

	return ret;
}

int main(){
	
	cout<<" student’s average(55) : "<<qualityPoints(55)<<endl;
	cout<<" student’s average(65) : "<<qualityPoints(65)<<endl;
	cout<<" student’s average(75) : "<<qualityPoints(75)<<endl;
	cout<<" student’s average(85) : "<<qualityPoints(85)<<endl;
	cout<<" student’s average(95) : "<<qualityPoints(95)<<endl;

return 0;
}

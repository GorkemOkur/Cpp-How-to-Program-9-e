/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-10.cpp
 *
 *     Description: 5.10 (Factorials)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 02:10:00
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

	int fa=1;
	for (int i=1; i<=5 ;++i){
		fa*=i;
	}

	cout<<"The factorial 5! : "<<fa<<endl;

return 0;
}
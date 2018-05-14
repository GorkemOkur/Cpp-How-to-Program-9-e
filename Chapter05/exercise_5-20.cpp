/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-20.cpp
 *
 *     Description: 5.20 (Pythagorean Triples)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 16:10:00
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
	
	for (int i = 3; i < 500; ++i)
	{
		for (int j = 4; j <500 ; ++j)
		{
			for (int k = 5; k <500 ; ++k)
			{
				if( (pow(i,2)+pow(j,2)) == pow(k,2) ){
					cout<<"valid ->  i: "<<i<<" j: "<<j<<" k: "<<k<<endl;
				}
			}
		}
	}


return 0;
}
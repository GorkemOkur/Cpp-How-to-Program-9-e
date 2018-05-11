/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-18.cpp
 *
 *     Description: 4.18 (Tabular Output)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 01:15:00
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

	int cnt=1;

	cout<<"N\t"<<"10*N\t"<<"100*N\t"<<"1000*N"<<endl;

	while(cnt <= 5){
		cout<<cnt<<"\t"<<cnt*10<<"\t"<<cnt*100<<"\t"<<cnt*1000<<endl;
		cnt++;
	}

return 0;
}
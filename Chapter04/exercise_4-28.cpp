/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-28.cpp
 *
 *     Description: 4.28 (Checkerboard Pattern of Asterisks)
 *								  
 *
 *        Version:  1.0
 *        Created:  13/05/18 00:50:00
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
	int col=9,row=8;

	for (int i = row; i > 0; --i){

		if(i%2)cout<<" ";

		for(int j=col; j>0 ;--j){cout<<"* ";}

		cout<<endl;
	}

return 0;
}
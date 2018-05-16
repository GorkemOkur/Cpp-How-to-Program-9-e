/*
 * =====================================================================================
 *
 *       Filename:  exercise_5-23.cpp
 *
 *     Description: 5.23 (Diamond of Asterisks)
 *								  
 *
 *        Version:  1.0
 *        Created:  16/05/18 14:20:00
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
	int row=9;
	int ast=1;

	for (int i =0; i <= row; ++i)
	{

		if(i == row/2)
		{
			for(int j=0;j<row;++j)
				cout<<"*";
			cout<<endl;
		}
		else if(i<row/2)
		{
			for(int j=row/2-i ;j>0; --j){cout<<" ";}
			for(int j=ast;j>0;--j){cout<<"*";}
			cout<<endl;

			ast+=2;
		}
		else
		{
			for(int j=i-row/2; j>0 ;--j){cout<<" ";}
			for(int j=ast-2; j>0 ;--j){cout<<"*";}
			cout<<endl;
			ast-=2;
		}

		
	}


return 0;
}
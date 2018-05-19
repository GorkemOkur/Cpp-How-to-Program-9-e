/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-23.cpp
 *
 *     Description: 6.23 (Square of Any Character)
 *								  
 *
 *        Version:  1.0
 *        Created:  19/05/18 01:55:00
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

void squareOfAnyCharacter(int side,char fillCharacter){
	for (int i = 0; i < side; ++i)
	{
		for (int i = 0; i < side; ++i)
		{
			cout<<fillCharacter;
		}
		cout<<endl;
	}
}

int main(){
	
	int side=0;
	char fillCharacter=' ';

	cout<<"Enter side : ";
	cin>>side;

	cout<<"Enter Character : ";
	cin>>fillCharacter;

	cout<<"-----------------------------"<<endl;

	squareOfAnyCharacter(side,fillCharacter);
	
	cout<<"-----------------------------"<<endl;

return 0;
}

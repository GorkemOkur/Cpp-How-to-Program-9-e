/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-33.cpp
 *
 *     Description: 6.33 (Coin Tossing)
 *								  
 *
 *        Version:  1.0
 *        Created:  20/05/18 14:30:00
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
#include<ctime>
#include<random>
using namespace std;

unsigned int flip(){
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(0,1);
	return randomInt(engine);
}

int main(){

	int heads{},tails{};

	for (int i = 0; i < 1000000; ++i)
	{
		switch(flip()){
			case 0:{
				cout<<"Tails : "<<tails++<<endl;
				break;
			}
			case 1:{
				cout<<"Heads : "<<heads++<<endl;
				break;
			}
		}//switch

	}

return 0;
}

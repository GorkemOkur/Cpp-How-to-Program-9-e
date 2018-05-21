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
	uniform_int_distribution<unsigned int> randomInt(1,1000);
	return randomInt(engine);
}

int main(){

	int number=flip(),guess{};
	cout<<"I have a number between 1 and 1000.\nCan you guess my number?\n\n";
	char onemore{};

	do{
		number=flip();
		do{
			cout<<"Please type your first guess : ";
			cin>>guess;
			cout<<(number > guess ? "Too low. Try again." : "Too high. Try again.")<<"\n\n";
		}while(guess != number);

		cout<<"Excellent! You guessed the number!\nWould you like to play again (y or n)? : ";cin>>onemore;
	}while(onemore == 'y');

return 0;
}

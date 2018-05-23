/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-16.cpp
 *
 *     Description: 7.16 (Dice Rolling)
 *								  
 *
 *        Version:  1.0
 *        Created:  23/05/18 09:35:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Begin at the beginning, … and go on till you come to the end: then stop.
 *   —Lewis Carroll
 * =====================================================================================
 */

#include<iostream>
#include<array>
#include<random>
#include<ctime>
#include<iomanip>
using namespace std;

int main(){

	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1,6);

	array<int, 11> arr{};

	for(int i=0; i<36 ;++i){
		int dice1 = randomInt(engine);
		int dice2 = randomInt(engine);

		int sum=dice1+dice2;

		if( 2<=sum && sum<=12 ){
			arr[sum-2]++;
		}
	}

	cout<<setw(3)<<"dic";
	for(int i=1;i<=6;++i)cout<<setw(3)<<i;
    cout<<endl;
    
	for(int i=1; i<=6 ;++i){
		cout<<setw(3)<<i;
		for(int j=1; j<=6 ;++j){
			cout<<setw(3)<<arr[(i+j)-2];
		}
		cout<<endl;
	}

return 0;
}

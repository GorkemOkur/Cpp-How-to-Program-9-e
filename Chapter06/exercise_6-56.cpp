/*
 * =====================================================================================
 *
 *       Filename:  exercise_6-56.cpp
 *
 *     Description: 6.56 (C++11 Scoped enum)
 *								  
 *
 *        Version:  1.0
 *        Created:  22/05/18 00:12:00
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

enum class AccountType:unsigned int{SAVINGS,CHECKING,INVESTMENT};

int main(){

AccountType gorkem = AccountType::INVESTMENT;

if(gorkem == AccountType::INVESTMENT){
   cout << "--WON--" <<endl;
}

return 0;
}

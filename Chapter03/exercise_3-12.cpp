/*
 * =====================================================================================
 *
 *       Filename:  exercise_3-12.cpp
 *
 *     Description: 3.12 (Account Class)  Create an Account class.
 *			  -- The constructor should validate the initial balance to ensure that it’s greater than or equal to 0
 *			  -- credit should add an amount to the current balance
 *			  -- debit should withdraw money "Debit amount exceeded account balance."
 *			  -- getBalance should return the current balance
 *	
 *
 *        Version:  1.0
 *        Created:  11/05/18 01:26:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Nothing can have value without being an object of utility.
 *   —Karl Marx
 * =====================================================================================
 *
 */
#include<iostream>
#include<stdexcept>
#include<cstring>
using namespace std;

class Account{
public:

	explicit Account(double);
	void credit(double);
	void debit(double);// or can be bool
	double getBalance();

private:
	double balance;
};

	Account::Account(double balance):balance(balance){}

	void Account::credit(double money){
		if (money >= 0){
			balance +=money;
		}else{throw invalid_argument("invalid amount");}
	}

	void Account::debit(double money){
		if(balance > money){
			balance-=money;
		}else{
			throw invalid_argument("Debit amount exceeded account balance. Amount : " + to_string(money));
		}
	}

	double Account::getBalance(){return balance;}


int main(){

	Account ac1(502.5);

	try{
		cout<<"Balance is : "<<ac1.getBalance()<<" eur.\n";

		ac1.debit(50);
		cout<<"after withdraw 50 eur : "<<ac1.getBalance()<<endl;

		cout<<"before withdraw 700 eur : "<<endl;
		ac1.debit(700.0);
		
	}catch(invalid_argument& e){
		cout<<e.what()<<endl;
	}

return 0;
}

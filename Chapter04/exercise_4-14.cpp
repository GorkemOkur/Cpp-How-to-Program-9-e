/*
 * =====================================================================================
 *
 *       Filename:  exercise_4-14.cpp
 *
 *     Description: 4.14 (Tabular Output)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 12:00:00
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
	int accountNumber=0;
	double beginBlance=0, charge=0, credit=0, limit=0;

	do{
		cout<<"Enter account number (or -1 to quit): ";
		cin>>accountNumber;
		if(accountNumber != -1){
			cout<<"Enter beginning balance: ";
			cin>>beginBlance;

			cout<<"Enter total charges: ";
			cin>>charge;

			cout<<"Enter total credits: ";
			cin>>credit;

			cout<<"Enter credit limit: ";
			cin>>limit;
			
			beginBlance +=charge-credit;

			cout<<"New balance is: "<<beginBlance<<endl;

			if(beginBlance > limit){
				cout<<"Accoun: "<<accountNumber<<endl;
				cout<<"Credit limi: "<<credit<<endl;
				cout<<"Balance: "<<beginBlance<<endl;
				cout<<"Credit Limit Exceeded.\n\n";
			}
		}
	}while(accountNumber != -1);

return 0;
}
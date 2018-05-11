/*
 * =====================================================================================
 *
 *       Filename:  exercise_3-13.cpp
 *
 *     Description: 3.13 (Invoice Class) Create a class called Invoice that a hardware store might use to represent
 *								  an invoice for an item sold at the store.
 *
 *        Version:  1.0
 *        Created:  12/05/18 00:01:00
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
#include<cstring>
using namespace std;

class Invoice{
public:

	Invoice(string,string,int,int);

	string getNumber();
	string getDescription();
	int getQuantity();
	int getPrice();

	void setDescription(string);
	void setNumber(string);
	void setQuantity(int);
	void setPrice(int);

	int getInvoiceAmount();

private:
	string number;
	string description;
	int quantity;
	int price;
};

Invoice::Invoice(string number,string description,int quantity,int price):number(number), description(description), quantity(quantity), price(price){}

string Invoice::getNumber(){return number;}
string Invoice::getDescription(){return description;}
int Invoice::getQuantity(){return quantity;}
int Invoice::getPrice(){return price;}

void Invoice::setNumber(string number){this->number=number;}
void Invoice::setDescription(string description){this->description=description;}
void Invoice::setQuantity(int quantity){this->quantity=(quantity > 0?quantity:0);}
void Invoice::setPrice(int price){this->price=(price > 0?price:0);}

int Invoice::getInvoiceAmount(){return quantity*price;}

int main(){

Invoice in1("A-30215","calc v1",5,150);

cout<<"Invoice-1 Number: "<<in1.getNumber()<<" Description: "<<in1.getDescription()<<" Quantity: "<<in1.getQuantity()<<" Price: "<<in1.getPrice();

return 0;
}
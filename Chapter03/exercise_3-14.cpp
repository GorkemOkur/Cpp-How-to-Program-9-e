/*
 * =====================================================================================
 *
 *       Filename:  exercise_3-14.cpp
 *
 *     Description: 3.14 (Employee Class)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 00:10:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   Nothing can have value without being an object of utility.
 *   —Karl Marx
 * =====================================================================================
 */

#include<iostream>
#include<cstring>
using namespace std;

class Employee{
public:

	Employee(string,string,int);

	string getFirstName()const;
	string getLastName()const;
	int getSalary()const;

	void setFirstName(string);
	void setLastName(string);
	void setSalary(int);

	int getAnnualSalary();

	friend ostream& operator<<(ostream&,const Employee&);

private:
	string firstName;
	string lastName;
	int salary;
};

Employee::Employee(string fName,string lName,int salary):firstName(fName), lastName(lName), salary(salary){}

string Employee::getFirstName()const{return firstName;}
string Employee::getLastName()const{return lastName;}
int Employee::getSalary()const{return salary;}

void Employee::setFirstName(string fName){this->firstName=fName;}
void Employee::setLastName(string lName){this->lastName=lName;}
void Employee::setSalary(int salary){this->salary=(salary > 0?salary:0);}

int Employee::getAnnualSalary(){return salary*12;}

ostream& operator<<(ostream& o ,const Employee& e){
	return o<<"Employee Name : "<<e.getFirstName()<<" "<<e.getLastName()<<" ... Salary : "<<e.getSalary()<<" eur.\n";
}


int main(){

	Employee gokur("Gorkem","Okur",5000);
	Employee sample("Simple","EMployee",3000);

	cout<<gokur<<sample;

	gokur.setSalary( ( (gokur.getSalary()/100) * 10 ) + gokur.getSalary() );
	sample.setSalary( ( (sample.getSalary()/100) * 10 ) + sample.getSalary() );

	cout<<"\n--------------******* AFTER 10 PERCENT RAISE *******--------------\n\n";

	cout<<gokur<<sample;


return 0;
}
/*
 * =====================================================================================
 *
 *       Filename:  exercise_3-15.cpp
 *
 *     Description: 3.15 (Date Class)
 *								  
 *
 *        Version:  1.0
 *        Created:  12/05/18 00:15:00
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

class Date{
public:

	Date(int,int,int);

	int getDay()const;
	int getMonth()const;
	int getYear()const;

	void setDay(int);
	void setMonth(int);
	void setYear(int);

	void displayDate()const;

	friend ostream& operator<<(ostream&,const Date&);

private:
	int day;
	int month;
	int year;
};

Date::Date(int day,int month,int year){
	setDay(day);
	setMonth(month);
	setYear(year);
}

int Date::getDay()const{return day;}
int Date::getMonth()const{return month;}
int Date::getYear()const{return year;}

void Date::setDay(int day){this->day=( 30>=day && day>=1?day:1);}
void Date::setMonth(int month){this->month=( 12>=month && month>=1?month:1);}
void Date::setYear(int year){this->year=( year > 1980 ?year:1980);}

void Date::displayDate()const{cout<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";}

ostream& operator<<(ostream& o ,const Date& d){
	d.displayDate();
	return o<<"\n";
}


int main(){

	Date date1(10,10,2010);
	Date date2(28,25,2018);

	cout<<date1<<date2;


return 0;
}
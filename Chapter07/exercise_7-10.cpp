/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-10.cpp
 *
 *     Description: 7.10 (Salesperson Salary Ranges)
 *								  
 *
 *        Version:  1.0
 *        Created:  23/05/18 00:00:00
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Şükrü Görkem Okur - gorkemokur@gmail.com
 *  	 Organization:  -
 *
 *   To go beyond is as wrong as to fall short.
 *   —Confucius
 * =====================================================================================
 */

#include<iostream>
using namespace std;

void printSales(const int*);
void getSales(int*);


int main(){

int counters[9]{};

getSales(counters);
cout<<endl;
printSales(counters);

cout<<counters[0];

return 0;
}


void printSales(const int* counters){
	for (int i = 0; i < 9; ++i)
	{
		switch(i){	    
			case 0:{cout<<"Employee salary between 200-299 : "<<counters[i]<<endl;break;}
			case 1:{cout<<"Employee salary between 300-399 : "<<counters[i]<<endl;break;}
			case 2:{cout<<"Employee salary between 400-499 : "<<counters[i]<<endl;break;}
			case 3:{cout<<"Employee salary between 500-599 : "<<counters[i]<<endl;break;}
			case 4:{cout<<"Employee salary between 600-699 : "<<counters[i]<<endl;break;}
			case 5:{cout<<"Employee salary between 700-799 : "<<counters[i]<<endl;break;}
			case 6:{cout<<"Employee salary between 800-899 : "<<counters[i]<<endl;break;}
			case 7:{cout<<"Employee salary between 900-999 : "<<counters[i]<<endl;break;}
			case 8:{cout<<"Employee salary 1000 or higher  : "<<counters[i]<<endl;break;}
		}//switch
	}//for

}


void getSales(int* counters){
	for (int i = 0; i < 5; ++i)
	{	
		int tempSales=0;
		cout<<"Enter a gross sales : ";cin>>tempSales;

		tempSales = ((tempSales/100)*9)+200;

		if(200<=tempSales && tempSales<=299){
			counters[0]++;
		}else if(300<=tempSales && tempSales<=399){
			counters[1]++;
		}else if(400<=tempSales && tempSales<=499){
			counters[2]++;
		}else if(500<=tempSales && tempSales<=599){
			counters[3]++;
		}else if(600<=tempSales && tempSales<=699){
			counters[4]++;
		}else if(700<=tempSales && tempSales<=799){
			counters[5]++;
		}else if(800<=tempSales && tempSales<=899){
			counters[6]++;
		}else if(900<=tempSales && tempSales<=999){
			counters[7]++;
		}else if(1000<=tempSales){counters[8]++;}
	}//for
}
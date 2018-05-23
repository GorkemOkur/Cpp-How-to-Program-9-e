/*
 * =====================================================================================
 *
 *       Filename:  exercise_7-15.cpp
 *
 *     Description: 7.15 (Two-Dimensional array Initialization)
 *								  
 *
 *        Version:  1.0
 *        Created:  23/05/18 09:20:00
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
using namespace std;

int main(){
	array<array<int,5>, 3> sales;

	for( size_t row =0; row < sales.size();++row )
		for( size_t column =0; column < sales[ row ].size(); ++column )
			sales[ row ][ column ] = 0 ;

	for( size_t row =0; row < sales.size();++row ){
		for( size_t column =0; column < sales[ row ].size(); ++column )
			cout<<sales[ row ][ column ]<<" ";
		cout<<endl;
	}

return 0;
}

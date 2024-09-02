string HashTable[ 20 ];
void InitHashTable(){
	for( int i = 0; i < 20; ++i ){
		HashTable[ i ] = "ZZ";
	}
};
//គោល27
double ConvertStringToNumber( string s ){
	//Generate s to number by Mulityply by Powers
};

void InsertWord( string s ){
	double HugeNumber = ConvertStringToNumber( s );
	int Index = HugeNumber % 20;
	//if HashTable[ Index ] is free/empty --> push s to Index;
	if( HashTable [ Index ] == "ZZ" ) HashTable [ Index ] = s;
	else {
		//Find free cell (next cell)
		//Insert s to the found index
		
	}	
};

bool SearchWord( string s ){
	double HugeNumber = ConvertStringToNumber( s );
	int Index = HugeNumber % 20;
	if( HashTable[ Index ] == s ) return true;
	else{
		//if HashTable[ Index ] is empty return false;
		//else find s in next cell by linear probing
		
	}
};

void main(){
	InitHashTable();
	InsertWord("PEN");
	SearchWord("PEN");
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on February 12, 2018, 2:01 PM
 */

#include <cstdlib>
#include <iostream>
#define offset 96

using namespace std;

/*
 * 
 */

int ConvertCharToNumber(char c){
    return int(c)-offset;
}

int main(int argc, char** argv) {
    cout<< ConvertCharToNumber('a')<<endl;
    cout<< ConvertCharToNumber('b')<<endl;
    cout<< ConvertCharToNumber('c')<<endl;
    cout<< ConvertCharToNumber('d')<<endl;
    cout<< ConvertCharToNumber('t')<<endl;
    return 0;
}























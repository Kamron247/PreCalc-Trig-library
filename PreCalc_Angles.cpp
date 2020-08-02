// PreCalc_Angles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double angleName(double);

int main()
{
	auto deg = angleName(10.91);
	cout << deg;
}

//Name the angle
double angleName(double deg) {
	//check is its less than or equal to 45*n
	//[0, 90, 180, 360]

	//when its less than x and greater than y.. its a defined angle
	// if its equal to either x or y, then its a different predefined angle
	// loop throught with 2 counters, x is 1 ahead of y
	// when the loop reaches the last box, stop counting x, same for y

	//between 180 and 360
	// subtract 180, then run through the nomal loop

	//Greater than 360
	//		int n = x/360 (n must be a whole number not rounded) 
	//		subtract 360*n
	//then run through normal loop
}

/*
//Get the supplementary angle
double supplementary() {

}

//Get the complimentary angle
double complimentary()
{

}

//Convert input to degrees, radians, or DMS
double toDegree() {

}
double toRadians() {

}
string toDms() {

}

//Coterminal angle
double coterminal() {

}
*/
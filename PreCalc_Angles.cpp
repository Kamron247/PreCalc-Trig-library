#pragma once
/*=========================
	   PreCalc Library
  =========================
  -
  =========================
  + nameAngle(double) : string
  + supplementary(double) : double
  + complimentary(double) : double
  + toDegree(double) : double
  + toRadians(double) : double

  =========================*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

//Name the angle
string nameAngle(double degree) {
	string angleName;
	map<double, string> angles = { 
		{0, "0 degree"}, {90, "Right"},
		{180, "Straight"}, {360, "360 degree"} };
	
	//find a number less than or equal to the given degree
	//	- in order for the test to work
	//	  given degree should be positive at all times
	degree *= degree > 0? 1 : -1;

	//find the angle by going through the map
	// if its found then assign angle name
	for (auto angle : angles) {
		if (angle.first == degree) {
			angleName = angle.second;
		}
	}

	//if the angle isnt found then its a special case
	if (angleName.empty()) {
		angleName = degree < 90? "Acute" : "Obtuse";
	}

	return angleName;
}

//Get the supplementary angle
double supplementary(double degree) {
	//when the given degree is less than 180
	// we want the difference between given degree and 180
	return 180 - degree;
}

//Get the complimentary angle
double complimentary(double degree)
{
	return 90 - degree;
}

//Convert input to degrees, radians, or DMS
double toDegree() {
	//interperate what type the input is
	//	radians? degrees?
}

double toRadians() {
	//interperate what type the input is
	//	radians? degrees?
}

/*
string toDms() {

}
*/

//Coterminal angle
double coterminal() {

}


int main() {

	//Name the angle test
	cout << nameAngle(-90.1);

	return 0;
}

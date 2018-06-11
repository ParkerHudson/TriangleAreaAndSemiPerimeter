/*

Name: Gregory Hudson
Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 2/06/17
Due Time: 11:59pm
Module 5: Assignment #4
Date program: 2/02/17

Description: This program computes the area and semiperimeter of a triangle if two of its sides are bigger than the longest side
*/



#include <iostream> //library for input and output
#include <string> //library for strings
#include <cmath> //library for math equations 

using namespace std;

//Name:Compute
//Precondition: All parameters are declared
//Postcondition: All parameters are defined
//Description: Function takes a, b, and c from user and computes the area and semiperimeter
void Compute( double a, double b, double c, double & area, double & s); // function that computes the semiperimeter and area for a triangle

void Compute(double a, double b, double c, double & area, double & s)   //function definition
{

	cout.setf(ios::showpoint); //To specify that the decimal point will always be shown
	cout.precision(2); //To specify that two decimal places will always be shown
	cout.setf(ios::fixed); //To specify fixed point notation

	s = (a + b + c) / 2; //Formula to find the semiperimeter triangle

	area = sqrt(s*(s - a)*(s - b)*(s - c)); //Formual to find the area of the triangle

	cout << "The computed area is : " << area << endl;   //output for the area of the triangle
	cout << "The semiperimeter is : " << s << endl;      //output for the semiperimeter of the triangle


}



int main() {

	double a;  //triangle length
	double b; // triangle length 
	double c; //triangle length
	double area;  //area of triangle 
	double semiperimeter; //semiperimeter of triangle

	string user_response = "y";

	while (user_response == "y" || user_response == "Y") {

		cout << "Enter the value for a" << endl;  //asks user for the first side of the triangle 
		cin >> a; //reads value of a 

		cout << "Enter the value for b" << endl; //asks user for the second side of the triangle 
		cin >> b; //reads value for b

		cout << "Enter the value for c" << endl; //asks user for the third side of the triangle
		cin >> c;  //reads value for c

	

		if ((a + b > c) && (a + c > b) && (b + c > a)) {  //tests to see if the two smaller sides of the triangle are bigger than the longest side

			Compute(a, b, c, area, semiperimeter);  //calls function Compute into main

		}

		
		else {

			cout << "The lengths are invalid" << endl;  //Prints when user types in invalid numbers
			
		}

		cout << "Would you like to continue computing the area and semiperimeter? (Y\\N)" << endl; /* asks user if they would like to continue computing the area 
			                                                                                       and semiperimeter  of the triangle*/
		cin >> user_response;  //reads the user_response yes or no
	}
	

	return 0;
}

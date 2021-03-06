//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 07 Assignment: 01
// 
// Filename: gps.cpp
// Date submitted: 5/11/14
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Wayne Wu Completed 50% of the assignment. 
// Brian So Completed 50% of the assignment. 
// 
//*********************************************

#include "coord.h"
#include <iostream>
using namespace std;

//function declarations 
void get_point (point3D &point);
void print_point(point3D &point);
double spatial_dist(point3D point1, point3D point2);
double plani_dist(point3D point1, point3D point2);
double ht_diff(point3D point1, point3D point2);
double azimuth(point3D point1, point3D point2);

int main() {
	
	//struct variables declaration 
	point3D point1;
	point3D point2;
	
	cout << "Enter the coordinates for point 1:" <<endl;
	get_point(point1);
	cout << "Enter the coordinates for point 2:" <<endl;
	get_point(point2);
	cout << "The coordinates for point 1 is : " <<endl;
	print_point(point1);
	cout << "The coordinates for point 2 is : " <<endl;
	print_point(point2);
	
	
	cout <<" The spatial distance between the two points is: " << spatial_dist (point1, point2) <<endl;
	cout <<" The planimetric distance between the two points is: " << plani_dist (point1, point2) <<endl;
	cout <<" The height difference between the two points is: " << ht_diff (point1, point2) <<endl;
	cout <<" The azimuth(heading) between the two points is: " << azimuth (point1, point2) <<endl;
	
	return 0;

}

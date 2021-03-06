//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 08 Assignment: 02
// 
// Filename: beamb.cpp
// Date submitted: 13/11/14
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


#include "beam.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;

//calculates the deflection 
void deflection (double y[], int size, double interval){
	//calculate the constant 
	const double constant = (2.0*LOAD*pow(LENGTH, 4))/(pow(PI,5)*ELASTICITY*INERTIA);
	//calculate the spatial displacement, distance between each Xs
	const double d = interval/STEPS;
	double infinite_series = 0.0;
	double x = 0.0;
	//calculate y(x) for xE[0,1], increment by d (spatial displacement)
	for (int i =0; i<= size; i++){
		int n =1;
		double previous = 0.0;
		double difference = 0.0;
			//the infinite series iterations 
			do{
				previous = infinite_series;
				infinite_series += ((pow(-1.0,(n+1))/(pow(n,5)))*(sin((n*PI*x)/LENGTH)));
				n++;
				difference = infinite_series - previous; 
			} while (abs(difference) > EPSILON); //continues until the difference between two terms are less than epsilon (tolerance) 
		y[i] = constant*infinite_series;
		x += d; 
		 	
	} 	
}

//Calculates the derivative using the forward discrete approximation 
void derivative (double dydx[], double y[], int size, double interval){
	const double d = interval/STEPS;
	for (int i = 0; i<= size; i++){
		dydx[i]= (y[i+1] - y[i])/d;
		}
}

//Calculates the bending moment
void bending (double moments[], double d2ydx2[], int size){
	for (int i = 0; i<= size; i++){
		moments[i] = ELASTICITY*INERTIA*d2ydx2[i];
	}
}
	


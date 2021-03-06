//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 08 Assignment: 02
// 
// Filename: beam.h
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


#ifndef BEAM_H
#define BEAM_H

#include <cmath>
using namespace std;

//global constant variables 
const double ELASTICITY = 200e6; // kiloNewtons / m2 
const double INERTIA = 8.3e-6; // m4 
const double LOAD = 100.0;  // kN / m 
const double LENGTH = 1.0;  // m 
const double PI = 4.0*atan(1.0); 
const double EPSILON = 1e-30; // tolerance 
const int STEPS = 10;

//function declarations 
void deflection (double y[], int size, double interval);
void derivative (double dydx[], double y[], int size, double interval);
void bending (double moments[], double d2ydx2[], int size);

#endif

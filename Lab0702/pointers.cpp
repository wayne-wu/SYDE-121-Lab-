
#include <iostream>
using namespace std;

<<<<<<< HEAD
#define PI 3.141592653589
=======
#define PI  3.141592653589
>>>>>>> d78f72d114dddc1e0810117d819b98c7e972f489

struct Circle{
	int center_x;
	int center_y;
	int radius;
};
bool inputCheck (int input);


int main() {
	Circle new_circle;
	Circle *circle_pointer;
	double circumference;
	double *circumference_pointer;
	
	circle_pointer = &new_circle;
	circumference_pointer = &circumference;
	
	do {
	cout << "Please enter the center point and radius of the circle" <<endl; 
	cout << "(format: x y radius, in positive integers.)" <<endl;
	cin >> new_circle.center_x >> new_circle.center_y >> new_circle.radius;
	cout << endl;
	inputCheck(new_circle.radius);
	} while (inputCheck == false);
	
	circumference = PI*new_circle.radius*new_circle.radius; 
	
	cout << "The value of the variable circumference is " << *circumference_pointer <<endl;
	cout << "The address of the variable circumference is "<< circumference_pointer <<endl <<endl;
	cout << "The circle's location is (" << new_circle.center_x << "," <<new_circle.center_y << ")" <<endl;
	cout << "The circle's radius is " << new_circle.radius <<endl;
	cout << "The address of the circle struct is: " << circle_pointer;
	
	return 0;
}

bool inputCheck(int input){
	if (input <= 0){
		cout << "Input must be a positive integer!";
		return false;
	} else{
		return true;
	}
}


// Class-ReturningObjectFromFunction.cpp : Defines the entry point for the console application.
//

#include <iostream>
class Distance //English distance values 
{
private:
	int feet;
	double inches;
public:
	Distance() : feet(0), inches(0) // constratctor no arguments
	{}
	Distance(int feet_, double inches_) : feet(feet_), inches(inches_)// constructor 2 arguments
	{}
	void getDistance() // get length from user
	{
		std::cout << "Enter feet: " << std::endl;
		std::cin >> feet;
		std::cout << "Enter inches: " << std::endl;
		std::cin >> inches;
	}
	void showDistance() // display distance
	{
		std::cout << feet << "\' - " << inches << "\"";
	}
	Distance addDistance(Distance); // add distance Prototype??
};
Distance Distance::addDistance(Distance Distance2) //Add
{
	Distance temp; // temprorary variable
	temp.inches = inches + Distance2.inches; // add inches
	if (temp.inches >= 12.0) //if total is greater then 12.0
	{
		temp.inches -= 12.00; // decrease value of inches by 12
		temp.feet++; // increase feet by 1 in book temp.feet = 1;
	}
	temp.feet += feet + Distance2.feet; // add feet from inches overflow and feet
	return temp;
}

int main()
{
	Distance Dist1, Dist3; // define lenghts
	Distance Dist2(11, 6.25); // define and initialize Dist2

	Dist1.getDistance(); // get Dist1 from user
	Dist3 = Dist1.addDistance(Dist2); // Dist3 = Dist1 + Dist2

	// Display all lenghts

	std::cout << "Dist1: "; Dist1.showDistance();
	std::cout << std::endl;
	std::cout << "Dist2: "; Dist2.showDistance();
	std::cout << std::endl;
	std::cout << "Dist3: "; Dist3.showDistance();
	std::cout << std::endl;



	system("pause");
    return 0;
}


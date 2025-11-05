#include <iostream>
using namespace std;
class Vehicle 
{
public:
    Vehicle() 
	{ 
	 cout << "This is a Vehicle\n"; 
	}
};

class FourWheeler 
{
public:
    FourWheeler() 
	{ 
	 cout << "This is a 4 Wheeler\n"; 
	}
};

class Car : public Vehicle, public FourWheeler 
{
public:
    Car() 
	{ 
	 cout << "Car Class\n"; 
	}
};

int main() 
{

    cout << "Name -: Shrirang kulkarni" << endl;
    cout << "Div  -: B" << endl;
    cout << "Roll No -: 125" << endl;
    cout << "-----------------------------" << endl;


    Car obj;

    return 0;
}

#include <iostream>
using namespace std;
class Distance 
{
public:
    int feet, inch;

    Distance(int f, int i) 
	{
        this->feet = f;
        this->inch = i;
    }

    void operator-() 
	{
        feet--;
        inch--;
        cout << "\nFeet & Inches (Decrement): " << feet << "'" << inch << endl;
    }
};

int main() 
{
    cout << "Name -: Suyash nikam" << endl;
    cout << "Div  -: B" << endl;
    cout << "Roll No -: 23" << endl;
    cout << "-----------------------------" << endl;

    Distance d1(8, 9);

    -d1;

    return 0;
}

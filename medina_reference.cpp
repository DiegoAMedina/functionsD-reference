//Name:Diego Medina
//Date:10-16-15
//Description:Functions reference (Precondition, Postcondition)

#include <iostream>
#include <cassert>
using namespace std;

const double PI = 3.1415;

//*******************************************************************************************************************
void sort(int& numA, int& numB, int& numC);
//Precondition:Sort the ints in increasing order. 
//             As long as the ints are 0 - 100 inclusive
//Postcondtion:Pass by reference assigns A - C , in increasing order
//             A being the smallest and C being the largest

void numDigits(int  valA, int& n); 
//Precondition:Determines the number of digits in an integer
//             The values passed in should be integer values between -10000 and 10000, inclusive.
//Postcondition:Pass by reference, variable 'n' will be assigned the value of the 
//             number of digits in 'valA'

void computeSphere(double& a, double& v, double r);
//Precondition:calculates area (a) , volume (v). The values passed in should be double 
//             values greater than 0 and less than 10000, inclusive.
//Postcondition:The variable 'a' gets assigned the value of area
//             The variable 'v' gets assigned the value of volume

void swap(int& A, int& B);
//Precondition:Will swap the values from A to B and B to A
//Postcondition:Pass by reference returns the value of A and B swapped
//
//*******************************************************************************************************************

int main()
{
    int three = 3, two = 2, one = 1;
    int x = 100, y = 55, z = 0;
    int a = 99, b = 0, c = 50;
    
    cout << endl;
    
    sort(a, b, c);
    sort(x, y, z);
    sort(three, two, one);
    
    cout << endl;
    
    int d = 0;
    int e = 1000;
    int f = -999;
    
    numDigits(d, z);
    numDigits(e, z);
    numDigits(f, z);
    
    cout << endl;
    
    double rad1 = 3.0;
    double rad2 = 1.56;
    double rad3 = 2.33;
    double container = 0;
    double container2 = 0;
    
    computeSphere(container, container2, rad1);
    computeSphere(container, container2, rad2);
    computeSphere(container, container2, rad3);
    
    cout << endl << "End of program" << endl << endl;
    
    return 0;
}

//*******************************************************************************************************************


void sort(int& numA, int& numB, int& numC)
{
    assert( ((numA >= 0) && (numA <= 100)) );
    assert( ((numB >= 0) && (numB <= 100)) );
    assert( ((numC >= 0) && (numC <= 100)) );

    cout << endl << "Values are: " << numA << ", " << numB << ", " << numC << endl; 

    if(numA > numB)
    {
        swap(numA, numB);
    }
    
    if(numA > numC)
    {
        swap(numA, numC);
    }
    
    if(numB > numC)
    {
        swap(numB, numC);
    }
    
    cout << "Values sorted are: " << numA << ", " << numB << ", " << numC << endl;
    
    return;
}

void numDigits(int  valA, int& n)
{
    assert( ((valA >= -1000) && (valA <= 1000)) );

    cout << "Number is " << valA << endl;

    if(valA < 0)
    {
        valA = valA * -1;
    }
    
    for(n = 0; valA > 0; n++)
    {
        valA = valA / 10;
    }

    
    cout << "Number of digits are: " << n << endl;

    return;
}

void computeSphere(double& a, double& v, double r)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    a = PI * r * r;
    
    v = (4 / 3) * PI * r * r * r; 
    
    cout << "Area with a radius of " << r << " is " << a << endl
         << "Volume with a radius of " << r << " is " << v << endl << endl;

    return;
}

void swap(int& A, int& B)
{
    int temp;
    
    temp = A;
    A = B;
    B = temp;
    
    return;
}

#include <iostream>

using namespace std;

double f(double x)
{
    return x*x;
}

double precision=0.0001;
double startPosition=0, endPosition=3;

double functionSurface(double startPosition, double precision, double endPosition)
{
    double surfaceValue=0;
    for(double i=(startPosition+precision)/2; i<endPosition; i+=precision)
        surfaceValue+=precision*f(i);
    return surfaceValue;
}

int main()
{
    cout << functionSurface(startPosition, precision, endPosition);
    return 0;
}

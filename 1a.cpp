#include <iostream>

using namespace std;

double f(double x)
{
    return 5*x*x*x*x*x-4*x*x*x*x+3*x*x*x-2*x*x+x-1;
}

double precision=0.001;
double podajStart=-10, podajEnd=6;

double zerowa(double starti, double endi)
{
    if(f(starti)*f(endi)>0) return 0;
    if(endi-starti>precision)
    {
        double middleValue=(starti+endi)/2;
        if(f(middleValue)==0) return middleValue;
        if(f(middleValue)*f(starti)<0)
            return zerowa(starti, middleValue);
        else
            return zerowa(middleValue, endi);
    }
    else
        return (starti+endi)/2;
}

int main()
{
    cout << zerowa(podajStart, podajEnd);
    return 0;
}

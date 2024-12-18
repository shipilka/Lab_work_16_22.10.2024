#include "Math.h"

double sum(double a, double b) 
{
    return a + b;
}
double max(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double min(double a, double b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

long double stepen(double a, int x)
{
    for (int i = 0; i < (x - 1); i++)
    {
        return a *= a;
    }
}
#include "lib.hpp"

double first(double x, double v, double t)
{
    return x + v * t;
}

double second(double v, double t)
{
    return v * t;
}

double third(double v, double t)
{
    return v * t;
}

double fourth(double a, double v, double t)
{
    return v + a * t;
}

double fifth(double S, double t)
{
    return S/t;
}

double sixth(double W, double R)
{
    return W*R;
}


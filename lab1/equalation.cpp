#include "equalation.h"

Equalation::Equalation() : a(1), b(1), c(1)
{
  solutions = new double[5];
}


Equalation::Equalation(double _a, double _b, double _c) : a(_a), b(_b), c(_c)
{
  solutions = new double[5];
}

void Equalation::solve(){

}

Equalation::~Equalation(){
  delete solutions;
}

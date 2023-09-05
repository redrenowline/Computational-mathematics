#ifndef EQUALATION_H
#define EQUALATION_H

#include <utility>

using namespace std;

class Equalation
{
public:
  Equalation();
  Equalation(double _a, double _b, double _c);
  ~Equalation();

  void solve();

  double* getSolutions();
  pair<double, double> calcFromRange(double start, double finish, int count);

private:

  double a, b, c;
  double* solutions;

  int solCount;
};

#endif // EQUALATION_H

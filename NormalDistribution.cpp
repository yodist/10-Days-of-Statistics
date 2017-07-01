#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define e 2.71828
const double pi = 22 / 7;

double normalDist(double m, double sd, double a) {
	double b = erf((a-m)/(sd*pow(2.0,0.5)));
    return 0.5*(1+b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mean, dev, x, a, b;
	cin >> mean >> dev >> x >> a >> b;
	printf("%.3f\n", normalDist(mean, dev, x));
	double line2 = normalDist(mean, dev, b) - normalDist(mean, dev, a);
	printf("%.3f\n", line2);
    return 0;
}

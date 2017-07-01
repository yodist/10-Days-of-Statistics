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
    double mean, dev, max, n;
	cin >> max >> n >> mean >> dev;
	double meanx = (mean * n);
	double devx = sqrt(n) * dev;
	printf("%.4f", normalDist(meanx,devx,max));
    return 0;
}

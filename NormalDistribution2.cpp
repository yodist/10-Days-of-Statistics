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
	//return in percent
    return 0.5*(1+b)*100;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mean, dev, x, a, b;
	cin >> mean >> dev >> x >> a ;
	printf("%.2f\n", 100 - normalDist(mean, dev, x));
	printf("%.2f\n", 100 - normalDist(mean, dev, a));
	printf("%.2f", normalDist(mean, dev, a));
    return 0;
}

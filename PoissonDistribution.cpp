#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define e 2.71828

double fact(int n) {
    return (n == 1 || n == 0) ? 1 : n * fact(n-1);
}

double poisson(double k, double l) {
	return pow(l,k) * pow(e,-l) / fact(k);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double k,l;
    cin >> l >> k;
    printf("%.3f", poisson(k,l));
    return 0;
}

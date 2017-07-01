#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double geodist(double n, double p) {
    double q = 1 - p;
    return pow(q,n-1) * p;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num = 1, denum = 3, n = 5;
    double p = (double)num/denum;
    printf("%.3f", geodist(n,p));
    return 0;
}

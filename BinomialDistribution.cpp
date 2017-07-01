#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


double fact(int n) {
    return (n == 1 || n == 0) ? 1 : n * fact(n-1);
}

double comb(int n, int x) {
    return fact(n) / (fact(x) * fact(n-x));
}

double calcBernoulli(double x, int n, double p) {
    double q = 1 - p;
    return comb(n, x) * pow(p, x) * pow(q, n - x);
}

int main() {
    double b, g;
    cin >> b;
    cin >> g;
    double p = b / (b + g); //probability of success
    
    //GIVEN
    int x = 3;  //exactly 3 boys
    int n = 6;  //number of trials
    
    double sum = 0;
    for (int i = x; i <= n; i++) {   //sum(x until n)
        sum += calcBernoulli(i, n, p);
    }
    
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}
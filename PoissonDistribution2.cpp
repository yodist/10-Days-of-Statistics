#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double x = 160 + (40 * (0.88 + pow(0.88,2)));
    double y = 128 + (40 * (1.55 + pow(1.55,2)));
    printf("%.3f\n",x);
    printf("%.3f",y);
    return 0;
}

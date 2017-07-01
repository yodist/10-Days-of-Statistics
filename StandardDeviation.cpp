#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double meanfunc(vector<double> arr, int size) {
	double res = 0;
	for(int i=0; i < size; i++) {
		res += arr.at(i);
	}	
	return res / size;
} 

/* ----------- DILARANG MEN-SORT ARRAY UNTUK STDDEV ------------- */

double stddev(vector<double> arr, int size, double mean) {
	double sum = 0;
    for (int i=0;i<size;i++) {
        sum += pow(arr.at(i)-mean,2);
    }
    return sqrt(sum/size);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    double x,sum,mean=0;
    cin >> n;
    vector<double> vec;
    for(i=0; i<n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    mean = meanfunc(vec,n);
    printf("%.1f", stddev(vec,n,mean));
    //for (vector<float>::iterator it =vec.begin() ; it != vec.end(); ++it)
    //cout << ' ' << *it;
    //cout << '\n';
    
    return 0;
}

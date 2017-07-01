#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double meanfunc(double arr[], int size) {
	double res = 0;
	for(int i=0; i < size; i++) {
		res += arr[i];
	}	
	return res / size;
} 

double stddev(double arr[], int size, double mean) {
	double sum = 0;
    for (int i=0;i<size;i++) {
        sum += pow(arr[i]-mean,2);
    }
    return sqrt(sum/size);
}

double pcc(int size, double arrx[], double arry[], double meanx, 
			double meany, double sdevx, double sdevy) {
	double sum = 0;
	for (int i=0; i<size; i++) {
		sum += (arrx[i] - meanx) * (arry[i] - meany);
	}
	return sum / (size*sdevx*sdevy);
}

int main() {
	int n;
	double meanX, meanY, sdevX, sdevY;
	cin >> n;
	double dataX[n];
	double dataY[n];
	for (int i=0; i<n; i++) {
		cin >> dataX[i];
	}
	for (int i=0; i<n; i++) {
		cin >> dataY[i];
	}		
	meanX = meanfunc(dataX,n);
	meanY = meanfunc(dataY,n);
	sdevX = stddev(dataX,n,meanX);
	sdevY = stddev(dataY,n,meanY);	
	//printf("%.2f %.2f %.5f %.5f", meanX, meanY, sdevX, sdevY);
	printf("%.3f", pcc(n,dataX,dataY,meanX,meanY,sdevX,sdevY));
    return 0;
}

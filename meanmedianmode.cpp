#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

float mean(int arr[], int size) {
	float res = 0;
	for(int i=0; i < size; i++) {
		res += arr[i];
	}
	
	return res / size;
} 

float median(int arr[], int size) {
	float res = 0, temp = 0;
	if(size % 2 == 0) {
		temp = arr[size/2-1]+arr[size/2];
		res = temp/2;
	} else {
		res = arr[size/2];
	}
	return res;
}

int main() {
	int n,x;
	cin >> n;
	int arr[n];
	
    for (int i=0; i<n; i++) {
        cin >> x;
        arr[i] = x;
    }
    
	sort(arr, arr + n);
	for (int i = 0; i<n; i++) 
		cout << arr[i] << " ";
	
	cout << endl;
	cout << mean(arr, n) << endl;
	cout << median(arr, n) <<endl;
	//cout << mode(arr, n);
	
	return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double spearman(vector<int> x, vector<int> y, int n){
    double sum = 0.0;
    for(int i=0; i<n; i++){
        sum = sum + (x[i]-y[i])*(x[i]-y[i]); 
    }
    return 1.0 - sum*6/(n*(n*n-1));
}

int main() {  
    vector<double> v1;
    vector<double> v2;
    vector<double> sort1;
    vector<double> sort2;
    vector<int> rank1;
    vector<int> rank2;
    int n;
    double x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
        sort1.push_back(x);
    }
    for(int i=0; i<n; i++){
        cin >> x;
        v2.push_back(x);
        sort2.push_back(x);
    }
    
    //sorting
    sort(sort1.begin(),sort1.end());
    sort(sort2.begin(),sort2.end());
    
    //ranking 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v1[i]==sort1[j])
                rank1.push_back(j+1);
        }
        for (int j=0; j<n; j++){
            if(v2[i]==sort2[j])
                rank2.push_back(j+1);
        }
    }
    
    double a = spearman(rank1, rank2, n);
    cout.precision(3);
    cout << fixed << a; 
    
    return 0;
}
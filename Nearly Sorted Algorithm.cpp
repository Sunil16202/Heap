//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0

#include <bits/stdc++.h>
using namespace std;

void nearlysorted(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> minh;
    vector<int> v;
    
    for(int i=0; i<n; i++){
        minh.push(arr[i]);
        if(minh.size() > k){
            v.push_back(minh.top());
            minh.pop();
        }
    }
    while(!minh.empty()){
    	v.push_back(minh.top());
    	minh.pop();
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
	//code
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin >> arr[j];
	    }
	    nearlysorted(arr,n,k);
	    
	}
	return 0;
}
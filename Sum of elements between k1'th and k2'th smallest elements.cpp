#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int k, int n){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    
    
    priority_queue<pair<int,int>> maxh;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        maxh.push({i->second, i->first});
        if(maxh.size() > k){
            maxh.pop();
        }
    }
    return maxh.top().second;
}
long bwtk1k2(int arr[], int k1, int k2, int n){
    int first = kthsmallest(arr,k1,n);
    int second = kthsmallest(arr,k2,n);
    long sum = 0;

    for(int i=0; i<n; i++){
        if(first < second){
            if(arr[i] > first && arr[i] < second){
                sum = sum + (long)arr[i];
            }
        }
        else{
            if(arr[i] > second && arr[i] <first){
                sum = sum + (long)arr[i];
            }
        }
      
    }
    return sum;
}

int main() {
	//code
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin >> arr[j];
	    }
	    int k1;
	    int k2;
	    cin >> k1;
	    cin >> k2;
	    cout<<bwtk1k2(arr,k1,k2,n)<<endl;
	}
	return 0;
}
// https://practice.geeksforgeeks.org/problems/k-largest-elements/0

#include <bits/stdc++.h>
using namespace std;

void minheap(int arr[], int k, int n){
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        
    }
    while(k--){
        cout<<pq.top()<<" "; 
        pq.pop(); 
    }
	cout<<endl; 

/*    priority_queue<int,vector<int>, greater<int>> minh;
    for(int i=0; i<n; i++){
        minh.push(arr[i]);
        if(minh.size() > k){
            minh.pop();
        }
    }
    int ans[k];
    int index = 0;
    while(!minh.empty()){
        int temp = minh.top();
        ans[index] = temp;
        index++;
        minh.pop();
    }
    for(int i=k-1; i>=0; i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;*/
    
}
int main() {
	//code
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n;
	    int k;
	    cin >> n;
	    cin >> k;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin >> arr[j];
	    }
	    minheap(arr,k,n);
	   
	}
	return 0;
}
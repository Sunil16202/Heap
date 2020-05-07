//https://leetcode.com/problems/k-closest-points-to-origin/submissions/
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        
        
    priority_queue<pair<int, pair<int,int>>> maxh;
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        maxh.push({(arr[i][0]*arr[i][0]) + (arr[i][1]*arr[i][1]),{arr[i][0],arr[i][1]}});
        if(maxh.size() > k){
            maxh.pop();
        }
    }
    vector<vector<int> > v( k , vector<int> (2, 0));  
    int i=0;
    while(!maxh.empty()){
        pair<int,int> p = maxh.top().second;
        int a = p.first;
        int b = p.second;
        
        v[i][0] = a;
        v[i][1] = b;
        
        maxh.pop();
        i++;
    }
    return v;
        
    }
};
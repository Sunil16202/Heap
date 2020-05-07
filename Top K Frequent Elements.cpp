//https://leetcode.com/problems/top-k-frequent-elements/submissions/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int n = arr.size();
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            minh.push({i->second, i->first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int> v;
        while(!minh.empty()){
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
        
        
    }
};
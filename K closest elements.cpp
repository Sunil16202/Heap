//https://leetcode.com/problems/find-k-closest-elements/submissions/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pair<int, int>> maxh;
        vector<int> ans;
        for(int i=0; i<n; i++){
            maxh.push({abs(arr[i] - x), arr[i]});
            if(maxh.size() > k){
                maxh.pop();
            }
        }
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
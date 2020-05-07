//https://www.interviewbit.com/problems/kth-smallest-element-in-the-array/

int Solution::kthsmallest(const vector<int> &A, int B) {
    int n = A.size();
    int k = B;
    priority_queue<int> maxh;
    for(int i=0; i<n; i++){
        maxh.push(A[i]);
        if(maxh.size() > k){
            maxh.pop();
        }
    }
    return maxh.top();
}

//https://www.interviewbit.com/problems/connect-ropes-with-minimum-length/

int Solution::solve(vector<int> &A) {
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i=0; i<A.size(); i++){
        minh.push(A[i]);
    }
    int cost = 0;
    while(minh.size() >= 2){
        int first = minh.top();
        minh.pop();
        int second = minh.top();
        minh.pop();
        cost = cost + first + second;
        minh.push(first+second);
    }
    return cost;

}

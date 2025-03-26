//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int n = arr.size() ;
        int i=0 ;
        int j=1 ;
        int maxi = INT_MIN ;
        while(i<=n-2 && j<=n-1){
            int sum = arr[i]+arr[j] ;
            maxi = max(maxi,sum) ;
            i++ ;
            j++ ;
        }
        return maxi ;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
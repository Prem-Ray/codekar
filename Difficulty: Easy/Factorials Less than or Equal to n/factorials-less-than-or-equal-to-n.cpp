//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n,long long fact=1, long long i=1,vector<long long>ans={}) {
        // Write Your Code here
        
        /*Brute Force Approach*/
        // long long fact = 1 ;
        // vector<long long>ans ;
        
        // for(int i=1 ; i<=n ; i++){
        //     if(fact*i > n){
        //         break ;
        //     }
            
        //     fact = fact*i ;
        //     ans.push_back(fact) ;
        // }
        // return ans ;
        
        /*Optimal Approach*/
        if((fact*i)>n){
            return ans ;
        }
        
        fact = fact*i ;
        ans.push_back(fact) ;
        
        return factorialNumbers(n,fact,i+1,ans) ;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        
        // using hash array
        
        // int n=arr.size() ;
        // int maxval = *max_element(arr.begin(),arr.end()) ;
        // vector<int>hashh(n,0) ;
        // for(int i=0 ; i<n ; i++){
        //     hashh[arr[i]-1] += 1 ;
        // }
        // return hashh ;
        
        vector<int>newarr(arr.size(),0) ;
        unordered_map<int,int>mp ;
        
        for(int i=0 ; i<arr.size() ; i++){
            mp[arr[i]]++ ;
        }
        
        for(auto i:mp){
            newarr[i.first-1]=i.second; 
        }
        
        return newarr ;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.frequencyCount(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends
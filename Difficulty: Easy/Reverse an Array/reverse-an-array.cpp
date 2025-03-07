//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void reverseArray(vector<int> &arr,int l=0 , int r=-1) {
        // code here
        
        // Brute Force Approach
        // int l=0 ;
        // int e=arr.size()-1 ;
        
        // while(l<e){
        //     swap(arr[l],arr[e]) ;
        //     l++ ;
        //     e-- ;
        // }
        
        // Optimal Approach
        if(r==-1){
            r=arr.size()-1 ;
        }
        if(l>=r) {
            return ;
        }
        
        swap(arr[l],arr[r]) ;
        reverseArray(arr,l+1,r-1) ;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
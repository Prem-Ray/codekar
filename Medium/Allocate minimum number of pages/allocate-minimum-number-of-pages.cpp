//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{   
    
    bool isthisPossible(int A[] , int N , int M , int sol) {
        
        int sum = 0 ;
        int count = 1 ;
        
        for(int i=0 ; i<N ; i++) {
            
            if(A[i] > sol) {
                return false ;
            }
            
            if((sum+A[i]) > sol) {
                count++ ;
                sum = A[i] ;
                if(count > M) {
                    return false ;
                }
            }
            
            else {
                sum = sum+A[i] ;
            }
        }
        return true ;
    }
    
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {   
        if(M > N) {
            return -1 ;
        }
        //code here
        int start = 0 ;
        int end = accumulate(A,A+N,0) ;
        int ans = -1 ;
        
        while(start <= end) {
            int mid = (start+end)/2 ;
            if(isthisPossible(A,N,M,mid)) {
                ans=mid ;
                end = mid-1 ;
            }
            else {
                start = mid+1 ;
            }
        }
        
        return ans ;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
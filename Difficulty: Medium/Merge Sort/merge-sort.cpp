//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
 
  public:
  
//     vector<int>merge(vector<int>& arr, int l, int m, int r){
//     vector<int>temp ;
//     int left = l ;
//     int right = m+1 ;
    
//     while((left<=m) && (right<=r)){
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]) ;
//             left++ ;
//         }else{
//             temp.push_back(arr[right]) ;
//             right++ ;
//         }
//     }
//     while(left<=m){
//         temp.push_back(arr[left]) ;
//         left++ ;
//     }
//     while(right<=r){
//         temp.push_back(arr[right]) ;
//         right++ ;
//     }
    
//     for(int i=l ; i<=r ; i++){
//         arr[i] = temp[i-l] ;
//     }
    
//     return arr ;
// }

void mergeSort(vector<int>& arr, int l, int r) {
    // code here
    
    // base case 
    if(l>=r) {
        return ;
    }
    
    // mid determination
    int m = (l+r)/2 ;
    // mergeSort from low to mid
    mergeSort(arr,l,m) ;
    
    // mergeSort from mid+1 to high
    mergeSort(arr,m+1,r) ;
    // merge(arr,l,m,r) ;
    
    vector<int>temp ;
    int left = l ;
    int right = m+1 ;
    
    while((left<=m) && (right<=r)){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]) ;
            left++ ;
        }else{
            temp.push_back(arr[right]) ;
            right++ ;
        }
    }
    while(left<=m){
        temp.push_back(arr[left]) ;
        left++ ;
    }
    while(right<=r){
        temp.push_back(arr[right]) ;
        right++ ;
    }
    
    for(int i=l ; i<=r ; i++){
        arr[i] = temp[i-l] ;
    }
    
} 
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
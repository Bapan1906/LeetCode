//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    // void reverse(vector<long long> & arr, int i, int j) // reverse function.
    // {
    //     while(i < j)
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //     }
    // }
    
    void reverseInGroups(vector<long long>& arr, int n, int k){
    //     for(int i = 0; i < n; i+=k)
        
    //      {
    //     //     int j;
    //     //     if(i+k-1 < n)
    //     //     {
    //     //         j = i+k-1;
    //     //     }
    //     //     else
    //     //     {
    //     //         j = n-1;   
    //     //     }
    //     int j = (i+k-1 < n? i+k-1 : n-1);
    //         reverse(arr,i,j);
    // }
    
    
        for(int i = 0; i<n; i=i+k)
        {
            int start = i;
            int end = min(i+k-1, n-1);
            while(start < end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++; 
                end--;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends
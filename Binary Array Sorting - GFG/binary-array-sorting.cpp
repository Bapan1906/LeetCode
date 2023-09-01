//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int arr[], int N)
    {
      int left = 0;
      int right = N-1;
      while(left < right)
      {
          while(arr[left] == 0)
          {
              left++;
          }
          while(arr[right] == 1)
          {
              right--;
          }
          
          if(left < right )
          {
              swap(arr[left], arr[right]);
          }
          
      }
       /**************
        * No need to print the array
        * ************/
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends
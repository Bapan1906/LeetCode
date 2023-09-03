//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int arr[26] = {0}; // Creating an array.

        // create an array of count of characrer.
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

        // For LowerCase.
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = (ch - 'a');
        }

        // For Uppercase.
        else
        {
            number = (ch - 'A');
        }

        arr[number]++;
    }

    // Find maximum number of character.
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
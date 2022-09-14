class Solution{   
public:
    long long numberOfSubsequences(int N, long long A[]){
        long long count = 0;
        for(int i = 0; i < N; i++)
        {  
            // here we are counting how much element of array are in power of 2

            if((A[i] & (A[i] -1)) == 0)
               count++;
        }
        if(count == 0)
        return 0;
        long long ans = 1;
    // here we are calculating how many subsequences can formed by calculating power of 2
       for(int i = 0; i < count; i++)
       {
           ans *= 2;
           ans = ans % 1000000007;
       }
       // we don't need empty subsequence so we return  ans - 1
        return ans - 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends


//using recursion
//TC:O(2^n)
//SC:O(n)
class Solution {
public:
    int fib(int n) {
        //base case
        if(n<=1)return n;

        //recursive call
        return fib(n-1)+fib(n-2);

    }

};
---------------------------------------------------------------

// Top down Approach : memoization
// TC and SC :O(n)
class Solution {
public:
    int fibonacci(int n, vector<int> &dp) {

        // base case
        if (n <= 1)
            return n;
       //already calculated result
        if (dp[n] != -1)
            return dp[n];
        //recursive call
        return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    }
    int fib(int n) {
        // create dp array of sizze(n+1) and initialize with -1
        vector<int> dp(n + 1, -1);

        return fibonacci(n, dp);
    }
};
---------------------------------------------------------------

// BottomUP Approach : Tabulation + loop
// TC and SC :O(n)
class Solution {
public:
    
    int fib(int n) {
        //base case 
        if(n <= 0)return n;
        // create dp array of sizze(n+1) and initialize with -1
        vector<int> dp(n + 1, -1);
 dp[0]=0;
        dp[1]=1;
        
      for(int i =2 ; i <= n ;i++)
      {
        dp[i]=dp[i-1]+dp[i-2];
      }
        return dp[n]; 
        
    }
};
---------------------------------------------------------------
//space optimization
// TC  :O(n)
//SC:O(1)
class Solution {
public:
    int fib(int n) {

       //base case 
        if(n<=1)return n;
        int prev1=0;
        int prev2=1;
        int curr;
        
      for(int i =2 ; i <= n ;i++)
      {
       curr= prev1+prev2;
       prev1=prev2;
       prev2=curr;

      }
        return curr; 
    }
   
};

//recursion 
class Solution {
public:
int count(int i,int n)
{
    //base case
    if(i==n)return 1;
    if(i>n)return 0;

    return count(i+1,n)+count(i+2,n);
}
    int climbStairs(int n) {
        return count(0,n);
    }
};
/*
TC:O(2^n)
SC:O(n)
*/

-------------------------------------------------------------------------

//Top Down
class Solution {
public:
    int count(int i, int n, vector<int>& dp) {

        // base case
        if (i == n)
            return 1;
        if (i > n)
            return 0;

        // result already exits
        if (dp[i] != -1)
            return dp[i];
        // recursive call
        return dp[i] = count(i + 1, n, dp) + count(i + 2, n, dp);
    }
    int climbStairs(int n) {

        vector<int> dp(n + 2, -1);//n+2 size because i have to create 0 to 6
function to store value in dp array return count(0, n, dp);
    }
};
/*
TC:O(n)
SC:O(n)
*/

---------------------------------------------------------------------------------
//Bottom Down
class Solution {
public:
    int count(int i, int n, vector<int>& dp) {

        // base case
        if (i == n)
            return 1;
        if (i > n)
            return 0;

        // result already exits
        dp[n]=1;
        dp[n+1]=0;


        if (dp[i] != -1)
            return dp[i];
        // recursive call
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=dp[i+1]+dp[i+2];
        }
        return dp[i] ;
    }
    int climbStairs(int n) {

        vector<int> dp(n + 2, -1);//n+2 size because i have to create 0 to 6
function to store value in dp array return count(0, n, dp);
    }
};
/*
TC:O(n)
SC:O(n)
*/
-----------------------------------------------------------------------------------------------
// Space optimization
class Solution {
public:
    int count(int i, int n) {

        // base case
        if (i == n)
            return 1;
        if (i > n)
            return 0;

        // result already exits
        int next1 = 1;//by step 1,1 way
        int next2 = 0;//by step 0 , 1 way
        int curr;

        for (int i = n -1 ; i >=0; i--) {
            curr = next1 + next2;
            next2=next1;
            next1=curr;
        }
        return curr;
    }
    int climbStairs(int n) { return count(0, n); }
};
/*
TC:O(n)
SC:O(1)
*/

---------------------------------------
    Another method
class Solution {
public:
    int climbStairs(int n) {
       int i=n;
       if(i==0)return 1;
       if(i<0)return 0;
       return climbStairs(i-1)+climbStairs(i-2);
    }
};//TC:O(2^n)
//SC:O(n)


-------------------------------------
    //top down approach 
class Solution {
public:
int climbStairs2(int n, vector<int>&dp) {
        
       int i=n;
       if(i==0)return 1;
       if(i<0)return 0;

       if(dp[i]!=-1)return dp[i];


       return dp[i]=climbStairs2(i-1,dp)+climbStairs2(i-2,dp);
    }
    int climbStairs(int n) {
        
       vector<int>dp(n+2,-1);


       return climbStairs2(n,dp);
    }
};//TC:O(n)
//SC:O(n)

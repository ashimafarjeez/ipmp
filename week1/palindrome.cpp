//Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0&&x!=0)) return false;
        int n=x, rev=0;
        while(n>0){
            rev = rev*10+(n%10);
            n/=10;
            if(rev>=n) break;
        }
        if(rev==n) return true;
        if(rev/10==n) return true;
        return false;
    }
};

//TC: O(n), SC: O(1)

class Solution {
public:
    int fib(int n) {
        /* base case , for 0th index number is 0 and 1th index number is 1 , so
        return  the number for that case */
        if(n<=1) return n ;
        int lastnum = fib(n-1) ;
        int secondlastnum = fib(n-2) ;
        return lastnum + secondlastnum ;
    }
};
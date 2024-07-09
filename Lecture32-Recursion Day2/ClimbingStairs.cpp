#include <bits/stdc++.h> 
#include<iostream>
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base case
    if (nStairs < 0) {
      return 0;
    }

        if (nStairs == 0) {
          return 1;
        }
        //r.c
        int ans=countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);

        return ans;
    
}

int main(){

    return 0;
}
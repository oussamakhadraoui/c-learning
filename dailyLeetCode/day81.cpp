 #include <bits/stdc++.h>
     int rangeBitwiseAnd(int left, int right) {
        while(right>left){
          right=right & (right-1);
        }
        return right;
    }

//  10000
// -    1
// -------
//  01112
// -    1
// ------
//  01111
// &10000
// ------
//  00000

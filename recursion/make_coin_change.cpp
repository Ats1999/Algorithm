//============================================================================
// Name        : .cpp
// Author      : Rahul (ATS)
// Version     : 2.0
// cpp version : c++ 14
// Copyright   : Everyone can freely use and distribute it.
// Description : Implemention of make coin change using recursion. 
// T.C         : O(n^m) where n is the number of coins and m is the level of recursion tree. 
// A.S         : O()
//============================================================================
#include<bits/stdc++.h>
using namespace std;
//define
// Fast I/O
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr)

/**
* This function find the minimum number of coins needed to make change of the given number.
* @param coin:  Contains coins with their value
* @param n : an int - number required to make change.
* @return best: minimum number of coins
*/
int makeChange(int n,vector<int>coins){
    //  INT_MAX-10000; BCZ overflow. ....
    // if n is less than 0 then return infinite beacause there is no way to make sum. 
    // it helps in forming result...
    if(n<0)
        return INT_MAX-10000; 
    // if n is zero then return  0, 0 ways to make 0
    if(n==0)
        return 0;
    
    // Recursion..
    int best=INT_MAX-10000;
    for(int c:coins){
        best=min(best,makeChange(n-c,coins)+1);
    }
    return best;
}
// driver code
int main(){
	cout<<"Started\n";
	// I/O
	IOS;
    #ifndef ONLINE_JUDGE 
	    // For getting input from input.txt file 
	    freopen("C:\\Users\\Rahul kumar\\desktop\\Algorithm\\input.txt", "r", stdin); 
	    // Printing the Output to output.txt file 
	    freopen("C:\\Users\\Rahul kumar\\desktop\\Algorithm\\output.txt", "w", stdout); 
    #endif 
    vector<int>coins{1,3,4};
    int n;
    cin>>n;
    cout<<makeChange(n,coins);
	return 0;
}
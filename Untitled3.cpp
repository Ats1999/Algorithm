//============================================================================
// Name        : printSet.cpp
// Author      : Rahul (ATS)
// Version     : 2.0
// cpp version : c++ 14
// Copyright   : Everyone can freely use and distribute it.
// Description : Print all subsets of any given set.
//============================================================================
#include<bits/stdc++.h>
using namespace std;
/**
* This functon print all subsets of any given set. 
* @param ar[]: input set.
* @param cur: subset - built by this function recursively
* @param index: index of the set item, which is to be included or excluded in the current subset. 
*/
void printSet(int ar[],vector<int> cur,int index){
	if(index>=3)
		return;
	
	// do not include current element in this subset
	printSet(ar,cur,index+1);
	
	// include current item in this subset
	cur.push_back(ar[index]);
	printSet(ar,cur,index+1);
	
	// print current set                             
	for(int i:cur)
		cout<<i<<" ";
	cout<<endl;
}
// driver code
int main(){
	int ar[]={1,2,3};
	vector<int> cur;
	printSet(ar,cur,0);
	return 0;
}


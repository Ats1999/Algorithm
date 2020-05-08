//============================================================================
// Name        : quick_sort.cpp
// Author      : Rahul (ATS)
// Version     : 2.0
// cpp version : c++ 14
// Copyright   : Everyone can freely use and distribute it.
// Description :
// T.C         : ---------------------
//			   : Best case:= O(lon(n))
//			   : Worst case:= O(n^2)
// A.S         : O(1)
//============================================================================
#include<bits/stdc++.h>
using namespace std;
/**
* Function to sort an array using quick sort algorithm. 
* @param ar: input array
* @param size : size of the array
*/

void quickSort(int ar[],int start,int end){
	
}

/**
* Find pivot such that all elements to the left side of povot is less than pivot, elements that are right side should greater that pivot.
* @param ar[]: inpuut array
* @param n: sizee of the array.
*/
void pivot(ar[],int n){
	int pivot=ar[0];
	int k=0,j=n-1;
	
	while(ar[k]<pivot)&&k<=j{
		k++;
	}
	while(ar[j]>pivot&&j>0)
		j--;
	while(j>k){
		swap()
	}
}

// driver code
int main(){
	// fast I/O
	cout<<"Start\n";
    
    cout<<"Start\n";
    int ar[10]={2,8,89,0,123,12,1,4,6,2};
    
    cout<<"Input...\n";
    for(int i=0;i<10;i++)
    	cout<<ar[i]<<" ";
    	
    quickSort(ar,0,10);
    
    cout<<"\n\n\nOutput...\n";
    for(int i=0;i<10;i++)
    	cout<<ar[i]<<" ";
    	
	return 0;
}


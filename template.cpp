//============================================================================
// Name        : .cpp
// Author      : Rahul (ATS)
// Version     : 2.0
// cpp version : c++ 14
// Copyright   : Everyone can freely use and distribute it.
// Description :
// T.C         : O()
// A.S         : O()
//============================================================================
#include<bits/stdc++.h>
using namespace std;
//define
// Fast I/O
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr)
bool deb=true; 
// read and print array of integers
#define deb(x) if(deb){cout<<"#X: "<<x<<" ";}
#define debln(x) if(deb){cout<<"#X: "<<x<<"\n ";}
#define dar(ar,n) if(deb){for(int i=0;i<n;i++) {cout<<"#."<<i<<ar[i]<<",";cout<<endl;}}
#define d2d(ar,n) if(deb){for(int i=0;i<n;i++) {for(int j=0;j<n;j++){cout<<ar[i][j]<<" ";}cout<<endl; }}
#define print_ar(name,size,dele) if(deb){for(int i=0;i<size;i++){ cout<<name[i]<<dele; }}
// print integer and a new line every time.
#define pf(n) printf("%d ",n)
#define ps(s) printf("%s\n",s)
#define sd(n) scanf("%d",&n)
// new line
#define space cout<<" ";
#define line cout<<endl;
// vector
#define bg begin()
#define en end()
#define pb(n) push_back(n)
// pair
#define fr first
#define sc second
#define mp(a,b) make_pair(a,b)
// new line
#define e endl
// Loop
#define FOR(n) for(int i=0;i<n;i++)
#define FORA(a,n) for(int i=a;i<n;i++)
// reading test case
#define rd_ar_int(name,size) int name[size]; for(int i=0;i<size;i++){ sd(name[i]);}
#define test(n) int n; sd(n); while(n--)
// 2D array
#define twoD(row,col,name) int **name=new int*[row];for(int i=0;i<row;i++){name[i]=new int[col];}
// typedef
// vector
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
// vector pair
typedef vector<pair<int,int>> vp;
typedef vector<string> vs;
/// pair
typedef pair<int,int> pi;

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
    int t=5;
	deb(t);
	cout<<"\nEnD\n";
	return 0;
}

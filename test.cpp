#include<bits/stdc++.h>
using namespace std;
//define 
// print integer and a new line every time. 
#define pf(n) printf("%d ",n)
#define ps(s) printf("%s\n",s)
#define sd(n) scanf("%d",&n)
// new line
#define line printf("\n");
// read and print array of integers
#define red(ar,n) for(int i=0;i<n;i++){ sd(ar[i]);}
#define ped(ar,n) for(int i=0;i<n;i++){ pf(ar[i]); }
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
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	vp test;
	test.pb(mp(4,5));
	test.pb(mp(1,7));test.pb(mp(8,6));test.pb(mp(0,78));test.pb(mp(0,565));
	
	for(auto it:test){
		pf(it.fr); pf(it.sc);
		line;
	}
	
	line;line;
	sort(test.bg,test.en);
	for(auto it:test){
		pf(it.fr); pf(it.sc);
		line;
	}
	
}

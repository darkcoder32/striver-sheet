#include<iostream>
#include<vector>
// #include <boost/multiprecision/cpp_int.hpp> 
// using boost::multiprecision::cpp_int;
using namespace std;

// #define F first
// #define S second
// #define pii pair<int,int>
// #define ppiii pair<pair<int,int>,int>
// #define ppssi pair<pair<string,string>,int>
// #define mkp make_pair
// #define vpii vector<pair<int,int>>
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vll vector<long long>
// #define vlli vector<long long int>
// #define vvll vector<vector<long long>>
// #define vvlli vector<vector<long long int>>
// #define vulli vector<unsigned long long int>
// #define vvulli vector<vector<unsigned long long int>>
// #define vs vector<string>
// #define loopi(i,n) for(int i = 0; i < n; i++)
// #define loopj(j,n) for(int j = 0; j < n; j++)
// #define ll long long
// #define lli long long int 
// #define ulli unsigned long long int
// #define mod 1000000007
// #define fi(a,b) for(int i=a;i<b;i++)
// #define fj(a,b) for(int j=a;j<b;j++)
// #define fir(a,b) for(int i=a;i>=0;i--)
// #define fjr(a,b) for(int j=a;j>=0;j--)
// #define f(i,a,b) for(int i=a;i<b;i++)
// #define fr(i,a,b) for(int i=a;i>=0;i--)
// #define pb push_back

void mainFun(){
	int n;
	cin>>n;
    int numRows = n;
    vector<vector<int> >ans;
    vector<int>buf;
    buf.push_back(1);
    ans.push_back(buf);
    // return ans;
    for(int i=1; i<numRows; i++) {
        vector<int>buf1;
        for(int j=0; j<i; j++) {
            if(j-1 < 0) {
                buf1.push_back(ans[i-1][j]);
            } else {
                buf1.push_back(ans[i-1][j] + ans[i-1][j-1]);
            }
        }
        ans.push_back(buf1);
    }
    for(auto i: ans) {
        cout<<i<<" ";
    }
}

int main()
 {
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    mainFun();
	}
	return 0;
}
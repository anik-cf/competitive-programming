#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define MAX 10000007
#define PI acos(-1)
#define pb(x) push_back(x)
#define inpll(a) scanf("%lld",&a)
#define vi vector<int>
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;


bool isPerfect(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 

bool isFibonacci(int n)
{
    return isPerfect(5*n*n + 4) ||
           isPerfect(5*n*n - 4);
}

int main(){
   
    //READ("in.txt");
    //WRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n; 
	
	for(int a=1; a<=n; a++){
		if(isFibonacci(a))
		cout << "O";
		else
		cout << "o";
	}
	
	cout << endl; 

}

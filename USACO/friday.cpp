/*
TASK: friday
LANG: C++                 
*/
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
 

bool isLeapYear(int y)
{
    return y%4==0 && (y%100 != 0 || y%400 == 0);
}

int main(){
   
    
	//READ("friday.in");
    //WRITE("friday.out");
    ios_base::sync_with_stdio(0); cin.tie(0);
   
    //vi v;
    int ans[7] = {0,0,0,0,0,0,0};
    int mdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int leapmdays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int n; cin >> n; 
    
    int x=0; 
    
    for(int y=1900; y<1900+n; y++){
    	for(int m=0; m<12; m++){
    		int d = (x+12)%7;
    		ans[(d+2)%7]++;
    		if(isLeapYear(y)){
    			x+=leapmdays[m];
			}
			else
				x+=mdays[m]; 
		}
	}
	
	for(int i=0; i<7; i++){
		if(i!=6)
		cout << ans[i] << " ";
		else
		cout << ans[i] << endl;
	}
	
	
 
   
}

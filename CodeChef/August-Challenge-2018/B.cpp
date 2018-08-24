#include <bits/stdc++.h>
using namespace std;
#define LL long long

vector<int>v; 

void precalculate(){
    int n=30; 
    for(int i=0; i<=n; i++){

        for(int j=0; j<=n; j++){
            if(i!=j){
            //cout << i << " " << j << endl; 
            LL ans = pow(2, i) + pow(2, j);
            v.push_back(ans);
            }
        }

    }


    sort(v.begin(), v.end());

}


int binary_search(int value, vector<int>a) {

        if(value < a[0]) {
            return a[0];
        }
        if(value > a[a.size()-1]) {
            return a[a.size()-1];
        }

        int lo = 0;
        int hi = a.size() - 1;

        while (lo <= hi) {
            int mid = (hi + lo) / 2;

            if (value < a[mid]) {
                hi = mid - 1;
            } else if (value > a[mid]) {
                lo = mid + 1;
            } else {
                return a[mid];
            }
        }
        // lo == hi + 1
        return (a[lo] - value) < (value - a[hi]) ? a[lo] : a[hi];
    }


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    precalculate(); 

    int T; 
    cin >> T; 

    while(T--)
    {
        int x; 
        cin >> x; 
        int ans = binary_search(x, v);
        cout << abs(x-ans) << endl; 
    }
    


// 3 4 5 6 8 10 12 16 17 18 20 24 34 36 40 66 68 72 130 132 258 260

return 0;
}
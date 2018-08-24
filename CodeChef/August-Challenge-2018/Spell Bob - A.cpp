// A. SPELL BOB SOLUTION 

#include <bits/stdc++.h>
using namespace std;
#define LL long long



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    int N; 
    cin >> N; 

    while(N--){


        int b=0, o=0, x, y; 

        string top, bottom; 
        cin >> top; 
        cin >> bottom; 



        for(int i=0; i<3; i++){
            x=b;
            y=o; 
            if(top[i]=='b' || bottom[i]=='b') b++;
            if(top[i]=='o' || bottom[i]=='o') o++;
            
            if(x==b && y==o){
                b=0;
                break;
            }
        }

        if(b>=2 && o>=1)
            cout << "yes" << endl; 
        else 
            cout << "no" << endl; 

        // cout << top << endl; 
        // cout << bottom << endl << endl; 

    }



return 0;
}

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <iostream>

 
using namespace std;
 
typedef long long ll;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
 
void solve(){
    char c;
    //scanf("%c", &c);
    cin>>c;

    if(c >= 'A' && c <= 'Z')
    {
        printf("Uppercase Character\n");
    }
    else if(c >= 'a' && c <= 'z')
    {
        printf("Lowercase Character\n");
    }
    else if(c >= '0' && c <= '9')
    {
        printf("Numerical Digit\n");
    }
    /*else if(c == ' ')
    {
        printf("Special Character\n");
    }*/
    else 
    {
        printf("Special Characters\n");
    }
}
int main()
{
    fast_cin();
    ll t;
    cin>>t;
    //scanf("%lld", &t);
    
    ll i;
    for(i = 0; i < t; i++)
    {
        getchar();
        solve();
    }
    return 0;
}

    /*fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     cout << "Case #" << it+1 << ": ";
        solve();
    }*/
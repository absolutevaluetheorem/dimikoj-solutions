#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <stdlib.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
 
bool prime (long int a);

void solve(){
}
int main()
{
    int numin;
    scanf("%d", &numin);
    
    int i;
    for(i = 0; i < numin; i++)
    {
        long int a, b, count = 0;
        scanf("%ld %ld", &a, &b);

        /*for(int j = a; j <= b; j++)
        {
            if(prime(j) == true)
            {
                count++;
            }
        }*/

        while(a <= b)
        {
            if(prime(a) == true)
            {
                count++;
            }
            a++;
            /*
            ***debugging***
            if(prime(a) == true)
            {
                printf("true\n");
            }
            else 
            {
                printf("false\n");
            }
            a++;*/
        }
        
        
        printf("%ld\n", count);
    }
    return 0;
}

bool prime(long int a)
{
    long int s = sqrt(a) + 1;
        if(a == 2)
    {
        return true;
    }
    else 
    {
        for(long int i = 2; i <= s; i++)
        {
            if(a - i * (a / i) == 0 || a == 1 || a == 0)
            {
                return false;
            }
        }
    }
    return true;
}
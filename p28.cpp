#include <bits/stdc++.h>

typedef long long ll;

int main()
{
    long long int t;
    scanf("%d", &t);
    
    long long int i;
    for(i = 0; i < t; i++)
    {
        long long int n, j, stat = 0; //forward sort: stat = 0, reverse sort: stat = 2; unsorted: stat = 1;
        scanf("%lld ", &n);

        long long int ara[n];
        for(long long int j = 0; j < n; j++)
        {
            scanf("%lld ", &ara[j]);
        }

        if(n == 1)
        {
            printf("YES");
        }

        if(n > 1)
        {
            //forward sort
            for(ll j = 1; j < n; j++)
            {
                if(ara[j] < ara[j - 1])
                {
                    stat = 1; //possible unsorted
                    break;
                }
            }
            if(stat == 0)
            {
                printf("YES\n");
            }
            else
            {
                //check for reverse sort
                for(ll j = n - 1; j > 0; j--) //pichonertatr chaite shamnerta boro. 
                {
                    if(ara[j] > ara[j - 1]) //shamnerta choto.
                    {
                        stat = 1; //unsorted
                        break;
                    }
                    stat = 2; //reverse sorted
                }
                if(stat == 1)
                {
                    printf("NO\n");
                }
                else
                {
                    printf("YES\n");
                }
            }
        }
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
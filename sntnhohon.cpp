#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int a[10000] = {0};
        a[0] = 1;
        a[1] = 1;
        for ( int i = 2; i <=sqrt(n); i++)
            if (a[i] == 0)
            {
                for (int j = i * i; j <= n; j += i)
                    {
                        a[j] = 1;
                    }
            }
        for (int i = 0; i <= n; i++)
        {
            if (a[i] == 0) cout << i << " " ;
        }
        cout << endl;
        

    }
}
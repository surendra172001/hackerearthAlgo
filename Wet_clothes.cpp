#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, g;

    cin >> n >> m >> g;

    int a[m], t[n];

    for(int i = 0; i < n; i++) cin >> t[i];
    for(int i = 0; i < m; i++) cin >> a[i];

    sort(t, t+n);
    sort(a, a+m);
    int diff[n-1];
    for(int i = 1; i < n; i++) diff[i-1] = t[i] - t[i-1];

    sort(diff, diff+n-1);

    int im = 0, idiff = 0;

    while(im < m && idiff < n-1) {
      // cout << diff[idiff] << " " << a[im] << "\n";
      if(diff[idiff] < a[im]) idiff++;
      else im++;
    }

    cout << im << "\n";

    return 0;
}

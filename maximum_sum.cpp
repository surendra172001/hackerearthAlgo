#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    long a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    long maxM = INT_MIN;

    bool flag = true;
    for(int i = 0; i < n; i++) {
      maxM = max(maxM, a[i]);
      if(a[i] > 0) {
        flag = false;
        break;
      }
    }

    if(flag) {
      cout << maxM << " " << 1 << "\n";
      return 0;
    }

    long sum = 0;
    int size = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] >= 0) {
        size += 1;
        sum += a[i];
      }
    }

    cout << sum << " " << size << "\n";

    return 0;
}

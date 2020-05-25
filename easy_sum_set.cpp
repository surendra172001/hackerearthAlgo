#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    set<int> a, b, c;

    cin >> n;
    int x;
    for(int i = 0; i < n; i++) {
      cin >> x;
      a.insert(x);
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
      cin >> x;
      c.insert(x);
    }

    int diff1 = *(c.begin()) - *(a.begin());
    int diff2 = *(--c.end()) - *(--a.end());

    int st = min(diff1, diff2);
    int end = max(diff1, diff2);

    // cout << st << " " << end << "\n";
    for(int i = st; i <= end; i++) {
      bool flag = true;
      for(int r : a) {
        if(c.find(r+i) == c.end()) {
          flag = false;
          break;
        }
      }
      if(flag) b.insert(i);
    }

    // cout << b.size() << "\n";

    for(int r : b) cout << r << " ";
    cout << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
      string s;
      cin >> s;
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      int cnt = 0;
      for(char x : s) {
        switch(x) {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            cnt += 1;
            break;
          default:
            break;
        }
      }
      cout << cnt << "\n";
    }

    return 0;
}

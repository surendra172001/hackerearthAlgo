#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pi_(x)	printf("%d ",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


const int MOD = (1e9) + 7;
const int MAX = (1e6) + 5;
const int SIZE = (1e5) + 5;

int arr[SIZE];
int aux[SIZE];

void reverse(int n) {
	int half = n/2;
	for(int i = 0; i < half; i++) {
		swap(arr[i], arr[n-i-1]);
	}
}

int longestIncreasingSubsequence(int n) {
	int length = 1;
	aux[0] = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] < aux[0]) {
			aux[0] = arr[i];
		} else if(arr[i] > aux[length-1]) {
			aux[length++] = arr[i];
		} else {
			int s = 0, e = length-1, key = arr[i], pos;
			while(s <= e) {
				int mid = s+(e-s)/2;
				if(key <= aux[mid]) {
					e = mid-1;
				} else {
					pos = mid;
					s = mid+1;
				}
			}
			aux[pos+1] = arr[i];
		}
	}
	return length;
}

int longestDecreasingSubsequence(int n) {
	reverse(n);
	return longestIncreasingSubsequence(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
	int i, n, p;
	si(n);

	fo(i, n) si(arr[i]);

	cout << longestDecreasingSubsequence(n) << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int mx=a+b;
		int a1=a%10;
		int a2=a/10;
		int b1=b%10;
		int b2=b/10;
		mx=max(mx, a2*10+b1+b2*10+a1);
		if(b2)
			mx=max(mx, a2*10+b2+a1*10+b1);
		if(a2)
			mx=max(mx, b1*10+a1+b2*10+a2);
		if(a2&&b2)
			mx=max(mx, b2*10+a1+a2*10+b1);
		cout << mx << "\n";
	}
}

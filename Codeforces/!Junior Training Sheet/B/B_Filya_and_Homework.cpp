#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    set<int> s;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    bool y = false;
    if (s.size() == 3)
    {
        auto it = s.begin();
        int a = *it;
        advance(it, 1);
        int b = *it;
        advance(it, 1);
        int c = *it;
        if (b-a == c-b)
            y = true;
    }
    if (s.size() <= 2)
        y = true;
    cout << (y?"YES":"NO");
	return 0;
}
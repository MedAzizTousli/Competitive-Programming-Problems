#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	double n, x, y;
    cin >> n >> x >> y;
    set<double> s;
    rep(i, 0, n)
    {
        double a, b;
        cin >> a >> b;
        if (y-b == 0)
            s.insert(-LLONG_MAX);
        else
            s.insert((x-a)/(y-b));
    }
    cout << s.size();
	return 0;
}
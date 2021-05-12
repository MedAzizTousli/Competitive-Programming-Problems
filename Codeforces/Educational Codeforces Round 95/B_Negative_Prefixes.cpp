#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> l(n);
        rep(i, 0, n)
            cin >> v[i];
        rep(i, 0, n)
            cin >> l[i];
        vector<int> a;
        rep(i, 0, n)
            if (l[i] == 0)
                a.push_back(v[i]);
        sort(rbegin(a), rend(a));
        int j = 0;
        rep(i, 0, n)
            if (l[i] == 1)
                cout << v[i] << " ";
            else 
            {
                cout << a[j] << " ";
                j++;
            }
        cout << endl;
    }
    return 0;
}
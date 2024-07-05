#include <bits/stdc++.h>
using namespace std;
#define loop for (int i = 0; i < n; i++)
#define ll long long

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;

#define int long long
int n, q;
vl seg;
void build(vi &a, int i = 0, int l = 0, int r = (n - 1))
{
	if (l == r)
		seg[i] = a[l];
	else
	{
		int mid = (l + r) / 2;
		build(a, i * 2 + 1, l, mid);
		build(a, i * 2 + 2, mid + 1, r);
		seg[i] = min(seg[i * 2 + 1], seg[i * 2 + 2]);
	}
}
void update(int id, int val, int l = 0, int r = n - 1, int i = 0)
{
	if (id > r or id < l)
		return;
	if (l == r)
	{
		if (l == id)
			seg[i] = val;
		return;
	}
	int mid = (l + r) / 2;
	update(id, val, l, mid, i * 2 + 1);
	update(id, val, mid + 1, r, i * 2 + 2);
	seg[i] = min(seg[i * 2 + 1], seg[i * 2 + 2]);
}
int getmin(int L, int R, int l = 0, int r = n - 1, int i = 0)
{
	if (l >= L and r <= R)
		return seg[i];
	if (l > R or r < L)
		return 1e9;
	int mid = (l + r) / 2;
	return min(getmin(L, R, l, mid, i * 2 + 1), getmin(L, R, mid + 1, r, i * 2 + 2));
}
void solve()
{
	cin >> n >> q;
	vi a(n);
	loop cin >> a[i];
	seg.resize(4 * n, 0);
	build(a);
	while (q--)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			int id, val;
			cin >> id >> val;
			update(id - 1, val);
		}
		else
		{
			int l, r;
			cin >> l >> r;
			cout << getmin(l - 1, r - 1) << endl;
		}
	}
}

signed main()
{

	int tc = 1;
	while (tc--)
		solve();
	return 0;
}

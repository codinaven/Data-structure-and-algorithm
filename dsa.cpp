#include <bits/stdc++.h>
using namespace std;
 
// clang-format off
// template {{{
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define f first
#define s second
 
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define trav(a, x) for (auto &a : x)
 
#define L1(u, ...) [&](auto &&u) { return __VA_ARGS__; }
#define L2(u, v, ...) [&](auto &&u, auto &&v) { return __VA_ARGS__; }
 
#define sort_by(x, y) sort(all(x), [&](const auto &l, const auto &r) { return y; })
 
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vd = vector<double>;
using vs = vector<string>;
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
 
using vpii = vector<pii>;
using vpll = vector<pll>;
using vpdd = vector<pdd>;
 
template <typename T> void ckmin(T &a, const T &b) { a = min(a, b); }
template <typename T> void ckmax(T &a, const T &b) { a = max(a, b); }
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
namespace __input {
    template <class T1, class T2> void re(pair<T1, T2> &p);
    template <class T> void re(vector<T> &a);
    template <class T, size_t SZ> void re(array<T, SZ> &a);
 
    template <class T> void re(T &x) { cin >> x; }
    void re(double &x) { string t; re(t); x = stod(t); }
    template <class Arg, class... Args> void re(Arg &first, Args &...rest) { re(first); re(rest...); }
 
    template <class T1, class T2> void re(pair<T1, T2> &p) { re(p.first, p.second); }
    template <class T> void re(vector<T> &a) { for (auto &x : a) re(x); }
    template <class T, size_t SZ> void re(array<T, SZ> &a) { for (auto &x : a) re(x); }
}
using namespace __input;
 
namespace __output {
    template <typename T> struct is_outputtable { template <typename C> static constexpr decltype(declval<ostream &>() << declval<const C &>(), bool()) test(int) { return true; } template <typename C> static constexpr bool test(...) { return false; } static constexpr bool value = test<T>(int()); };
    template <class T, typename V = decltype(declval<const T &>().begin()), typename S = typename enable_if<!is_outputtable<T>::value, bool>::type> void pr(const T &x);
 
    template <class T, typename V = decltype(declval<ostream &>() << declval<const T &>())> void pr(const T &x) { cout << x; }
    template <class T1, class T2> void pr(const pair<T1, T2> &x);
    template <class Arg, class... Args> void pr(const Arg &first, const Args &...rest) { pr(first); pr(rest...); }
 
    template <class T, bool pretty = true> void prContain(const T &x) { if (pretty) pr("{"); bool fst = 1; for (const auto &a : x) pr(!fst ? pretty ? ", " : " " : "", a), fst = 0; if (pretty) pr("}"); }
 
    template <class T> void pc(const T &x) { prContain<T, false>(x); pr("\n"); }
    template <class T1, class T2> void pr(const pair<T1, T2> &x) { pr("{", x.first, ", ", x.second, "}"); }
    template <class T, typename V, typename S> void pr(const T &x) { prContain(x); }
 
    void ps() { pr("\n"); }
    template <class Arg> void ps(const Arg &first) { pr(first); ps(); }
    template <class Arg, class... Args> void ps(const Arg &first, const Args &...rest) { pr(first, " "); ps(rest...); }
}
using namespace __output;
 
#define __pn(x) pr(#x, " = ")
#ifdef ANAND_LOCAL
#define pd(...) pr("\033[1;31m"), __pn((__VA_ARGS__)), ps(__VA_ARGS__), pr("\033[0m"), cout << flush
#else
#define pd(...)
#endif
 
namespace __algorithm {
    template <typename T> void dedup(vector<T> &v) { sort(all(v)); v.erase(unique(all(v)), v.end()); }
    template <typename T> typename vector<T>::const_iterator find(const vector<T> &v, const T &x) { auto it = lower_bound(all(v), x); return it != v.end() && *it == x ? it : v.end(); }
    template <typename T> size_t index(const vector<T> &v, const T &x) { auto it = find(v, x); assert(it != v.end() && *it == x); return it - v.begin(); }
    template <typename I> struct _reversed_struct { I &v_; explicit _reversed_struct(I &v) : v_{v} {} typename I::reverse_iterator begin() const { return v_.rbegin(); } typename I::reverse_iterator end() const { return v_.rend(); } };
    template <typename I> _reversed_struct<I> reversed(I &v) { return _reversed_struct<I>(v); }
    template <typename I> struct _range_struct { const I first_, last_; explicit _range_struct(const I first, const I last) : first_{first}, last_{last} {} I begin() const { return first_; } I end() const { return last_; } };
    template <typename I> _range_struct<I> range(const I first, const I last) { return _range_struct<I>(first, last); }
}
using namespace __algorithm;
 
namespace __io {
    void setIO() { ios_base::sync_with_stdio(0); cin.tie(0); cout << setprecision(15); }
}
using namespace __io;
// }}}
 
// clang-format on
 
template <typename I, typename F> I find_min(const F &f, I l, I r, int iter = 2000) {
    while (iter--) {
        I w = (r - l) / 3;
        I u = l + w, v = l + 2 * w;
        if (f(u) < f(v))
            r = v;
        else
            l = u;
    }
 
    return (l + r) / 2;
}
 
int main() {
    setIO();
 
    double a, b, c;
    re(a, b, c);
 
    if (a == 0 && b == 0 && c == 0) {
        ps(-1);
        return 0;
    }
 
    auto f = [&](double x) { return a * x * x + b * x + c; };
    auto g = [&](double x) { return abs(f(x)); };
 
    double pivot = a > 0 ? find_min(f, -1e18, 1e18) : find_min(L1(x, -f(x)), -1e18, 1e18);
 
    vector<double> solutions;
    solutions.push_back(find_min(g, -1e18, pivot));
    solutions.push_back(find_min(g, pivot, 1e18));
 
    pd(pivot);
    pd(solutions);
 
    vector<double> ans;
    for (double x : solutions) {
        pd(x, g(x));
        if (g(x) < 0.1)
            ans.push_back(x);
    }
 
    ans.resize(unique(all(ans), L2(u, v, abs(u - v) < 1e-6)) - ans.begin());
 
    ps(sz(ans));
    for (double x : ans)
        ps(x);
 
    return 0;
}
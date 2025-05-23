template<typename S, typename T> void smax(S &a, const T &b) { if(a < b) a = b; }
template<typename S, typename T> void smin(S &a, const T &b) { if(a > b) a = b; }
template<typename S, typename T> void smax(S &a, const T &b, function<void(void)> f) { if(a < b) { a = b; f(); } }
template<typename S, typename T> void smin(S &a, const T &b, function<void(void)> f) { if(a > b) { a = b; f(); } }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cout << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << ' ' << H; dbg_out(T...); }
#define DBG(...) cout << '[' << (__LINE__ - 9) << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#define RANGE(x) (x).begin(), (x).end()
#define MP make_pair
#define MT make_tuple
#define PII pair<int, int>
using i32 = int32_t;
using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;

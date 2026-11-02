#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

static char buf_in[1 << 20];
static size_t ptr_in = 0, len_in = 0;

inline char get_char() {
    if (ptr_in == len_in) {
        ptr_in = 0;
        len_in = fread(buf_in, 1, sizeof(buf_in), stdin);
        if (len_in == 0) return 0;
    }
    return buf_in[ptr_in++];
}

inline bool read_ll(long long &x) {
    char c = get_char();
    while (c && c <= ' ') c = get_char();
    if (!c) return false;
    bool neg = false;
    if (c == '-') { neg = true; c = get_char(); }
    x = 0;
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = get_char();
    }
    if (neg) x = -x;
    return true;
}

inline bool read_int(int &x) {
    long long tmp;
    if (!read_ll(tmp)) return false;
    x = (int)tmp;
    return true;
}

static char buf_out[1 << 20];
static size_t ptr_out = 0;

inline void write_char(char c) {
    if (ptr_out == sizeof(buf_out)) {
        fwrite(buf_out, 1, sizeof(buf_out), stdout);
        ptr_out = 0;
    }
    buf_out[ptr_out++] = c;
}

inline void write_ll(long long x) {
    if (x < 0) {
        write_char('-');
        x = -x;
    }
    char s[24];
    int len = 0;
    do {
        s[len++] = (char)('0' + (x % 10));
        x /= 10;
    } while (x > 0);
    while (len > 0) {
        write_char(s[--len]);
    }
    write_char('\n');
}

inline void flush_out() {
    if (ptr_out > 0) {
        fwrite(buf_out, 1, ptr_out, stdout);
        ptr_out = 0;
    }
}

const int MAXN = 50005;

int a[MAXN];
int buf[MAXN];
int cnt1[512];
int pos1[512];
int cnt2[256];
int pos2[256];

int main() {
    int n, q;
    if (!read_int(n) || !read_int(q)) return 0;

    for (int i = 1; i <= n; ++i) {
        int val;
        read_int(val);
        a[i] = val + 50000;
    }

    long long last_p = 0;

    while (q--) {
        long long x, y;
        read_ll(x);
        read_ll(y);

        int l = (int)(x + last_p);
        int r = (int)(y + last_p);

        int m = r - l + 1;

        if (m <= 48) {
            for (int i = 0; i < m; ++i) {
                buf[i] = a[l + i];
            }
            sort(buf, buf + m);

            long long sum_pos = 0;
            for (int i = 0; i < m; ++i) {
                sum_pos += (long long)buf[i] * (i * (m - 1 - i));
            }

            long long num_trios = (long long)m * (m - 1) * (m - 2) / 6;
            last_p = sum_pos - 50000LL * num_trios;
            write_ll(last_p);
            continue;
        }

        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));

        const int* src = a + l;

        for (int i = 0; i < m; ++i) {
            int v = src[i];
            cnt1[v & 511]++;
            cnt2[v >> 9]++;
        }

        pos1[0] = 0;
        for (int i = 1; i < 512; ++i) {
            pos1[i] = pos1[i - 1] + cnt1[i - 1];
        }

        pos2[0] = 0;
        for (int i = 1; i < 256; ++i) {
            pos2[i] = pos2[i - 1] + cnt2[i - 1];
        }

        for (int i = 0; i < m; ++i) {
            int v = src[i];
            buf[pos1[v & 511]++] = v;
        }

        long long sum_pos = 0;
        for (int i = 0; i < m; ++i) {
            int v = buf[i];
            int idx = pos2[v >> 9]++;
            sum_pos += (long long)v * (idx * (m - 1 - idx));
        }

        long long num_trios = (long long)m * (m - 1) * (m - 2) / 6;
        last_p = sum_pos - 50000LL * num_trios;

        write_ll(last_p);
    }

    flush_out();

    return 0;
}
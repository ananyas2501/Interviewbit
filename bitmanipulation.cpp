int Solution::divide(int A, int B) {
    long long n = A, m = B;
    int sign = n < 0 ^ m < 0 ? -1 : 1;
    n = abs(n), m = abs(m);
    long long q = 0;
    for (long long t = 0, i = 31; i >= 0; i--)
        if (t + (m << i) <= n)
            t += m << i, q |= 1LL << i;
    if (sign < 0) q = -q;
    return q >= INT_MAX || q < INT_MIN ? INT_MAX : q;
}

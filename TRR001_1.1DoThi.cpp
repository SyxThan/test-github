long long bin_pow(long long n, long long k)
{
    if (k == 1)
        return n % MOD;
    long long x = bin_pow(n, k / 2);
    x = (x * x) % MOD;
    if (k % 2)
        return (x * n) % MOD;
    return x;
}
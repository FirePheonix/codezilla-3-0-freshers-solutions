int main() {
    int n, i;
    scanf("%d", &n);
    long long val[100005];
    for (i = 1; i <= n; i++) scanf("%lld", &val[i]);
    int edgeU[100005], edgeV[100005];
    for (i = 0; i < n - 1; i++) scanf("%d %d", &edgeU[i], &edgeV[i]);
    long long result[2];
    templeOfferings(val, edgeU, edgeV, n, result);
    printf("%lld\n%lld\n", result[0], result[1]);
    return 0;
}

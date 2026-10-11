int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long arrival[100005];
    int service[100005];
    for (int i = 0; i < n; i++) scanf("%lld", &arrival[i]);
    for (int i = 0; i < n; i++) scanf("%d", &service[i]);
    printf("%lld\n", minCongestion(k, arrival, service, n));
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    static int scores[100005];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &scores[i]);
    long long maxBoost, maxKSum;
    kabbadiTracker(scores, n, k, &maxBoost, &maxKSum);
    printf("%lld\n%lld\n", maxBoost, maxKSum);
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int stalls[100000];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &stalls[i]);
    printf("%d\n", spiceMarketStalls(stalls, n, k));
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int water[100000];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &water[i]);
    printf("%d\n", riceFieldIrrigation(water, n, k));
    return 0;
}

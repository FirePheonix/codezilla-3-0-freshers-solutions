int main() {
    int n, i;
    long long C;
    scanf("%d %lld", &n, &C);
    int starts[100005], ends[100005];
    for (i = 0; i < n; i++) scanf("%d %d", &starts[i], &ends[i]);
    printf("%d\n", maxFestivalTasks(C, starts, ends, n));
    return 0;
}

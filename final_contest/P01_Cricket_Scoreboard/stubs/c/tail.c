int main() {
    int n;
    scanf("%d", &n);
    char ops[1000][50];
    for (int i = 0; i < n; i++) scanf("%s", ops[i]);
    int total = 0, allTimeMax = 0;
    cricketScoreboard(ops, n, &total, &allTimeMax);
    printf("%d\n%d\n", total, allTimeMax);
    return 0;
}
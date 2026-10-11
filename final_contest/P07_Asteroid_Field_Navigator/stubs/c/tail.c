int main() {
    int n;
    long long T;
    scanf("%d %lld", &n, &T);
    int asteroids[100005];
    for (int i = 0; i < n; i++) scanf("%d", &asteroids[i]);
    int survivors[100005];
    int count = 0, alarm = 0;
    asteroidStation(asteroids, n, T, survivors, &count, &alarm);
    if (count == 0) {
        printf("EMPTY\n");
    } else {
        for (int i = 0; i < count; i++) {
            if (i) printf(" ");
            printf("%d", survivors[i]);
        }
        printf("\n");
    }
    printf("%s\n", alarm ? "YES" : "NO");
    return 0;
}

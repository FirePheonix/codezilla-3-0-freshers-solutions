int main() {
    int n;
    scanf("%d", &n);
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int pivot = -1, isPalin = 0;
    diwaliLights(b, n, &pivot, &isPalin);
    printf("%d\n%s\n", pivot, isPalin ? "YES" : "NO");
    free(b);
    return 0;
}
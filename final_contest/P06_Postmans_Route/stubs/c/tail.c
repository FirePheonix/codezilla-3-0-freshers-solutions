int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%s\n", postmanRoute(arr, n) ? "YES" : "NO");
    free(arr);
    return 0;
}
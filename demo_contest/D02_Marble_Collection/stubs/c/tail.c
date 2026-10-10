int main() {
    int n, K;
    scanf("%d %d", &n, &K);
    static int arr[100005];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int newLen;
    int count = marbleCollection(arr, n, K, &newLen);
    for (i = 0; i < newLen; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n%d\n", count);
    return 0;
}

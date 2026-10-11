int main() {
    int n;
    scanf("%d", &n);
    int r[100005];
    for (int i = 0; i < n; i++) scanf("%d", &r[i]);
    printf("%lld\n", templeBellPower(r, n));
    return 0;
}

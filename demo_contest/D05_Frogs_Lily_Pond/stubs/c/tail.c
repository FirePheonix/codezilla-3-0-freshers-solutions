int main() {
    int n;
    scanf("%d", &n);
    int pads[100000];
    int i;
    for (i = 0; i < n; i++) scanf("%d", &pads[i]);
    int canReach, minJumps;
    frogsLilyPond(pads, n, &canReach, &minJumps);
    if (canReach) {
        printf("YES\n%d\n", minJumps);
    } else {
        printf("NO\n-1\n");
    }
    return 0;
}

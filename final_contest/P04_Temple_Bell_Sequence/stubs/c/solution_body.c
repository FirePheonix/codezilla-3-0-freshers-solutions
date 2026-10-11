long long prefix[100005];
int nge[100005], stk[100005];

long long templeBellPower(int* r, int n) {
    prefix[0] = 0;
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + r[i];

    int top = 0;
    for (int i = 0; i < n; i++) nge[i] = n;
    for (int i = n - 1; i >= 0; i--) {
        while (top > 0 && r[stk[top - 1]] < r[i]) top--;
        if (top > 0) nge[i] = stk[top - 1];
        stk[top++] = i;
    }

    long long total = 0;
    for (int i = 0; i < n; i++)
        if (i + 1 < nge[i])
            total += prefix[nge[i]] - prefix[i + 1];
    return total;
}

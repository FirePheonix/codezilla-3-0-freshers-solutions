#include <stdio.h>
#include <limits.h>

void cricketScoreboard(char ops[][50], int n, int* total, int* allTimeMax);
void cricketScoreboard(char ops[][50], int n, int* total, int* allTimeMax) {
    int stk[1000];
    int top = 0;
    *allTimeMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        int val;
        if (ops[i][0] == 'C') {
            if (top > 0) top--;
        } else if (ops[i][0] == 'D') {
            val = stk[top-1] * 2;
            stk[top++] = val;
            if (val > *allTimeMax) *allTimeMax = val;
        } else if (ops[i][0] == '+') {
            val = stk[top-1] + stk[top-2];
            stk[top++] = val;
            if (val > *allTimeMax) *allTimeMax = val;
        } else {
            sscanf(ops[i], "%d", &val);
            stk[top++] = val;
            if (val > *allTimeMax) *allTimeMax = val;
        }
    }
    *total = 0;
    for (int i = 0; i < top; i++) *total += stk[i];
}

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

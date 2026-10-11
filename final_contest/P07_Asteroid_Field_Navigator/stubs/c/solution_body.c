int stkArr[100005];

void asteroidStation(int* asteroids, int n, long long T,
                     int* survivors, int* count, int* alarm) {
    int top = 0;
    for (int i = 0; i < n; i++) {
        int a = asteroids[i];
        int alive = 1;
        while (alive && a < 0 && top > 0 && stkArr[top - 1] > 0) {
            if (stkArr[top - 1] < -a)       top--;
            else if (stkArr[top - 1] == -a) { top--; alive = 0; }
            else                             alive = 0;
        }
        if (alive) stkArr[top++] = a;
    }
    *count = top;
    for (int i = 0; i < top; i++) survivors[i] = stkArr[i];
    long long sum = 0;
    for (int i = 0; i < top; i++) sum += stkArr[i] < 0 ? -stkArr[i] : stkArr[i];
    *alarm = sum > T ? 1 : 0;
}

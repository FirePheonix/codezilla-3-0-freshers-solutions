#include <stdio.h>

/* Frequency array for spice types (types are 1..10000) */
#define MAX_TYPE 10001
static int freq[MAX_TYPE];
static int distinctCount;

static void freqClear() {
    int i; for (i = 0; i < MAX_TYPE; i++) freq[i] = 0;
    distinctCount = 0;
}
static void freqAdd(int type) {
    if (freq[type] == 0) distinctCount++;
    freq[type]++;
}
static void freqRemove(int type) {
    freq[type]--;
    if (freq[type] == 0) distinctCount--;
}

int spiceMarketStalls(int* stalls, int n, int k);

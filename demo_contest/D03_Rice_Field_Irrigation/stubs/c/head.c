#include <stdio.h>

/* ---- hash map: maps prefix_sum -> count ---- */
#define HSIZ 400007
static long long hkeys[HSIZ];
static int hvals[HSIZ], hused[HSIZ];

static void hclear() {
    int i; for (i = 0; i < HSIZ; i++) hused[i] = 0;
}
static int hget(long long key) {
    int h = (int)((key % HSIZ + HSIZ) % HSIZ);
    while (hused[h]) {
        if (hkeys[h] == key) return hvals[h];
        h = (h + 1) % HSIZ;
    }
    return 0;
}
static void hset(long long key, int val) {
    int h = (int)((key % HSIZ + HSIZ) % HSIZ);
    while (hused[h] && hkeys[h] != key) h = (h + 1) % HSIZ;
    hkeys[h] = key; hvals[h] = val; hused[h] = 1;
}
static void hincr(long long key) {
    int h = (int)((key % HSIZ + HSIZ) % HSIZ);
    while (hused[h] && hkeys[h] != key) h = (h + 1) % HSIZ;
    hkeys[h] = key; hvals[h]++; hused[h] = 1;
}
/* ----------------------------------------------- */

int riceFieldIrrigation(int* water, int n, int k);

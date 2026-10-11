#include <stdio.h>
#include <string.h>

/* direct-address set: seen[v] = 1 means value v has already appeared */
static int seen[100001];

int chaiStallCounter(int* arr, int n);

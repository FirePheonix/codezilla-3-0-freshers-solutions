/* sort tasks by end time using a simple bubble sort */
int taskStart[100005], taskEnd[100005];

int maxFestivalTasks(long long C, int* starts, int* ends, int n) {
    int i, j;
    for (i = 0; i < n; i++) { taskStart[i] = starts[i]; taskEnd[i] = ends[i]; }

    /* bubble sort by end time */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (taskEnd[j] > taskEnd[j + 1]) {
                int ts = taskStart[j]; taskStart[j] = taskStart[j+1]; taskStart[j+1] = ts;
                int te = taskEnd[j];   taskEnd[j]   = taskEnd[j+1];   taskEnd[j+1]   = te;
            }
        }
    }

    int count = 0;
    long long lastEnd = -4000000000LL;
    for (i = 0; i < n; i++) {
        if ((long long)taskStart[i] >= lastEnd + C + 1) {
            count++;
            lastEnd = taskEnd[i];
        }
    }
    return count;
}

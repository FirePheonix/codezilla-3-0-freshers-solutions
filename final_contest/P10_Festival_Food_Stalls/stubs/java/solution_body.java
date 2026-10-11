    static int maxFestivalTasks(long C, int[] starts, int[] ends) {
        int n = starts.length;
        Integer[] idx = new Integer[n];
        for (int i = 0; i < n; i++) idx[i] = i;
        Arrays.sort(idx, (a, b) -> ends[a] - ends[b]);
        int count = 0;
        long lastEnd = Long.MIN_VALUE / 2;
        for (int i : idx) {
            if ((long)starts[i] >= lastEnd + C + 1) {
                count++;
                lastEnd = ends[i];
            }
        }
        return count;
    }

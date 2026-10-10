    static String[] marbleCollection(int[] arr, int K) {
        int j = 0, n = arr.length;
        for (int i = 0; i < n; i++)
            if (i == 0 || arr[i] != arr[i-1]) arr[j++] = arr[i];
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < j; i++) {
            if (i > 0) sb.append(' ');
            sb.append(arr[i]);
        }
        int lo = 0, hi = j - 1, count = 0;
        while (lo < hi) {
            long s = (long)arr[lo] + arr[hi];
            if (s == K) { count++; lo++; hi--; }
            else if (s < K) lo++;
            else hi--;
        }
        return new String[]{sb.toString(), String.valueOf(count)};
    }

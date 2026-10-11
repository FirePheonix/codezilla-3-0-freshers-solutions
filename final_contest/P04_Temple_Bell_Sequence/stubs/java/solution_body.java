    static long templeBellPower(int[] r) {
        int n = r.length;
        long[] prefix = new long[n+1];
        for (int i = 0; i < n; i++) prefix[i+1] = prefix[i] + r[i];
        int[] nge = new int[n];
        java.util.Arrays.fill(nge, n);
        int[] stk = new int[n];
        int top = 0;
        for (int i = n-1; i >= 0; i--) {
            while (top > 0 && r[stk[top-1]] < r[i]) top--;
            if (top > 0) nge[i] = stk[top-1];
            stk[top++] = i;
        }
        long total = 0;
        for (int i = 0; i < n; i++) {
            int left = i + 1, right = nge[i];
            if (left < right) total += prefix[right] - prefix[left];
        }
        return total;
    }

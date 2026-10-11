    static String[] diwaliLights(int[] b) {
        int n = b.length;
        long total = 0;
        for (int x : b) total += x;
        int pivot = -1;
        long leftSum = 0;
        for (int i = 0; i < n; i++) {
            long rightSum = total - leftSum - b[i];
            if (leftSum == rightSum) { pivot = i; break; }
            leftSum += b[i];
        }
        boolean palin = true;
        int l = 0, r = n - 1;
        while (l < r) {
            if (b[l] != b[r]) { palin = false; break; }
            l++; r--;
        }
        return new String[]{String.valueOf(pivot), palin ? "YES" : "NO"};
    }

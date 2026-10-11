    static String[] chaiStallCounter(int[] arr) {
        int n = arr.length, j = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] != 0) { int t = arr[j]; arr[j] = arr[i]; arr[i] = t; j++; }
        int nonZero = j;
        while (j < n) arr[j++] = 0;
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            if (i > 0) sb.append(' ');
            sb.append(arr[i]);
        }
        Set<Integer> seen = new HashSet<>();
        boolean dup = false;
        for (int i = 0; i < nonZero; i++) {
            if (!seen.add(arr[i])) { dup = true; break; }
        }
        return new String[]{sb.toString(), dup ? "YES" : "NO"};
    }

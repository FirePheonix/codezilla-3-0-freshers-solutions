    static int longestBalancedStretch(int[] arr) {
        Map<Long, Integer> prefMap = new HashMap<>();
        prefMap.put(0L, -1);
        long prefSum = 0;
        int maxLen = 0;
        for (int i = 0; i < arr.length; i++) {
            prefSum += arr[i];
            if (prefMap.containsKey(prefSum))
                maxLen = Math.max(maxLen, i - prefMap.get(prefSum));
            else
                prefMap.put(prefSum, i);
        }
        return maxLen;
    }

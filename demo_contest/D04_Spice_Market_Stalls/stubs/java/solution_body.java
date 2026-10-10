    static int spiceMarketStalls(int[] stalls, int k) {
        Map<Integer, Integer> freq = new HashMap<>();
        int left = 0, maxLen = 0;
        for (int right = 0; right < stalls.length; right++) {
            freq.put(stalls[right], freq.getOrDefault(stalls[right], 0) + 1);
            while (freq.size() > k) {
                int lv = stalls[left];
                freq.put(lv, freq.get(lv) - 1);
                if (freq.get(lv) == 0) freq.remove(lv);
                left++;
            }
            maxLen = Math.max(maxLen, right - left + 1);
        }
        return maxLen;
    }

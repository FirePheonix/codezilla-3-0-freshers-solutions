    static int riceFieldIrrigation(int[] water, int k) {
        Map<Long, Integer> prefCount = new HashMap<>();
        prefCount.put(0L, 1);
        long psum = 0;
        int count = 0;
        for (int x : water) {
            psum += x;
            count += prefCount.getOrDefault(psum - k, 0);
            prefCount.put(psum, prefCount.getOrDefault(psum, 0) + 1);
        }
        return count;
    }

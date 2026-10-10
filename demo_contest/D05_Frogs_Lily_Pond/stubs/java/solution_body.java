    static String[] frogsLilyPond(int[] pads) {
        int n = pads.length;
        if (n == 1) return new String[]{"YES", "0"};

        int maxReach = 0;
        for (int i = 0; i < n - 1; i++) {
            if (i > maxReach) return new String[]{"NO", "-1"};
            maxReach = Math.max(maxReach, i + pads[i]);
            if (maxReach >= n - 1) break;
        }
        if (maxReach < n - 1) return new String[]{"NO", "-1"};

        int jumps = 0, curEnd = 0, farthest = 0;
        for (int i = 0; i < n - 1; i++) {
            farthest = Math.max(farthest, i + pads[i]);
            if (i == curEnd) {
                jumps++;
                curEnd = farthest;
                if (curEnd >= n - 1) break;
            }
        }
        return new String[]{"YES", String.valueOf(jumps)};
    }

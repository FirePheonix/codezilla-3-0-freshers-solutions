    static String[] asteroidStation(int[] asteroids, long T) {
        Deque<Integer> st = new ArrayDeque<>();
        for (int a : asteroids) {
            boolean alive = true;
            while (alive && a < 0 && !st.isEmpty() && st.peek() > 0) {
                if (st.peek() < -a) { st.pop(); }
                else if (st.peek() == -a) { st.pop(); alive = false; }
                else { alive = false; }
            }
            if (alive) st.push(a);
        }
        int[] surv = new int[st.size()];
        int idx = st.size() - 1;
        while (!st.isEmpty()) surv[idx--] = st.pop();
        String s;
        if (surv.length == 0) s = "EMPTY";
        else {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < surv.length; i++) {
                if (i > 0) sb.append(" ");
                sb.append(surv[i]);
            }
            s = sb.toString();
        }
        long sum = 0;
        for (int x : surv) sum += Math.abs(x);
        return new String[]{s, sum > T ? "YES" : "NO"};
    }

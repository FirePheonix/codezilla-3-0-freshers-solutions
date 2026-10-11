    static long[] templeOfferings(long[] val, int[] edgeU, int[] edgeV) {
        int n = val.length - 1;
        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i <= n; i++) adj.add(new ArrayList<>());
        for (int i = 0; i < n - 1; i++) {
            adj.get(edgeU[i]).add(edgeV[i]);
            adj.get(edgeV[i]).add(edgeU[i]);
        }
        Queue<Integer> queue = new LinkedList<>();
        boolean[] visited = new boolean[n + 1];
        queue.add(1); visited[1] = true;
        long bestSum = Long.MIN_VALUE, bestLevel = 0, level = 0;
        while (!queue.isEmpty()) {
            int sz = queue.size();
            long levelSum = 0;
            for (int i = 0; i < sz; i++) {
                int node = queue.poll();
                levelSum += val[node];
                for (int nb : adj.get(node)) {
                    if (!visited[nb]) { visited[nb] = true; queue.add(nb); }
                }
            }
            if (levelSum > bestSum) { bestSum = levelSum; bestLevel = level; }
            level++;
        }
        return new long[]{bestLevel, bestSum};
    }

    static int[] cricketScoreboard(String[] ops) {
        java.util.Deque<Integer> stk = new java.util.ArrayDeque<>();
        int allTimeMax = Integer.MIN_VALUE;
        for (String op : ops) {
            if (op.equals("C")) {
                if (!stk.isEmpty()) stk.pop();
            } else if (op.equals("D")) {
                int val = stk.peek() * 2;
                stk.push(val);
                allTimeMax = Math.max(allTimeMax, val);
            } else if (op.equals("+")) {
                int top1 = stk.pop();
                int val = top1 + stk.peek();
                stk.push(top1);
                stk.push(val);
                allTimeMax = Math.max(allTimeMax, val);
            } else {
                int val = Integer.parseInt(op);
                stk.push(val);
                allTimeMax = Math.max(allTimeMax, val);
            }
        }
        int total = 0;
        for (int x : stk) total += x;
        return new int[]{total, allTimeMax};
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        long[] arrival = new long[n];
        int[] service = new int[n];
        for (int i = 0; i < n; i++) arrival[i] = sc.nextLong();
        for (int i = 0; i < n; i++) service[i] = sc.nextInt();
        System.out.println(minCongestion(k, arrival, service));
    }
}
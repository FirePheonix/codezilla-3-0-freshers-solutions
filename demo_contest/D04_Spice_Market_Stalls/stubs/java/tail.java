    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] stalls = new int[n];
        for (int i = 0; i < n; i++) stalls[i] = sc.nextInt();
        System.out.println(spiceMarketStalls(stalls, k));
    }
}

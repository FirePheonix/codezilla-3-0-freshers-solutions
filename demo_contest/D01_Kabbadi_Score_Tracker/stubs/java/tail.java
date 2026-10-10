    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] scores = new int[n];
        for (int i = 0; i < n; i++) scores[i] = sc.nextInt();
        long[] res = kabbadiTracker(scores, k);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}

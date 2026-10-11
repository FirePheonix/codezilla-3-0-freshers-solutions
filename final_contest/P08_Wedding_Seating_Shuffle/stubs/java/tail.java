    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] val = new long[n + 1];
        for (int i = 1; i <= n; i++) val[i] = sc.nextLong();
        int[] edgeU = new int[n - 1], edgeV = new int[n - 1];
        for (int i = 0; i < n - 1; i++) { edgeU[i] = sc.nextInt(); edgeV[i] = sc.nextInt(); }
        long[] res = templeOfferings(val, edgeU, edgeV);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
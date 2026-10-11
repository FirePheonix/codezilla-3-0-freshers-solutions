    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        String[] res = chaiStallCounter(arr);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
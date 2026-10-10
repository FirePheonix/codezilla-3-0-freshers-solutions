    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), K = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        String[] res = marbleCollection(arr, K);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] water = new int[n];
        for (int i = 0; i < n; i++) water[i] = sc.nextInt();
        System.out.println(riceFieldIrrigation(water, k));
    }
}

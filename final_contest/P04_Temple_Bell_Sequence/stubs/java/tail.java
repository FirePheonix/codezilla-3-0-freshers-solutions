    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] r = new int[n];
        for (int i = 0; i < n; i++) r[i] = sc.nextInt();
        System.out.println(templeBellPower(r));
    }
}
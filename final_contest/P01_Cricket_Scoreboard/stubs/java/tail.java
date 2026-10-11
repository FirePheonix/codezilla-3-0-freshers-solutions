    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        String[] ops = new String[n];
        for (int i = 0; i < n; i++) ops[i] = sc.nextLine().trim();
        int[] res = cricketScoreboard(ops);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
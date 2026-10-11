    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); long C = sc.nextLong();
        int[] starts = new int[n], ends = new int[n];
        for (int i = 0; i < n; i++) { starts[i] = sc.nextInt(); ends[i] = sc.nextInt(); }
        System.out.println(maxFestivalTasks(C, starts, ends));
    }
}
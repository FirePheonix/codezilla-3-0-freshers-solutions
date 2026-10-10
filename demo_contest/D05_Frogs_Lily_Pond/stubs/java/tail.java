    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] pads = new int[n];
        for (int i = 0; i < n; i++) pads[i] = sc.nextInt();
        String[] res = frogsLilyPond(pads);
        for (String s : res) System.out.println(s);
    }
}

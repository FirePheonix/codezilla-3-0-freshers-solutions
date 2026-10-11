vector<string> asteroidStation(vector<int> asteroids, long long T) {
    stack<int> st;
    for (int a : asteroids) {
        bool alive = true;
        while (alive && a < 0 && !st.empty() && st.top() > 0) {
            if (st.top() < -a) { st.pop(); }
            else if (st.top() == -a) { st.pop(); alive = false; }
            else { alive = false; }
        }
        if (alive) st.push(a);
    }
    vector<int> surv;
    while (!st.empty()) { surv.push_back(st.top()); st.pop(); }
    reverse(surv.begin(), surv.end());
    string s;
    if (surv.empty()) s = "EMPTY";
    else {
        for (int i = 0; i < (int)surv.size(); i++) {
            if (i) s += " ";
            s += to_string(surv[i]);
        }
    }
    long long sum = 0;
    for (int x : surv) sum += abs(x);
    return {s, sum > T ? "YES" : "NO"};
}

class Program {
    void f(int n, int f, int t, int e) {
        if(n == 1) {
            callout("printf", "Move disk 1 from rod %d to rod %d", f, t);
            return; 
        }
        f(n - 1, f, e, t);
        f(n - 1, e, t, f);
    }
    int main() {
        int n;
        n = read();
        f(n, 1, 3, 2);
        return 0;
    }
};

#define MAX_N 20
#define MAX_W 10000

#define EMPTY_VALUE -1

int C[MAX_N];
int mem[MAX_N][MAX_W];
int n;
int f(int i, int W) {
    if (W == 0) return 1;
    if (i == n + 1) return 0;
    
    if (mem[i][W] != EMPTY_VALUE) {
        return mem[i][W];
    }
    
    int way_1 = f(i + 1, W);
    int way_2 = f(i + 1, W - C[i]);
    
    mem[i][W] = way_1 + way_2;
    return mem[i][W];
}

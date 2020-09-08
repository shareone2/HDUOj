#include <stdio.h>
#include <math.h>

double ans(double x) { return 8 * pow(x, 4) + 7 * pow(x, 3) + 2 * pow(x, 2) + 3 * x + 6;  }

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        double y, l = 0, r = 100;
        scanf("%lf", &y);
        if (6 > y || 807020306 < y) { 
            printf("No solution!\n");
        } else {
            for (double mid; r - l > 1e-10; (ans(mid) <= y && (l = mid )) || (r = mid)) { 
                mid = (l + r) / 2; 
            }
            printf("%.4lf\n", l);
        }
    }  
    return 0;
}
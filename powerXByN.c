#include <stdio.h>

double powerXByN (double num_init, int n){
    double x = num_init;
    if (n > 1) {
       while (n > 1) {
            x *= num_init;
            --n;
        }
    } else if (n < -1) {
        while (n < -1) {
            x = 1 / (x * num_init);
            ++n;
        }
    } else {
        switch(n) {
            case 0:
                x = 1;
                break;
            case 1:
                x = num_init;
                break;
            case -1:
                x = 1 / num_init;
                break;
        }
    }
    return x;
}

int main() {
    double num_init;
    int n;
    printf("Please enter a number you would like to power by n: ");
    scanf ("%lf", &num_init);

    printf ("Please enter an integer n: ");
    scanf ("%d", &n);

    printf ("x = %.5lf, n = %d\n", num_init, n);
    printf ("x^n = %.5lf", powerXByN (num_init, n));

    return 0;
}







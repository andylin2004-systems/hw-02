#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
    int unsignedMaxIntAndIntMaxAsInt = INT_MAX + UINT_MAX;
    unsigned int unsignedMaxandIntMaxButUnsigned = INT_MAX + UINT_MAX;
    long unsignedMaxLongAndLongMaxAsLong = LONG_MAX + ULONG_MAX;
    unsigned long unsignedMaxLongAndLongMaxAsUnsignedLong = LONG_MAX + ULONG_MAX;
    printf("Max unsigned int plus max int as an int equals %d\n", unsignedMaxIntAndIntMaxAsInt);
    printf("Max unsigned int plus max int as an unsigned int equals %i\n", unsignedMaxandIntMaxButUnsigned);
    printf("Max unsigned long plus max long as an long equals %ld\n", unsignedMaxLongAndLongMaxAsLong);
    printf("Max unsigned long plus max long as an unsigned long equals %lu\n", unsignedMaxLongAndLongMaxAsUnsignedLong);
    printf("this aint cooked enough lets ramp this up a bit\n");
    printf("Max unsigned int plus max int plus nice number as an int equals %d\n", unsignedMaxIntAndIntMaxAsInt + 69);
    unsigned int niceBoi = INT_MAX + UINT_MAX + 420;
    unsignedMaxandIntMaxButUnsigned = niceBoi;
    printf("Max unsigned int plus max int plus another nice number as an unsigned int equals %i\n", unsignedMaxandIntMaxButUnsigned);
    printf("Max unsigned long plus max long plus the year we hated the most as an long equals %ld\n", unsignedMaxLongAndLongMaxAsLong + 2020);
    unsignedMaxLongAndLongMaxAsUnsignedLong = LONG_MAX + ULONG_MAX + 7397l;
    printf("Max unsigned long plus max long plus my m1's geekbench score (7397) as an unsigned long equals %lu\n", unsignedMaxLongAndLongMaxAsUnsignedLong);
    printf("Pi to 3 sig figs is %0.3f\n", M_PI);
    printf("Pi to 4 sig figs is %0.4f\n", M_PI);
    printf("Pi to 5 sig figs is %0.5f\n", M_PI);
    return 0;
}
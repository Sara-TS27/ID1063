//code by Sara
//Date: 7/10/26
#include <stdio.h>

int main() {
    int a = 2; // binary: 0010 (non-zero / true)
    int b = 4; // binary: 0100 (non-zero / true)

    // logical AND wil compare boolien truths meaning it will cosider the 4 bits as a single number and then compaer
    //here  both 'a' and 'b' are non-zero, so result is 1
    printf("a && b = %d\n", a && b); 

    // BITWISE AND (&) will compares individual bits
    // 0010 (2) & 0100 (4) = 0000 (0)
    printf("a & b  = %d\n", a & b); 

    // 3. SHORT-CIRCUIT: && stops if the first term is false (0)
    int x = 0;
    
    // (x && ++a) -> x is 0, so '++a' NEVER runs. 'a' remains 2.
    if (x && ++a) { }
    printf("a after && = %d\n", a); // prints 2

    // (x & ++a) -> & MUST run both sides. '++a' DOES run. 'a' becomes 3.
    if (x & ++a) { }
    printf("a after &  = %d\n", a); // prints 3

    return 0;
}


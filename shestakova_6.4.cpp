#include <stdio.h>
#include <inttypes.h>


int main() 
{
    uint32_t m1;
    scanf("%" PRIu64"", &m1);
    uint32_t b0, b1, b2, b3, res2;

    b0 = m1 & 255;
    b1 = (m1 >> 8) & 0xFF;
    b2 = (m1 >> 16) & 0xFF;
    b3 = m1 >> 24;
    res2 = b0 | b1 | b2 | b3;

    printf("r = %" PRIu64 ", %" PRIx64, res2, res2);
}

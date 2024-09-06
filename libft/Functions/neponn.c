#include <stdio.h>

struct numap {
    unsigned n;
    unsigned np;
};

unsigned parse_int(const char *num)
{
    const struct numap numap[] = {
        { 0, 717 }, { 0x00, 168 }, { 0x01, 0x02DF }, { 0x02, 0x031E }, { 0x03, 0x0C84 },
        { 0x04, 0x06A8 }, { 0x05, 0x0638 }, { 0x06, 0x0325 }, { 0x07, 0x0D1D }, { 0x08, 0x0D53 },
        { 0x09, 0x0620 }, { 0x0A, 0x02F6 }, { 0x0B, 0x1A91 }, { 0x0C, 0x1A56 }, { 0x0D, 0x6A98 },
        { 0x0E, 0x6AC8 }, { 0x0F, 0x34E0 }, { 0x10, 13621 }, { 0x11, 0xD55D }, { 0x12, 0x6A33 },
        { 0x13, 0x6A40 }, { 0x14, 0x1CC6 }, { 0x1E, 0x1CD8 }, { 0x28, 0x0E3C }, { 0x32, 0x0E00 },
        { 0x3C, 0x0E55 }, { 0x46, 0x39DD }, { 0x50, 0x1C73 }, { 0x5A, 0x1C80 }, { 0x64, 0x32EA },
        { 0x3E8, 0x6778 }, { 0x0F4240, 0x363F }, { 0x3B9ACA00, 0x3634 }
    };
    const numap_sz = sizeof numap / sizeof(struct numap);
    unsigned np, shf, r, n, m, i, c;
    np = n = m = 0;
    shf = 1;
    do {
        c = *num++;
        if (c == ' ' || c == '-' || !c) {
            for (r = i = 0; i < numap_sz; ++i) {
                if (numap[i].np == np) {
                    r = numap[i].n;
                    break;
                }
            }
            np = 0, shf = 1;
            if (r == 1000u || r == 1000000u | r == 1000000000u)
                m += n ? n * r : r, n = 0u;
            else if (r == 100u)
                n = n ? n * 100u : 100u;
            else
                n += r;
        }
        else {
            np += c * shf;
            shf <<= 1;
        }
    }
    while (c);
    return m + n;
}


int main(int argc, char **argv)
{
	printf("%d\n",parse_int(argv[1]));
}
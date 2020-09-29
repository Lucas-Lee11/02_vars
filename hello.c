#include <stdio.h>

int main(int argc, char const *argv[]) {

    char a[] = "Hello World\n";
    char (*ptr)[sizeof(a)] = &a;
    int f;
    unsigned char c = '0';
    unsigned long d;


    printf("%d\n",f);
    printf("%s", *ptr);
    printf("%lf %d\n", d, f);

    return 0;
}

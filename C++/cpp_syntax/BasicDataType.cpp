/* Format Specifiers
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

    scanf("`format_specifier`", &val)

    char ch;
    double d;
    scanf("%c %lf", &ch, &d);

    printf("`format_specifier`", val)
    char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d);
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",c);
    printf("%.3f\n",d);
    printf("%.9lf\n",e);
    return 0;
}




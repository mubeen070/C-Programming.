#include <stdio.h>

int main()
{

    char a;
    short s;
    int i;
    double d;
    long l;
    long long ll;
    long double ld;
    int array[10];
    int *ptr = array;

    printf(" Size of a = %u \t   Size of char = %u "
           "\n Size of s = %u \t   Size of short = %u"
           "\n Size of i = %u \t   Size of int = %u"
           "\n Size of d = %u \t   Size of double = %u"
           "\n Size of l = %u \t   Size of long = %u"
           "\n Size of ll = %u \t   Size of long long = %u"
           "\n Size of ld = %u \t   Size of long double = %u"
           "\n Size of array = %u \t   Size of *ptr = %u",
           sizeof a, sizeof(char), sizeof s, sizeof(short), sizeof i, sizeof(int), sizeof d,
           sizeof(double), sizeof l, sizeof(long), sizeof ll, sizeof(long long), sizeof ld, sizeof(long double), sizeof array, sizeof ptr);
}
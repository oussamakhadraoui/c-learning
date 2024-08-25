#include <bits/stdc++.h>
#include <vector>
using namespace std;
int pgcd(int a, int b)
{
    if (b == 0)
        return a;
    return pgcd(b, a % b);
}
int ppcm(int a, int b)
{
    return (a / pgcd(a, b)) * b;
}
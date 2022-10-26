#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
int i;
int m[4]={a, b, c, d};
 int max =m[0];

for (i=0;i<=2;i++)
{
if (m[i+1]>max)
    max=m[i+1];
 }
return max;
}

int main()
 {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


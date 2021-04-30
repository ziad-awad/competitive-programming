#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int max[]={a,b,c,d};
    int m = a;
    for(int i = 1 ; i < 4 ;i++)
    {
        if(m < max[i])
        {
            m = max[i];
        }
    }
    return m ;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

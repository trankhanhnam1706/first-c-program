#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b, int c,int d){
   scanf("%d %d %d %d", &a, &b, &c, &d);
   int n;
    if (a>=b and a>=c and a>=d) {n=a;}
    if (b>=a and b>=c and b>=d) {n=b;}
    if (c>=b and c>=a and c>=d) {n=c;}
    if (d>=b and d>=c and d>=a) {n=d;}
    return n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
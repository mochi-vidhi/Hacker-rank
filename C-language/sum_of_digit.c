#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i=1,sum=0;
    scanf("%d", &n);
    
    while(n>0){
        int a = n%10;
        sum = sum + a;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}
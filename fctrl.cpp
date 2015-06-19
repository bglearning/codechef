/**
 * Factorial
 **/

#include<iostream>
#include<cstdio>
#include<cmath>


int main(){

        int t;

        scanf("%d",&t);

        for(int i=0;i<t;i++){
                int n;
                scanf("%d",&n);
                int val = 0;

                int p = 1;
                while( pow(5,p) <= n){
                        val += n/pow(5,p);
                        p++;
                }
                printf("%d\n",val);
        }

        return 0;
}

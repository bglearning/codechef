/**
 * Enormous input test
 **/

/* Note: ----------------------------------------
 * By default, cin/cout waste time synchronizing themselves with 
 * the C library's stdio buffers so that you can freely intermix 
 * calls to scanf/printf with operations on cin/cout
 * Turn it off for faster cin/cout
 *      std::ios_base::sync_with_stdio(false);
 *  Also, cout<<endl is slower than cout<<'\n' because it also
 *  flushes
 * ----------------------------------------------
 */

#include<cstdio>

int main(){

        int n,k,t;
        scanf("%d %d",&n,&k);
        int cnt = 0;

        for(int i=0;i<n;i++){

                scanf("%d",&t);

                if(t%k == 0){
                        cnt++;
                }

        }

        printf("%d",cnt);

        return 0;
}

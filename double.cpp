/**
 *  Double string
 **/

#include<iostream>

int main(){
        //Turn of sync with c standard library
        std::ios_base::sync_with_stdio(false);
        int t;
        std::cin>>t;
        for( int i=0 ; i<t ; i++ ){
                int n;
                std::cin>>n;
                if(n%2==0){
                        std::cout<< n <<'\n';
                }else{
                        std::cout << (n-1) <<'\n';
                }
        }

        return 0;
}

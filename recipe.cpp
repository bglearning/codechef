/*
 * Cutting Recipes
 */

#include<iostream>
#include<vector>
#include<algorithm>

int gcd(int l, int s){

        while( s>0 ){
                int temp = s;
                s = l%s;
                l = temp;
        }

        return l;
}


int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0; i<t ; ++i){

                int n;
                std::cin>>n;
                std::vector<int> iq;

                for(int j=0 ;j<n ; ++j){

                        int data;
                        std::cin>>data;

                        iq.push_back(data);
                }

                std::vector<int> iqOrg(iq); //Store the original vector :for use in printing the output

                std::sort(iq.begin(),iq.end());

                int res = iq.back(); //Store the largest element in res

                for(int k = n-2; k>=0 ; --k){
                    res = gcd(res,iq[k]);
                }

                std::cout<<(iqOrg[0]/res);

                for(int k = 1 ; k<n ;++k){
                        std::cout<<' '<<(iqOrg[k]/res);
                }

                std::cout<<'\n';
        }


        return 0;
}


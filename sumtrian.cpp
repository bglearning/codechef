/*
 * Triangle sum
 */

#include<iostream>
#include<vector>

int main(){
        std::ios_base::sync_with_stdio(false);

        int tn;
        std::cin>>tn;

        for(int i = 0 ; i < tn ; ++i){
                int n;
                std::cin>>n;
                std::vector<int> numbers;

                int tot = (n * (n+1)) / 2;

                for(int j=0 ; j<tot ; ++j){
                        int a;
                        std::cin>>a;
                        numbers.push_back(a);
                }

                tot -= n;

                for(int j = n-1 ; j>=1 ; --j){
                        int bot = tot - j;
                        for(int k = j-1 ; k>=0 ; --k){
                                int n1 = numbers[tot+k];
                                int n2 = numbers[tot+k+1];
                                numbers[bot+k] += (n1>n2)?n1:n2;
                        }
                        tot-=j;
                }

                std::cout<<numbers[0]<<std::endl;

        }
        return 0;
}

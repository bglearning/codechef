/*
 * Triangle sum
 */

#include<iostream>
#include<vector>

int main(){
        int tn;
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


        }
        return 0;
}

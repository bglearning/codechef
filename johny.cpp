/*
 * Uncle Johny
 */

#include<iostream>
#include<vector>
#include<algorithm>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        while(t--){
                int n;
                std::cin>>n;
                std::vector<int> nums;
                for(int i=0;i<n;++i){
                        int data;
                        std::cin>>data;
                        nums.push_back(data);
                }

                int k;
                std::cin>>k;
                int theVal = nums[k-1];

                std::sort(nums.begin(),nums.end());

                int place = 0;
                for(;place<n;place++){
                        if(nums[place] == theVal){
                                break;
                        }
                }

                std::cout<<(place+1)<<'\n';

       }


        return 0;
}


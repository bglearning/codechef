#include<iostream>
#include<vector>
#include<algorithm>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;
        std::vector<int> nums;
        for(int i=0;i<t;i++){
           int data;
           std::cin>>data;
           nums.push_back(data);
        }

        std::sort(nums.begin(),nums.end());

        for(int i = 0 ; i<t ; ++i){
            std::cout<<nums[i]<<'\n';
        }

        return 0;
}


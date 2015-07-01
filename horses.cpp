/*
 * Racing horses
 */

#include<iostream>
#include<vector>
#include<algorithm>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;

        std::cin>>t;

        for(int i=0 ;i<t ;++i){
            int n;
            std::cin>>n;
            std::vector<int> skills;
            for(int j=0;j<n;++j){
                int data;
                std::cin>>data;
                skills.push_back(data);
            }

            std::sort(skills.begin(),skills.end());

            int min = skills[1] - skills[0];
            int len = skills.size();
            for(int j=0;j<len-1;++j){
                    int _min = skills[j+1] - skills[j];

                    if(_min < min){
                            min = _min;
                    }
            }
            std::cout<<min<<'\n';
        }

        return 0;
}


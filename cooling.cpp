/*
 * Cooling pies
 */

#include<iostream>
#include<vector>
#include<algorithm>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i =0 ;i<t ; ++i){

                std::vector<int> pies;
                std::vector<int> racks;

                int n;
                std::cin>>n;
                for(int j = 0; j<n ;++j){
                    int data; 
                    std::cin>>data;
                    pies.push_back(data);
                }

                for(int j = 0; j<n ;++j){
                    int data; 
                    std::cin>>data;
                    racks.push_back(data);
                }

                std::sort(pies.begin(),pies.end());
                std::sort(racks.begin(),racks.end());

                int cnt = 0;
                for(int j = 0; j<n ;++j){
                    // If there is a rack large enough to hold the pie
                    if(pies.back() <= racks.back() ){
                            cnt++;
                            racks.pop_back();
                    }

                    pies.pop_back(); //The pie is removed from the vector anyhow
                }

                std::cout<<cnt<<'\n';
        }

        return 0;
}


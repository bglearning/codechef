/**
 * Hole in the text
 **/

#include<iostream>
#include<map>
#include<string>

int main(){

        std::map<char,int> holeCnt;

        holeCnt['A'] = 1;
        holeCnt['B'] = 2;
        holeCnt['C'] = 0;
        holeCnt['D'] = 1;
        holeCnt['E'] = 0;
        holeCnt['F'] = 0;
        holeCnt['G'] = 0;
        holeCnt['H'] = 0;
        holeCnt['I'] = 0;
        holeCnt['J'] = 0;
        holeCnt['K'] = 0;
        holeCnt['L'] = 0;
        holeCnt['M'] = 0;
        holeCnt['N'] = 0;
        holeCnt['O'] = 1;
        holeCnt['P'] = 1;
        holeCnt['Q'] = 1;
        holeCnt['R'] = 1;
        holeCnt['S'] = 0;
        holeCnt['T'] = 0;
        holeCnt['U'] = 0;
        holeCnt['V'] = 0;
        holeCnt['W'] = 0;
        holeCnt['X'] = 0;
        holeCnt['Y'] = 0;
        holeCnt['Z'] = 0;

        int t;

        std::cin>>t;

        for(int i=0;i<t;i++){
                int val = 0;
                std::string str;
                std::cin>>str;
                for(int j=0;j<str.length();j++){
                        val += holeCnt[str[j]];
                }

                std::cout<<val<<'\n';
        }

        return 0;
}

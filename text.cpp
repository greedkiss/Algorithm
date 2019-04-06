#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main(){
        vector<string> strs = {"", "", ""};
        int l = strs.size();
        string str = strs[0];
        long num = 0, flag = 0;
        for(long j = 0;;j++){
           for(long i = 0; i< l-1; i++){
                if(strs[i][j] != strs[i+1][j]){
                    flag = 1;
                    break;
                }
            }
            num++;
            if(flag)
                break;
        }
        str.resize(num-1);
        cout<<str<<endl;
        return 0;
}

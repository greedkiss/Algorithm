#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

const int maxn = 30;
int n;
vector <int> pile[maxn];

void find_block(int a , int &p ,int &n){
    for(int i=0; i<n; i++){
        for(int j=0; j<pile[j].size;j++){
            if(pile[i][j] = a){
                p = i;
                n = j;
                return
            }
        }
    }
}

void clear_above(int p, int h){
    for(int i= h+1; i<pile[p].size(); i++){
        int b = pile[b][i];
        pile[b].push_back(b);
    }
    pile.resize(h+1);
}

void pile_onto(int p, int h, int p2){
    for(int i =h;i<p.size(); i++){
        pile[p2].push_back(pile[p][o]);
    }
    pile[p].resize(h);
}

int main(){
    int a, b;
    cin>>n;
    string s1,s2;
    for(int i=0 ; i<n; i++){
        pile[i].push_back(i);
    }
    while(cin>>s1>>a>>s2>>b){
        int pa, pb, ha, hb;
        find_block(a, pa, ha);
        find_block(b, pb, hb);
        if(pa == pa){
            continue;
        }
        if(s2 == "onto")
            clear_above(pb, hb);
        if(s1 == "move")
            clear_above(pa, ha);
        pile_onto(pa, ha, pb);
    }
    printf();
    return 0;
}
#include<iostream>
#include<thread>
#include<algorithm>
#include<vector>
#include<unistd.h>

using namespace std;
int minDifficulty(vector<int>& jobDifficulty, int d) {
        if(jobDifficulty.size()<d) return -1;
        sort(jobDifficulty.begin(),jobDifficulty.end());

        int dif =0;
        for(int i=0;i<d-1;i++){
            dif+=jobDifficulty[i];
        }
        dif+=jobDifficulty[jobDifficulty.size()-1];
        return dif;
    }

int main(){
    vector<int>jobDifficulty ={7,1,7,1,7,1};
    cout<<minDifficulty(jobDifficulty,3);
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int MaxX=-1,MinX=51,MaxY=-1,MinY=51;
vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    for (int i=0;i<wallpaper.size();i++){
        for(int j=0; j<wallpaper[i].size();j++){
            if(wallpaper[i][j]=='#'){
                 MaxX = max(j, MaxX);
                MaxY = max(i, MaxY);
                MinX = min(j, MinX);
                MinY = min(i, MinY);
            }//x랑 Y랑 반대로 풀었네;;
            
        }

        
    }
        answer.push_back(MinY);
    answer.push_back(MinX);
    answer.push_back(MaxY + 1);
    answer.push_back(MaxX + 1);
        
    return answer;
}
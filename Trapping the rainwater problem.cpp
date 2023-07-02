#include<bits/stdtr1c++.h>
using namespace std;

int rainWater(vector<int> &heights){
int n = heights.size();
vector<int> lMax(n);
vector<int> rMax(n);
//calculation lma=Max and rMax
lMax[0]=heights[0];
rMax[n-1] = heights[n - 1];
for(int i=0;i<n;i++){
    lMax[i]= max(heights[i],lMax[n-1]);
    rMax[n-i-1]= max(heights[n-i-1],rMax[n-1]);//optimization
}
// for(int i=n-2;i>=0;i--){
//     rMax[i] = max(heights[i],rMax[i+1]);
// }
int water =0;
for(int i=0;i<n;i++){
    water += min(lMax[i],rMax[i])-heights[i];
}
return water;
}

int main(){

}

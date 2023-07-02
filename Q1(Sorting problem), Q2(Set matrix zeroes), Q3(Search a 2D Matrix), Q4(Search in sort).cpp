//set-matrix-zeros
#include<bits/stdc++.h>
using namespace std;
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> ne=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        ne[k][j]=0;
                    }
                    for(int k=0;k<n;k++){
                        ne[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ne[i][j];
            }
        }
    };
int main(){
    return 0;
}

//search 2-d matrix
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target){
    int row = matrix.size()-1;
    if(row<0){
        return false;
    }
    int c = matrix[0].size()-1;
    int r=0;
    while(c>=0 && r<=row){
        if(target==matrix[r][c]){
            return true;
        }
        else if(target<matrix[r][c]){
            c--;
        }
        else if(target>matrix[r][c]){
            r++;
        }
    }
    return false;
};

int main(){
    return 0;
}

//sorting problems
#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums){
    int p0 = 0, p1 = 0,p2= nums.size()-1;
    while(p1<=p2)
    {
        switch(nums[p1]){
        case 0:
            swap(nums[p0],nums[p1]);
            p0++;
            p1++;
            break;
        case 1:
            p1++;
            break;
        case 2:
            swap(nums[p1],nums[p2]);
            p2--;
            break;
        }
    }
}

int main(){
    
    return 0;
}

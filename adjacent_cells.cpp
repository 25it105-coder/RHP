#include <iostream>
using namespace std;

int main()
{int rows,cols;
    cin>>rows;
    cin>>cols;
    int matrix[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    int r,c,sum;
    cin>>r>>c;
    int adj[8][2]={{-1,-1},{-1,0},{-1,1},{1,-1},{1,1},{1,-1},{1,0},{1,1}};
    
for(int k=0;k<8;k++){
        int row=r+adj[k][0],col=c+adj[k][1];
        if(row>=0 && col >=0 && row<rows && col<cols){
        sum += matrix[row][col];
        }
    }
    cout<<"Adjacent Cells Sum = "<<sum;
    return 0;
}
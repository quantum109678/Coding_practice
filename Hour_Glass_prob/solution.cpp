#include <iostream>
#include <limits.h>

using namespace std;


int main(){
    int arr[6][6];
    for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> arr[i][j];
       }
    }
    
    int cur_sum=INT_MIN;
    int max_i,max_j,sum;
    
    for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
            
           sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            
            if(sum>cur_sum){
                
                cur_sum=sum;

            }
        }
    }
    
    cout<<cur_sum;
    
    
    return 0;
}

#include <math.h>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n,q,last_ans=0;
    
    cin>>n>>q;
    
    int q_arr[q][3];
    
    for(int i=0;i<q;i++){
        
        for(int j=0;j<3;j++){
            
            cin>>q_arr[i][j];
        }
        
        
    }
    
    vector<vector<int> > seq(n);
    
    int key,x,y,seq_no,temp;
    
    
    for(int i=0;i<q;i++){
        
        key=q_arr[i][0];
            
       x=q_arr[i][1];
        
        y=q_arr[i][2];
        
        seq_no=((x^last_ans)%n);
        
        
        
        switch(key){
                
            case 1:seq[seq_no].push_back(y);
                break;
                
            case 2:temp=y%seq[seq_no].size();
                    last_ans=seq[seq_no][temp];
                    cout<<last_ans<<endl;
                break;
                
            default:return -1;
                    break;
                
        }
        
            
         
    }
    
    
    
    return 0;
}

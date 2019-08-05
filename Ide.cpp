using namespace std;
#include <iostream>
#include<vector>


// }

int main(){
    // vector<int> heap={4,2,3,1,5,6,7};
    // vector<int> heap2=heapify(heap);
    
    // for(int i=0;i<heap2.size();i++){
    //     cout<<heap2[i]<<'\n';
    // }
    
    vector<int> mainstack;
    vector<int> trackmax;
    
    int n;
    cin >> n;
    string s;
    cin>>s;
    if(s=="PUSH"){
        int x;
        cin>>x;
        mainstack.push_back(x);
    trackmax.push_back(x);
    }
    else{
        cout<<"First push an element"<<'\n';
        return 1;
    }
    
    
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            if(mainstack[mainstack.size()-1]<x){
                trackmax.push_back(x);
            }
            else{
                trackmax.push_back(trackmax[trackmax.size()-1]);
            }
            mainstack.push_back(x);
        }
        else if(s=="POP"){
            mainstack.pop_back();
            trackmax.pop_back();
        }
        else{
            cout<<trackmax[trackmax.size()-1]<<'\n';
        }
        
    }
    return 0;
}

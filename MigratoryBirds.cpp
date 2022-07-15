int migratoryBirds(vector<int> arr) {
    vector<int> ans(6,0);
    for(int i=0;i<arr.size();i++){
        ans[arr[i]]+=1;
    }
    int max=0,res=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>max){
            max=ans[i];
            res=i;
        }
        else if(ans[i]==max){
        
        res=min(res,i);
        }
    }
    return res;
    
}

int LIS(vector<int> &a)
{
    set<int>lis;
    forAuto(i,a)
    {
        auto it=lis.lower_bound(i);
        if(it!=lis.end()) lis.erase(*it);
        lis.insert(i);
    }
    
    return lis.size();
    
}
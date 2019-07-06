bool Solution::hotel(vector<int> &arrival, vector<int> &departure, int K) {
    int x = 1;  
    int n=arrival.size();
   vector<pair<int, int> > ans; 
    for (int i = 0; i < n; i++) { 
        ans.push_back(make_pair(arrival[i], 1)); 
        ans.push_back(make_pair(departure[i], 0)); 
    } 
  
    sort(ans.begin(), ans.end()); 
  
    int curr_active = 0, max_active = 0; 
  
    for (int i = 0; i < ans.size(); i++) { 
        if (ans[i].second == 1) { 
            curr_active++; 
            max_active = max(max_active, 
                             curr_active); 
        } 
        else
            curr_active--; 
    } 
    return (K >= max_active); 
}

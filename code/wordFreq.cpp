#include <bits/stdc++.h> 
using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
    return a.second > b.second;
}

void sortMap(map<string, int> &m)
{
    vector<pair<string, int>> v;
    for (auto& i : m) 
        v.push_back(i);
    
    sort(v.begin(), v.end(), compare);
    
    cout<<"{\n"; 
    for (auto& i : v)
        cout <<"  '"<<i.first<<"'" <<": "<< i.second<<"\n";
    
    cout<<"}";
    
    
}
int main() 
{ 
    string s;
    getline(cin, s);
    
    map<string, int> m;
    string w="";
    
    for(int i=0; i<s.size(); i++){
        
        if(s[i]==' ')
        {
            if (m.find(w) == m.end()) 
            {
                m.insert(make_pair(w, 1));
                w = "";
            }
            else 
            {
                m[w]++;
                w = "";
            }
        }
        else
            w += s[i];
    }
    
    if (m.find(w) == m.end())
        m.insert(make_pair(w, 1));
    else
        m[w]++;
        
    sortMap(m);
    
} 
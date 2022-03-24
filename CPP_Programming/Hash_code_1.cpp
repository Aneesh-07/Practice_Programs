#include <bits/stdc++.h>
using namespace std;
int check(set<string> vec, vector<vector<string>> likes, vector<vector<string>> dislikes)
{
    int c = 0;
    for (int i = 0; i < likes.size(); i++)
    {
        bool flag = true;
        for (auto j : likes[i])
        {
            if (vec.find(j) == vec.end())
            {
                flag = false;
                break;
            }
        }
        for (auto j : dislikes[i])
        {
            if (vec.find(j) != vec.end())
            {
                flag = false;
                break;
            }
        }
        if (flag)
            c++;
    }
    return c;
}

void func(vector<string> vec, int i, vector<string> v, vector<vector<string>> likes, vector<vector<string>> dislikes)
{
    if (i == vec.size())
    {
        set<string> s(v.begin(), v.end());
        for(auto i: v)
        cout<<i<<" ";
        cout << check(s, likes, dislikes) << endl;
        return;
    }
    v.push_back(vec[i]);
    func(vec, i + 1, v, likes, dislikes);
    v.pop_back();
    func(vec, i + 1, v, likes, dislikes);
}
int main()
{
    int t, a, b;
    cin >> t;
    vector<string> v;
    vector<vector<string>> likes, dislikes;
    set<string> st;
    while (t--)
    {
        string s;
        cin >> a;
        vector<string> l, d;
        while (a--)
        {
            cin >> s;
            st.insert(s);
            l.push_back(s);
        }
        cin >> b;
        while (b--)
        {
            cin >> s;
            st.insert(s);
            d.push_back(s);
        }
        likes.push_back(l);
        dislikes.push_back(d);
    }
    vector<string> vec(st.begin(), st.end());
    func(vec, 0, v, likes, dislikes);
    return 0;
}
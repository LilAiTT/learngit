#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cmath>
#include <cstring>

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <string>

#define UP(i,x,y) for(int i = x; i <= y; i++ )
#define DOWN(i,x,y) for(int i = x; i >=y; i-- )

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpar(res, "", n, 0);
        return res;
    }
    void addingpar(vector<string> &v, string str, int n, int m){
        if(n==0 && m==0) {
            v.push_back(str);
            return;
        }
        if(m > 0){ addingpar(v, str+")", n, m-1); }
        if(n > 0){ addingpar(v, str+"(", n-1, m+1); }
    }
};

int main(int argc, char const *argv[])
{
	set<int> s;
	s.insert(3);
	s.insert(3);
	// cout << s.find(3) << endl;
	cout << s.count(3) << endl;
	cout << s.count(4) << endl;
}
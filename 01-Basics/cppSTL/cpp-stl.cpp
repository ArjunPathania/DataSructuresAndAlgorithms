#include <bits/stdc++.h>
using namespace std;
/* cpp STL is devided into 4 parts
1. Algorithms
2. Containers
3. Functions
4. Iterators
*/

// pairs <- utility library
void explainpair()
{
    pair<int, int> p = {3, 4};
    cout << p.first << " " << p.second << "\n";
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " "
         << p1.second.first << " "
         << p1.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first << endl
         << arr[1].second << endl
         << arr[2].second << endl;
}

void explainvector()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);
    cout << v1[0].first << "\n"
         << v1[1].second << "\n";

    vector<int> v2(5, 100);

    vector<int>::iterator it = v2.begin();
    it++;
    cout << *(it) << "\n";

    vector<int> vec = {10, 20, 30};
    vector<int>::iterator itt = v2.end();
    // vector<int>::iterator it = v2.rend();
    // vector<int>::iterator it = v2.rbegin();
    cout << vec[0] << " " << *(vec.end()-1);
    cout << vec.back();
}

int main()
{
    // explainpair();
    explainvector();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// VECTOR
int main()
{
    vector<int> v; //-> {}
    cout << v.size() << endl;
    v.push_back(0);
    v.push_back(5); // {0,5}
    cout << v.size() << endl;
    v.pop_back(); // pop from back {0}
    cout << v.size() << endl;
    // other functions that vector provides
    v.clear();                            // erase all the elements at once and make vector empty
    vector<int> v1(4, 3);                 // four size and three is the element
    vector<int> v2(4, 10);                // {10,10,10,10}
    vector<int> v3(v2.begin(), v2.end()); // the entire vector v2 will be copied into vector v3
    vector<int> v3(v2);                   // this will also copy the entre vector of v2 into v3
    vector<int> a;
    v.push_back(1); // v.emplace_back(1) better for competative programing takes less time
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // we only want to print {1,3}
    vector<int> a2(a.begin(), a.begin() + 2); // ->{1,3}
                                              // start itrator // end itrator

    // other functons like lower bound, upper bound, swap(v1,v2), begin(),end(),rbegin(),rend().
    // to define 2d vectors
    vector<vector<int>> vec;
    // let's make some other vectors and insert them into vec.
    vector<int> v1;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int> v2;
    v.push_back(4);
    v.push_back(5);
    vector<int> v3;
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    // (it) is vector itself
    for (auto vctr : vec) // traditional way to follow in cp
    {
        for (auto it : vctr)
        {
            cout << it << " ";
        }
    }
    // another way
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    // how do you define the 10 x 20 size of an array
    vector<vector<int>> vec(10, vector<int>(20, 0));
    // 10 rows         // column of size 20
    vec.push_back(vector<int>(20, 0)); // row will become 11
    vec[2].push_back(1);               // dynamic across rows and columns
    // for different values you have to run a for loop
    // how to define an array of vector
    vector<int> arr[4];
    // array of size 4 and each element has a vector of int type
    // since array is not dynamic in nature hence the element or index of that array is dynamic but the size is fix.

    // how to do 3D vector of 10 x 20 x 30
    vector<vector<vector<int>>> vec(10, vector<vector<int>>(10, vector<int>(20, 0)));

    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    // st -> {1,2,5}
    //  erase functionality
    //  logn
    st.erase(st.begin()); // st.erase(itrator) st -> {2,5}

    // log n
    st.erase(st.begin(), st.begin() + 2); // ->{}
    //      start itrator, end itrator

    st.erase(5); // delete 5 from set
    set<int> st = {1, 5, 7, 8};
    auto it = st.find(7);    // log n it will itrate to 7
    auto it = st.find(9)     // it = st.end();
              st.emplace(6); // st.insert(6)
    cout << st.size() << endl;
    set<int> st;
    st.insert(5); // ->{5}
    st.insert(5); // ->{5}
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
    for (auto it : st)
    {
        cout << it << endl;
    }
    // delete the entire set
    st.erase(st.begin(), st.end());

    // unordered set
    unordered_set<int> st;
    st.insert(6);
    st.insert(4);
    st.insert(3);
    // average time complexity is average in nature 0(1)
    // set would be unordered no need to follow ascending order as we follow in set
    // but the worst case is linear in nature, 0(set size)
    // tle then switch to set

    // Multiset
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);
    // st -> {1,1,2,2,3,5}
    ms.erase(2);          // all the instances of 2 will be deleted
    ms.clear();           // delete the entire set
                          // multiset give you the freedom to store all the elements in the sorted fashion
    auto it = ms.find(2); // returns an itrator pointing to the first element of 2
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
    for (auto it : st)
    {
        cout << it << endl;
    }
    // function are almost same in set and unordered set and multiset
    st.count(2);
    // it will give you the number of occurances of 2

    map<string, int> mpp;
    mpp["mayur"] = 29;
    mpp["verma"] = 13;
    mpp["mayuri"] = 43;
    mpp["lovey"] = 24;
    mpp.emplace["mayur", 33];
    mpp.erase("lovey");
    mpp.erase(mpp.begin());
    mpp.clear();
    mpp.erase(mpp.begin(), mpp.begin() + 2);
    auto it = mpp.find("lovey");

    if (mpp.empty())
    {
        cout << "yes it is empty";
    }
    mpp.count("lovey");

    pair<int, int> pr;
    pr.first = 1;
    pr.second = 10;
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    unordered_map<int, int> mpp; // doesn't store in any order
    // 0(1) if almost all cases
    // 0(n) in worst cases where is the container size

    // pair class
    // pair is a single element its not a container
    pair<int, int> pr = {1, 3};
    pair<pair<int, int>, int> pr = {(1, 2), 5};
    cout << pair.first.second << endl;
    // pair can be treated as a defined datatype
    pair<pair<int, int>, pair<int, int>> pr = {(1, 2), (3, 4)};
    cout << pr.first.first << endl;
    cout << pr.second.second << endl;
    // we can use pairs with vectors and maps as well

    vector<pair<int, int>> vec;
    set<pair<int, int>> st;
    map<pair<int, int>> mpp;
    // we can not define unordered map as pair
    multimap<string, int> mpp;
    mpp.emplace("may", 5); // it stores multiple value of string -> ie 5 times may

    // stack and queue
    stack<int> st;
    // pop, push and emplace, top, size, empty
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top(); // prints 5
    st.pop();         // deletes the last entered element
    cout << st.top(); // prints 4
    st.pop();         // deletes 4
    cout << st.top(); // prints 3
    // there's no such function as clear so in order to delete the entire stack
    bool flag = st.empty(); // return true if the stack is empty or false
    while (!st.empty)
    {
        st.pop();
    }
    cout << st.size() << endl; // number of elements in the stack
    stack<int> st;
    cout << st.top() << endl; // throw an error
    // always check if the stack if empty or not before printing the top

    // queue fifo operation
    // push, front, pop, size, empty
    queue<int> q;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    cout << q.front(); // prints 1
    q.pop();           // delete 1
    cout << q.front(); // 2
    // only deletion takes the linear time
    while (!q.empty())
    {
        q.pop();
    }
    // there is no such itrator in stack/queue
    // priority queue -> store all in sorted order and does operation in logn
    // following function push, size, top, pop, empty
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(4);
    cout << pq.top(); // prints 8
    pq.pop();
    cout << pq.top(); // prints 5
    // keep the large no a priority or we can say it traverse in decreaseing order
    priority_queue<pair<int, int>> pq;
    pq.push(1, 2);
    pq.push(1, 3);
    pq.push(1, 9);
    // prints in the order of (1,9)->...(1,2)
    // what if we don't want to print in decreasing order(we will use negation of the elements)
    priority_queue<int> pq;
    pq.push(-5);
    pq.push(-1);
    pq.push(-8);
    pq.push(-4);

    cout << -1 * pq.top() << endl; // prints 1

    return 0;
}

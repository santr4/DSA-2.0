#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a multiset of integers with descending order
    multiset<int, greater<int>> st;
    st.insert(20);
    st.insert(30);
    st.insert(5);
    st.insert(9);
    st.insert(100);
    st.insert(30);

    // Print elements of the original multiset in descending order
    for (auto it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Copy the multiset into another multiset with default order (ascending)
    multiset<int> st1(st.begin(), st.end());

    // Print elements of the copied multiset in ascending order
    for (auto it = st1.begin(); it != st1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Find and remove the first occurrence of element 30
    auto it1 = st1.find(30);
    if (it1 != st1.end())
    {
        st1.erase(it1); // Erase one occurrence of element 30
    }

    // Print the modified multiset
    cout << "Now after erase, the modified multiset:" << endl;
    for (auto it = st1.begin(); it != st1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

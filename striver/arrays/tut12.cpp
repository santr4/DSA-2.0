// second largest

set<int> s;
for (int i = 0; i < arr.size(); i++)
{
    s.insert(arr[i]);
}
set<int>::iterator it;
it = s.end();
--it;
--it;
int x = *it;
return x;
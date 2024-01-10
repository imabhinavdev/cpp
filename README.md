# Containers
## Pairs
```cpp
pair<int,string> p;
p=make_pair(3,"abc");
p={4,"cde"};
cout<<p.first<<p.second<<endl;
```
#### Pair Array
```cpp
pair<int,int> p[3];
p[0]={1,4};
```

```cpp
pair<int,string> p[3];
swap(p[0],p[1]);
cin>>p.first;
cin>>p.second;
```

## Vectors

Dynamic Array
* Vector Push
* Vector Pop
* Vector Size
* Vector Reference
```cpp
vector <int> v;
v.push_back(); //O(1)
v.pop_back();
cout<<v.size(); //O(1)
vector <int> v1(10); //all values will be v1
vector <int> v2(10,3); //all valuse will be 3
vector<int> &v3=v2 //passing reference
vector <int>v2=v1 //O(n) we can use assignment operator here;
vector <string>s;
```

* Nested Vector
```cpp
vector<pair<int,int>>v;
v.push_back({1,2});
v.push_back(make_pair(1,2));
vector<vector<int>> nestV;
```

### Iterators
* .begin()
* .end()

> it++ this moves to the next **Iterator**  but it+1 moves it to the next **Location**. It it+1 cannot work in map and sets and locations are not continous.

```cpp
vector <int>v;
v.push_back(10);
vector <int>:: iterator it=v.begin()
cout<<*it<<endl;
for(it=v.begin();it!=v.end;++it)
{
    cout<<(*it);
}

vector<pair<int,int>> vp;
vector<pair<int,int>>::iterator it1;
cout<<(*it1.first);
cout<<(it1->first);
cout<<(it1->second);

//it1->first == *it1.first
```

#### Iterator using C++ 11 | Auto Keyword
* Range Based Loops
```cpp
vector<int>v;
for(int val:v)
{
    value++;//value is copied not referenced
    cout<<val;
}
for(int &val:v)
{
    value++;//value is referenced
    cout<<val;
}

vector<pair<int,int>>vp;
for(pair<int,int> &val:vp)
{
    cout<<val.first<<" "<<val.second;
}
```
* **Auto Keyword**

Auto Keyword can automatically understands the datatype. 
```cpp
auto a=1;
auto b="abc";
auto c=1.0;
vector<pair<int,int>>vp;
for(auto &val:vp)
{
    cout<<val.first<<" "<<val.second;
}
```


## Maps
1. Maps (ordered)(red Black trees)
2. Unordered Maps 

Key-value pair is stored.
* .size() - gievs the size of the map.
```cpp
map<int,string> m;
m[1]="abc"; //O(logn)
m[5]="cde";
m[2]="efg";
m.insert({4,"afg"});
map<int,string>::iterator it;
for(auto &val:m)
{
cout<<val.first<<" "<<val.second;
}
cout<<m.size(); //prints m size.
auto itt=m.find(3);//returns iterator else returns m.end(). O(log n)

m.erase(5);//removes keys and values
m.erase(m.find(3));
m.clear(); //clears everything
```
>Insertion of keys of string is **string.size()\*log(n)**

#### Unordered Maps

`Unorderd Map cannot work on pairs!`

>Use Hash Tables in this.
>O(1) is time complexity

Every method is taking O(1) like find(),erase()

```cpp
unordered_map<int,string> m;
```

## Sets
1. Sets
2. Unordered Sets
3. Multiset

```cpp
set<string> s;
s.insert("avc"); //log(n)
s.insert("def");
s.insert("ghi");
auto it=s.find("abc")//O(log(n)) returns iterator else returns s.end()
s.erase("avc");//removes the record.
```

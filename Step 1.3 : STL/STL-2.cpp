#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <iterator>
#include <ostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

// explain set :

// given number of elements = A[5]={1,2,3,2,3};
// unique elements are = 1,2,3
// set stores unique elments accendingly
// to access set elements we need to write .begin()
// SC = 0(logn) , TC=0(logn)
void explainSet() {

  set<int> st;
  int n;
  cout << "enter n : ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    st.insert(x);
  }
  cout << endl;
  for (auto it : st) {
    cout << it << " ";
  }

  // erase : TC=0(logn)
  st.erase(st.begin(), next(st.begin(), 2)); // -> [) //included,excluded

  cout << endl;
  for (auto it : st) {
    cout << it << endl;
  }

  // particular element to delete :
  st.erase(3); // it will delete 3 if your set has 3
  // another way of declaring :
  set<int> st1 = {1, 2, 3, 4, 5};
  set<int> st2(st1); // copy

  auto it = st.find(4);  // logn , it will be iterator to 4
  auto it1 = st.find(7); // it will be iterator to st.end();
  st.emplace(77);        // works like st.insert(77) but faster
  cout << "size = " << st.size();
  st.erase(st.begin(), st.end()); // will delete entire set

  // unordered_set : avg TC : 0(1) , worst case TC : 0(set size) / linear
  unordered_set<int> st_; // st will keep the elements un orderdly & unique
  st_.emplace(1);
  st_.emplace(2);
  st.emplace(3);

  cout << endl << "unordered : " << *st_.begin() << endl;
  // Note : if you dont need to store in ascending order , always
  // use unordered_set for its 0(1) TC
  // if you face TLE use set

  /// multiset:// multiset stores all the elements in sorted order, unlike set ,
  // multiset stores duplicates also
  multiset<int> ms;
  ms.emplace(1);
  ms.emplace(2);
  ms.emplace(1);
  ms.emplace(3);
  ms.emplace(2);
  ms.emplace(3);
  ms.emplace(4);
  ms.emplace(4);

  cout << "multiset  : " << endl;

  for (auto it : ms) {
    cout << it << " ";
  }

  ms.erase(ms.find(4), ms.find(2));

  ms.erase(1); // erases all instances

  cout << endl << "after erasing 1 : " << endl;

  for (auto it : ms) {
    cout << it << " ";
  }

  auto it_ = ms.find(3); // returns an iterator to the fist instance of 3
  ms.clear();            // deletes entire set
}

void explainMap() // map only stores unique elements, TC : 0(logn)
{
  map<string, int> mp;
  mp.emplace("alvi", 7);
  mp.emplace("kamal", 8);
  mp["alvi"] = 88; // alvi will now overwritten by 88
  mp["jamal"] = 9;

  for (auto it : mp) {
    cout << it.first << it.second << endl;
  }

  cout << endl << endl;

  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << it->second << endl;
  }

  mp.erase("kamal");                 // erase a key element
  auto it = mp.find("jamal");        // points to where jamal lies
  cout << mp.count("jamal") << endl; // always returns 1 if jamal available, as
                                     // map stores unique elements
  mp.erase(mp.begin());
  mp.erase(mp.begin(), next(mp.begin(), 2));
  mp.clear();
  if (mp.empty()) {
    cout << "its empty ";
  }

  // unordered_map : TC : 0(1) almost all cases ;
  //  TC : 0(n) in worst case, n is the container size
  unordered_map<string, int> mpp; // doesnt store in any order
  mpp.emplace("messi", 10);

  // multi map : multimap stores all the elements in sorted order, unlike map ,
  //  multimap stores duplicates also
  multimap<string, int> mP;
  mP.emplace("Korim", 7);
  mP.emplace("Korim", 808);

  cout << "multimap :" << endl;

  for (auto it : mP) {
    cout << it.first << " " << it.second << endl;
  }
}

void explainStack() {

  stack<int> st; // lifo

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  cout << st.top() << endl;
  st.pop();

  if (!st.empty()) {
    cout << st.top() << endl; // if there is no element in stack and
    // you write st.top() it will throw an error
  }

  bool flag = st.empty(); // returns true if stack is empty

  while (!st.empty()) // deletes entire stack
  {
    st.pop();
  }

  cout << st.size();
}

void explainQueue() {
  queue<int> q; // fifo , push, pop , front = TC : 0(1) , deletion : TC : 0(n)

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  while (!q.empty()) { // deletion
    q.pop();
  }
  cout << "size : " << q.size();

  queue<int> q1;
  cout << "enter 10 elements for queue : ";
  for (int i = 0; i < 10; i++)
    q1.push(i);
  while (!q1.empty()) {
    cout << q1.front() << endl;
    q1.pop();
  }
}

void explainPriorityQ() {

  priority_queue<int>
      pq; // TC: 0(logn), stores descendingly{bigger value on the top}
  pq.push(11);
  pq.push(2);
  pq.push(33);
  pq.push(3);

  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  }

  // make a minimum PQ :
  cout << endl << "PQ in ascending order : " << endl;
  priority_queue<int> Pq; // now if you want to store ascendingly in PQ:
  pq.push(-11);           // pq.push(-1*element)
  pq.push(-2);
  pq.push(-33);
  pq.push(-3);

  while (!pq.empty()) {
    cout << -1 * pq.top() << endl;
    pq.pop();
  }
  // pair inside PQ :
  priority_queue<pair<int, int>> PQ;
  PQ.push(make_pair(1, 3));
  PQ.push(make_pair(1, 5));
  PQ.push(make_pair(1, 9));

  // minimum PQ :
  priority_queue<int, vector<int>, greater<int>> pq_;
  pq_.push(11);
  pq_.push(2);
  pq_.push(33);
  pq_.push(3);

  cout << "minimum PQ : " << pq_.top();
}

void explaingList() { /*

                      push_front()
                      push_back()
                      pop_front()
                      pop_back()
                      begin(), end() , rbegin(), rend()
                      size()
                      clear()
                      empty()
                      at()
                      remove() -> 0(1)


                     */
  list<int> ls;
  ls.push_front(2);
  ls.push_back(1);
  ls.push_back(11);
  ls.remove(11); // TC : 0(1)
  ls.pop_front();
  ls.pop_back();
  auto it = ls.begin();
  auto it1 = ls.end();
  auto it_ = ls.rbegin();
  auto it2 = ls.rend();
}

void MaxOccuredElem() {
  // Note : if you are using map, and got TLE , switch to unordered_map
  cout << "Enter n: ";
  int n;
  cin >> n;

  unordered_map<int, int>
      mp; // Create a map to store the count of each element.
  int maxi =
      0; // Initialize a variable to store the element with the maximum count.

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;               // Read an integer x from the user.
    mp[x]++;                // Increase the count of x in the map.
    if (mp[x] > mp[maxi]) { //(1,3)>(2,1)
      maxi = x; // If x has a higher count than the current maximum, update maxi
                // to x.
    }           // mp[maxi]; ={0,0}
                // mp[1]++; ={1,1}
  }             // mp[1]++; ={1,2}

  cout << "Max occurred element: " << maxi << " (occurs " << mp[maxi]
       << " times)" << endl;
  // Print the element with the maximum count and the count itself.
}

void PrintAllElemSorted() { // TC : 0(nlogn)
  int n;
  cout << "enter n : " << endl;
  cin >> n;
  cout << "enter elements : ";
  multiset<int> ms;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ms.emplace(x);
  }
  for (auto it : ms) {
    cout << it << " ";
  }
}

int main() {
  //// MaxOccuredElem();
  // map<int, int> mp;
  // int maxi = 0;
  // mp.emplace(1, 0);
  // mp[1]++;
  // mp.emplace(2, 0);
  // for (auto it : mp) {
  //   cout << it.first << " " << it.second << endl;
  // }
  // if (mp[1] > mp[2])
  //   cout << "ok";
  //------------------------------------------------
  PrintAllElemSorted();
  return 0;
}
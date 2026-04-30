#include <bits/stdc++.h>
using namespace std;
int main(){
    // deque<int> dq;
    // dq.push_back(3);
    // dq.emplace_back(5);
    // dq.push_front(1);
    // dq.emplace_front(8);

    // dq.pop_back();
    // dq.pop_front();

    // cout<< dq.back()<<endl;
    // cout<< dq.front()<<endl;

    // cout<< dq[0]<< endl;


    // list<int> l;
    // l.push_back(1);
    // l.emplace_back(2);
    // l.push_front(3);
    // l.emplace_front(4);

    // //cout<< l[0]; //errror

    // l.pop_back();
    // l.pop_front();

    // cout <<l.back() <<endl;
    // cout << l.front()<<endl;


    // stack<int> s;
    // //LIFO
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.emplace(9);

    // //cout<<s[0] //error

    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;

    // cout <<s.size()<<endl;
    // cout<<s.empty()<<endl;

    // stack<int> s1;
    // s.swap(s1);
    // cout <<s1.size()<<endl;

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.emplace(9);

    // q.front()+=10;
    // cout<<q.front()<<endl;

    // cout<<q.back()<<endl;

    // q.pop();
    // cout<<q.front()<<endl;

    // priority_queue <int> pq;
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);
    // pq.push(4);
    // pq.emplace(9);

    // cout<<pq.top()<<endl;

    // pq.pop();
    // cout<<pq.top()<<endl;

    //not linear ,tree data structure

    //min .max heap
    // priority_queue <int,vector<int>,greater<int>> minpq;
    // minpq.push(1);
    // minpq.push(22);
    // minpq.push(13);
    // minpq.push(18);
    // minpq.emplace(9);

    // cout<< minpq.top()<<endl;

    // //push pop O(N)


    //set
    // set<int> s;
    // s.insert(1);
    // s.insert(9);
    // s.insert(2);
    // s.insert(4);
    // s.insert(3);
    // s.insert(4);

    // auto i1 =s.find(2);
    // auto i2 =s.find(7); //end 

    // s.erase(9);
    // s.erase(i1);

    // set <int> s1={2,4,6,8,10};
    // auto i3=s1.find(8);
    // auto i4=s1.find(4);
    // s1.erase(i3,i4);
    
    // int c1=s1.count(6);
    // int c2=s1.count(7);

    //insert O(log N)


    multiset<int>ms;
    ms.insert(1);
    ms.insert(9);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(4);

    ms.erase(7);
    ms.erase(ms.find(1)); //erase single element

    int count = ms.count(1);

    return 0;
}
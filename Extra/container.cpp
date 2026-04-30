// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     pair <int,char> p1 ={1,'a'};
//     cout << p1.first <<" "<<p1.second<< endl;
//     pair <int,pair<int,int>> p2={2,{3,4}};
//     cout << p2.first <<" "<<p2.second.first<< " " <<p2.second.second<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v={1,2,3,4,5};
    cout << v[2] << endl;

    v.push_back(11); //add 11 end
    cout << v[5] << endl;
    v.emplace_back(13); //add 13 at end
    cout << v[6] << endl ;

    // // vector <int> v2=(5,20);
    // // cout <<v2[1]<<" "<<v2[3]<<" "<<v2[2]<<" "<<endl;
    
    // vector<pair<int,int>> v3;
    // v3.push_back({1,2});
    // v3.emplace_back(5,6);
    // cout<<v3[0].first<<endl;

    ///iterator
    // vector<int>::iterator i=v.begin();
    // cout<< *i<<endl;
    // cout<< *(i+1)<<endl;
    // cout<< *(i+2)<<endl;


    // vector<int>:: iterator i1=v.end();
    // vector<int>:: reverse_iterator i2=v.rend();
    // vector<int>:: reverse_iterator i3=v.rbegin();
    // i3++;
    // cout << *(i3) <<endl; 
    // cout << v.back() <<endl; //last element
    // return 0;

    //print vector
    // for(vector <int>::iterator i=v.begin(); i!=v.end(); i++)
    // cout << *i << " ";
    // cout<<endl;

    // for(auto i=v.begin(); i!=v.end(); i++)
    // cout << *i << " ";
    // cout<<endl;

    //for each loop
    // for(int k:v)
    // cout<< k<<" ";
    // cout<<endl;

    // for(auto k:v)
    // cout<< k<<" ";
    // cout<<endl;

    //delete v=1,3,7,9,11,13
    // v.erase(v.begin()+2); //1,3,7,9,11,3
    // for(auto k:v)
    // cout<< k<<" ";
    // cout<<endl;

    // v.erase(v.begin()+1,v.begin()+4); //1,11,13
    // for(auto k:v)
    // cout<< k<<" ";
    // cout<<endl;

    //insert
    vector<int> v4={1,2,3,4,5,6};
    v4.insert(v4.begin(),5);
    v4.insert(v4.begin()+2,2,8);
    for(auto k:v)
    cout<< k<<" ";
    cout<<endl;

    vector<int>v6={20,6};
    v4.insert(v4.begin(),v6.begin(),v6.end());
    cout<<v4.size()<<endl;

    v4.pop_back();

    vector<int> v7={1,2};
    vector<int>v8={3,4};
    v7.swap(v8);
    v7.clear();

    cout<<v7.empty()<<endl;
    return 0;

}
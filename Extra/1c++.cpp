// #include<iostream>
// int main(){
//     std:: cout << "Hello";
//     std:: cout << "hi" << "\n";
//     std:: cout << "line";
//     return 0;
// }
 
// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Hello";
//     cout << "hi" << "\n";
//     cout << "line" << endl; 
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin >> a >> b;
//     cout << a+b << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     cout << s << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    pair <int,char> p1 ={1,'a'};
    cout << p1.first <<" "<<p1.second<< endl;
    pair <int,pair<int,int>> p2={2,{3,4}};
    cout << p2.first <<" "<<p2.second.first<< "" <<p2.second.second<<endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int>v;
int num;
int element;
cout << "Input number of elements desired" << endl;
cin >> num;

for(unsigned i = 0; i < num; ++i){
   if(i == 0){
       v.push_back(num*1000);
   }else{
       v.push_back(v.at(i-1)-10);
   }
}

for(unsigned a = 0; a < v.size(); ++a){
    cout << v.at(a) << " " << endl;
}

// SORT AlGORITHMS REVIEW
cout << "SORT !!!" << endl;
vector <int> e;
e=v;
int hold;
for(unsigned c = 0; c < v.size(); ++c){
    for(unsigned b = 0; b < v.size() - c - 1;++b){
        if(v.at(b) > v.at(b+1)){
            hold = v.at(b);
            v.at(b) = v.at(b+1);
            v.at(b+1) = hold;
        }
    }
}
for(unsigned a = 0; a < v.size(); ++a){
    cout << v.at(a) << " " << endl;
}

return 0;

}
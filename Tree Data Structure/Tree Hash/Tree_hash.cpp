#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    // <key,value> create a map represent a hash table 

    unordered_map<string,int> treeHash;

    // Inserting kay and value into hash table 

    treeHash["apple"] = 200;
    treeHash["banana"] = 300;
    treeHash["orange"] = 400;


    // accessing values using keys

    cout<<"Price of apple : " <<treeHash["apple"]<<endl;
    cout<<"Price of apple : " <<treeHash["banana"]<<endl;
    cout<<"Price of apple : " <<treeHash["orange"]<<endl;

    // check if a key is present in the hash table 
    string key = "apple";
    if(treeHash.find(key) != treeHash.end()){
        cout<<"Price  of "<<key<<" s: "<<treeHash[key]<<endl;
    }else{
        cout<<key<<" : Not found in the hash table ... "<<endl;
    }
    // print all elements 

    // first = key
    // second = value

    for(const auto &entry : treeHash){
        cout<<" key : "<<entry.first<<" : value "<<entry.second<<endl;
    }


    return 0;
}
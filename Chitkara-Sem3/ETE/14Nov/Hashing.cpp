#include <iostream>
#include <vector>
using namespace std;

class Hashtable{
public:
    vector<vector<int>> table;
    int size;

    Hashtable(int s){
        size = s;
        table = vector<vector<int>>(size);  
    }

    void insert(int key){
        int hashIndex = calculateIndex(key);
        table[hashIndex].push_back(key);
    }

    int calculateIndex(int key){
        return key % size;
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout << i << ": ";
            for(int x : table[i]) cout << x << " ";
            cout << endl;
        }
    }
};

int main(){
    Hashtable h(5);
    h.insert(10);
    h.insert(23);
    h.insert(6);
    h.insert(9);
    h.insert(47);
    h.display();
    return 0;
}

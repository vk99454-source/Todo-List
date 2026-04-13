#include <string>
#include <vector>
using namespace std;

class TodoList {
public:
    void add(string task);
    void complete(string task);
    string all() const;
    string complete() const;
    string incomplete() const;
    void clear();
private:
    vector<string> tasks;
    vector<bool> completed;
};
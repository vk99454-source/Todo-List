#include "hello.hpp"

string TodoList::all() const {
        string result = "";
        if (tasks.size() == 0) {
            return "The list is empty.\n";
        }
        for (int i = 0; i < tasks.size(); i++) {
            result = result + tasks[i];
            if (completed[i] == true) {
                result = result + " (complete)";
            }
            else {
                result = result + " (incomplete)";
            }
            result = result + "\n";
        }
        return result;
    }
string TodoList::complete() const {
    string result = "";
    for (int i = 0; i < tasks.size(); i++) {
        if (completed[i] == true) {
            result = result + tasks[i] + "\n";
        }
    }
    if (result == "")
    {
        return "No completed tasks.\n";
    }

    return result;
}
string TodoList::incomplete() const {
    string result = "";
    for (int i = 0; i < tasks.size(); i++) {
        if (completed[i] == false) {
            result = result + tasks[i] + "\n";
        }
    }
    if (result == "")
    {
        return "No incomplete tasks.\n";
    }

    return result;
}
void TodoList::add(string task) {
    if (task != "") {
        tasks.push_back(task);
        completed.push_back(false);
    }
}
void TodoList::complete(string task) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i] == task) {
            completed[i] = true;
        }
    }
}
void TodoList::clear() {
    tasks.clear();
    completed.clear();
}
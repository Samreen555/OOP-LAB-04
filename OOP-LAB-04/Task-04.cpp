/*
Develop a nested to-do list application where each list can have sub-tasks represented as a list of lists.
#include <iostream>
#include <list>
#include <string>
// Task: Define the ToDoList class that supports nested lists.
*/
#include <iostream>
#include <list>
#include <string>
using namespace std;
class Task {
private:
    string taskName;
    list<Task> subtasks;
public:
    Task(const string& name) : taskName(name) {}    //constructor
    void addSubtask(const Task& subtask) {
        subtasks.push_back(subtask);
    }
    void display(int depth = 0) const {
        // Display task with appropriate indentation based on depth
        cout << string(depth, '\t') << "- " << taskName <<endl;

        // Display subtasks recursively
        for (const auto& subtask : subtasks) {
            subtask.display(depth + 1);
        }
    }
};
class ToDoList {
private:
    list<Task> tasks;

public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void display() const {
       cout << "To-Do List:" <<endl;
        for (const auto& task : tasks) {
            task.display();
        }
    }
};
int main() {
    ToDoList toDoList;

    Task task1("Task 1");
    task1.addSubtask(Task("Subtask 1.1"));
    task1.addSubtask(Task("Subtask 1.2"));
    task1.addSubtask(Task("Subtask 1.3"));

    Task task2("Task 2");
    task2.addSubtask(Task("Subtask 2.1"));
    task2.addSubtask(Task("Subtask 2.2"));

    toDoList.addTask(task1);
    toDoList.addTask(task2);

    toDoList.display();
    system("pause>0");

}

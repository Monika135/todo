#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> tasks;


void addTask() {
    string task;
    cout << "Enter a new task: ";
    cin>>task;
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}


void viewTasks() {
    if (!tasks.empty()) {
        cout << "To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout <<"Task " <<(i+1) <<" - " << tasks[i]<<endl;
        }
    } 
    else {
        cout << "No tasks in the list." << endl;
    }
}


void deleteTask() {
    viewTasks();
    if (!tasks.empty()) {
        cout << "Enter the number of the task to delete: ";
        int taskIndex;
        cin >> taskIndex;
        
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task deleted successfully!" << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    } else {
        cout << "No tasks to delete." << endl;
    }
}

int main() {
    while (true) {
       cout << "Choices:" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                cout << "Exit" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    }

    return 0;
}

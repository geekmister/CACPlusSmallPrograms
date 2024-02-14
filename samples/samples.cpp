//
// Created by geekmister on 2024/2/13.
//

#include <iostream>

using namespace std;

// Statement a Student class
class Student {
private:
    int num;
    int source;
public:
    void setData() {
        cin >> num;
        cin >> source;
    };
    void display() const {
        cout << "num =" << num << endl;
        cout << "source =" << source << endl;
    };
};

// Define stu1 and stu2 variable of Student class
Student stu1, stu2;

int main() {
    stu1.setData();
    stu1.display();
    stu2.setData();
    stu2.display();
    return 0;
}
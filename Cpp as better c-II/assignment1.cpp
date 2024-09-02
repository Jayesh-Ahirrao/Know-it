#include <iostream>
using namespace std;

struct Student
{
    int rollNumber;
    char name[20];
    int totalMarks;

    void accept(int index)
    {
        cout << "Enter the Roll number of student " << 1 + index << ": " << endl;
        cin >> rollNumber;
        cout << "Enter the name of student student " << 1 + index << ": " << endl;
        cin >> name;
        cout << "Enter the Total Marks of student student " << 1 + index << ": " << endl;
        cin >> totalMarks;
    }

    void display(int index)
    {
        cout << endl
             << "Studen" << index + 1 << "details are: " << endl
             << "\t"
             << "name: " << name << "\t" << "roll number: " << rollNumber << "\t" << "totalMarks: " << totalMarks << endl;
    }
};

int getMaxScoredStudent(struct Student students[], int size)
{
    if (size <= 0)
        return 0;

    int maxMarks = students[0].totalMarks;
    int maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (students[i].totalMarks > maxMarks)
        {
            maxMarks = students[i].totalMarks;
            maxIndex = i;
        }
    }

    return maxIndex;
}

int main()
{
    int count;
    cout << "How many students do you want ?" << endl;
    cin >> count;

    struct Student *studentsArr = new Student[count];

    for (int i = 0; i < count; i++)
        studentsArr[i].accept(i);

    for (int i = 0; i < count; i++)
        studentsArr[i].display(i);

    int maxMarksIndex = getMaxScoredStudent(studentsArr, count);

    cout << endl
         << "The Student having max marks is: " << "\t" << studentsArr[maxMarksIndex].name << endl;

    return 0;
}

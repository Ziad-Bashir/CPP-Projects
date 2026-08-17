#include<iostream>
#include<limits>
using namespace std;


enum enGrade {Fail, Passed, Good, VeryGood, Exellent};  // I can't use a simple Forward Declaration like 'enum enGrade;' because C++ needs to know its size, unless explicitly typed (e.g., enum enGrade : int;).

struct strStudentInfo    // I can't use a Forward Declaration here because instantiating the Students[100] array requires knowing the exact struct size, which isn't required if we only use pointers.
{
    string FullName;
    int ID;
    float TotalGrades;
    enGrade Grade;
};

void ReadInfo(strStudentInfo &Info);

string TranslationGrads(strStudentInfo &Info);

void PrintInfo(strStudentInfo Info);

void CalculateGrade(strStudentInfo &Info);

void GenerateReportCard(strStudentInfo Studends[100], int &NumberOfStudents);

void PrintAllStudentsReport(strStudentInfo Studends[100], int NumberOfStudents);

int main()
{
    strStudentInfo Students[100];
    int NumberOfStudents;

    GenerateReportCard(Students, NumberOfStudents);
    PrintAllStudentsReport(Students, NumberOfStudents);
    return 0;
}


void ReadInfo(strStudentInfo &Info)
{
    cout << "Enter Your Name, Please: ";
    getline(cin,Info.FullName);
    cout << "Enter Your ID, Please: ";
    cin >> Info.ID;
    cout << "Enter Your Total Grades, Please: ";
    cin >> Info.TotalGrades;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

string TranslationGrads(strStudentInfo &Info)
{
    switch (Info.Grade)
    {
    case enGrade::Fail:
        return "Fail";
        break;
    case enGrade::Passed:
        return "Passed";
        break;
    case enGrade::Good:
        return "Good";
        break;
    case enGrade::VeryGood:
        return "VeryGood";
        break;
    case enGrade::Exellent:
        return "Exellent";
        break;
    default:
    return "Unknown Grade";
        break;
    }
}

void PrintInfo(strStudentInfo Info)
{
    cout << "Student Full Name is: " << Info.FullName << "\n";
    cout << "Student ID is: " << Info.ID << "\n";
    cout << "Student Total Grades is: " << Info.TotalGrades << "\n";
    cout << "Student Grade is: " << TranslationGrads(Info) << "\n";
}


void CalculateGrade(strStudentInfo &Info)
{
    if (Info.TotalGrades >= 90)
    {
        Info.Grade = enGrade::Exellent;
    } else if(Info.TotalGrades >= 80)
    {
        Info.Grade = enGrade::VeryGood;
    } else if(Info.TotalGrades >= 70)
    {
        Info.Grade = enGrade::Good;
    } else if(Info.TotalGrades >= 50)
    {
        Info.Grade = enGrade::Passed;
    } else if(Info.TotalGrades < 50)
    {
        Info.Grade = enGrade::Fail;
    }
}



void GenerateReportCard(strStudentInfo Studends[100], int &NumberOfStudents)
{
    cout << "|----------------------------------------|\n";
    cout << "Enter The Number Of Students, Please: ";
    cin >> NumberOfStudents;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "|----------------------------------------|\n";
    for(int i = 0; i < NumberOfStudents; i++)
    {
        cout << "|-------- Student Number[" << i + 1 << "] --------|\n";
        ReadInfo(Studends[i]);
        CalculateGrade(Studends[i]);
    }
}


void PrintAllStudentsReport(strStudentInfo Studends[100], int NumberOfStudents)
{
    for(int i = 0; i < NumberOfStudents; i++)
    {
        cout << "|-------- Student Number[" << i + 1 << "] --------|\n";
        PrintInfo(Studends[i]);
    }
}

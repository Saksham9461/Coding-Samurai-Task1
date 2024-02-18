#include<iostream>
#include<iomanip>
#include<string>


using namespace std;

struct student
{
    char name[10];
    int roll_number;
    double assignmentScore;
    double quizScore;
    double examScore;
    double totalGrade;
};


int main()
{
    cout<<"Welcome to Student Grade Calculator"<<endl;
    int numberStudent;
    double assignmentWeight,quizWeight,examWeight;
    
    cout<<"Enter number of students:";
    cin>>numberStudent;
    struct student s[numberStudent];
    cout<<"Enter the Weightage of assignment(in %):";
    cin>>assignmentWeight;
    cout<<"Enter the Weightage of quiz(in %):";
    cin>>quizWeight;
    cout<<"Enter the Weightage of exam(in %):";
    cin>>examWeight;


    for ( int i = 0; i < numberStudent; i++)
    {


        cout << "Enter student name: ";
        cin>>s[i].name;
        cout<<"Enter roll number:";
        cin>>s[i].roll_number;
        cout<<"Enter score of assignment(0-100):";
        cin>>s[i].assignmentScore;
        cout<<"Enter score of quiz(0-100):";
        cin>>s[i].quizScore;
        cout<<"Enter score of exam(0-100):";
        cin>>s[i].examScore;
        s[i].totalGrade=((s[i].assignmentScore*assignmentWeight)/100.0)+((s[i].quizScore*quizWeight)/100.0)+((s[i].examScore*examWeight)/100.0);
    }

        //details of the student
        cout<<"DETAILS OF THE STUDENT"<<endl;
        for (int  i = 0; i < numberStudent; i++)
        {
            
        
        cout<<"NAME:"<<s[i].name<<endl;
        cout<<"ROLL NUMBER:"<<s[i].roll_number<<endl;
        cout<<"Marks of assignment:"<<s[i].assignmentScore<<endl;
        cout<<"Marks of quiz:"<<s[i].quizScore<<endl;
        cout<<"Marks of exam:"<<s[i].examScore<<endl;
        cout<<"Total Grade:"<<s[i].totalGrade<<endl;
        if (s[i].totalGrade>=90.00)
        {
            cout<<"'A'"<<endl<<"Excellent work! Keep it up!"<<endl;
        }
        else if (s[i].totalGrade>=80.00)
        {
            cout<<"'B'"<<endl<<"Good job! Keep improving!"<<endl;
        }
        else if (s[i].totalGrade>=70.00)
        {
            cout<<"'C'"<<endl<<"You're doing okay. Work on improvement."<<endl;
        }
        else if (s[i].totalGrade>=60.00)
        {
            cout<<"'D'"<<endl<<"You need to work harder. Seek help if needed."<<endl;

        }
        else if (s[i].totalGrade>=50.00)
        {
            cout<<"'E'"<<endl<<"Need to work harder."<<endl;
        }
        else
        {
            cout << "Unfortunately, you failed. Consider talking to the instructor." << endl;
        }
        

    }
    return 0;
    
}

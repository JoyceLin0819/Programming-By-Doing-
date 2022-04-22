// Joyce Lin Classes and Objects #3
#include <iostream>
#include <ctime>

using namespace std;

class Student
{
    private:
        string name;
        int age;
        int gradeLevel;
        double GPA;  
        char gender; // "m" or "f"
        double grades[4]; 
    
    public:
        // constructor 
        Student(string n, int a, int g, char gen)
        {
            name = n;
            age = a;
            gradeLevel = g;
            gender = gen;
        }

        void calcGPA()
        {
            GPA = ((grades[0] + grades[1] + grades[2] + grades[3])/4)*5;
        }

        double getGPA()
        {
            return GPA;
        }

        void setGrade(string course, double grade)
        {
            // int courseIndex;

            if(course == "English")
            {
                grades[0] = grade;
            } else if(course == "Math")
            {
                grades[1] = grade;
            } else if(course == "Science")
            {
                grades[2] = grade;
            } else 
            {
                grades[3] = grade;
            }
        }

        void printGrade()
        {
            cout << "Name: " << name << endl;
            cout << "English: " << grades[0] << endl;
            cout << "Math: " << grades[1] << endl;
            cout << "Science: " << grades[2] << endl;
            cout << "Social Study: " << grades[3] << endl;
            cout << "GPA: " << GPA << endl << endl;
        }
};

int main()
{
    srand(time(NULL));
    
    // Student 1
    Student std1("Anna", 16, 9, 'f');
    std1.setGrade("English", rand()%100+1);
    std1.setGrade("Math", rand()%100+1);
    std1.setGrade("Science", rand()%100+1);
    std1.setGrade("Social Study", rand()%100+1);

    std1.calcGPA();
    std1.printGrade();

    // Student 2
    Student std2("Rock", 18, 11, 'm');
    std2.setGrade("English", rand()%100+1);
    std2.setGrade("Math", rand()%100+1);
    std2.setGrade("Science", rand()%100+1);
    std2.setGrade("Social Study", rand()%100+1);

    std2.calcGPA();
    std2.printGrade();

    double GPA1 = std1.getGPA();
    double GPA2 = std2.getGPA();

    if(GPA1 == GPA2)
    {
        cout << "They have the same GPA. " << endl;
    } else if (GPA1 > GPA2)
    {
        double diff1 = GPA1 - GPA2;
        cout << "Anna's GPA is " << diff1 << " higher than Rock's." << endl;
    }else 
    {
        double diff2 = GPA2 - GPA1;
        cout << "Rock's GPA is " << diff2 << " higher than Anna's. " << endl; 
    }

    return 0;
}

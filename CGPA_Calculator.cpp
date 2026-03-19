#include<iostream>
#include<string>
using namespace std;
void Calculate(int, float&, int&);
int main()
{
	int num_course , total_credit_hours = 0;
	float total_grade_points = 0.0;
	cout << "Enter number of courses : ";
	cin >> num_course;
	Calculate(num_course, total_grade_points,total_credit_hours);
	float GPA = (total_grade_points / total_credit_hours);
	float previous_CGPA, CGPA;
	int sem;
	cout << "Enter semester number : ";
	cin >> sem;
	while (sem > 8)
	{
		cout << "Wrong Input! There are only 8 semesters. Enter Again :";
		cin >> sem;
	}
	cout << "Enter previous CGPA : ";
	cin >> previous_CGPA;
	if (previous_CGPA > 4.0 || previous_CGPA<0.0)
	{
		cout << "Wrong Input. CGPA can not be above 4 or below 0. Enter Again : ";
		cin >> previous_CGPA;
	}
	CGPA = (previous_CGPA * (sem - 1) + GPA) / sem;
	cout << "CGPA : " << CGPA;
	return 0;
}
void Calculate(int courses , float &points,int &total_credit_hours)
{
	int credit_hours = 0;
	string grade;
	for (int i = 0; i < courses; i++)
	{
		cout << "Enter credit hours for course " << i + 1 << "= ";
		cin >> credit_hours;
		total_credit_hours += credit_hours;
		cin.ignore();
		cout << "Enter Grade of course " << i + 1 << "= ";
		getline(cin, grade);
		while (grade != "A+" && grade != "A" && grade != "A-" &&
			grade != "B+" && grade != "B" && grade != "B-" &&
			grade != "C+" && grade != "C" && grade != "c-" &&
			grade != "D+" && grade != "D" && grade != "D-" && grade != "F")
		{
			cout << "Wrong Input. Grades can only be from A-F. Enter Grade Again : ";
			getline(cin, grade);
		}
		if (grade == "A" || grade == "A+")
		{
			points =points + (4.0 * credit_hours);
		}
		else if (grade == "A-")
		{
			points = points + (3.7 * credit_hours);
		}
		else if (grade == "B+")
		{
			points = points + (3.3 * credit_hours);
		}
		else if (grade == "B")
		{
			points = points + (3.0 * credit_hours);
		}
		else if (grade == "B-")
		{
			points = points + (2.7 * credit_hours);
		}
		else if (grade == "C+")
		{
			points = points + (2.3 * credit_hours);
		}
		else if (grade == "C")
		{
			points = points + (2.0 * credit_hours);
		}
		else if (grade == "C-")
		{
			points = points + (1.7 * credit_hours);
		}
		else if (grade == "D+")
		{
			points = points + (1.3 * credit_hours);
		}
		else if (grade == "D")
		{
			points = points + (1.0 * credit_hours);
		}
		else if (grade == "D-")
		{
			points = points + (0.7 * credit_hours);
		}
		else 
		{
			points = points + (0 * credit_hours);
		}
	}
}
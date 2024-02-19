#include<iostream>
using namespace std;
int main()
{
	int numOfStudents;
	string name;
double totalGradePoint;
double heightGradePoint;
	double lowestGradePoint;
	double gradePoint;
	double averageGradePoint;
	cout<<"Enter the number of Students"<<endl;
	cin>>numOfStudents;
	for (int i = 1; i <= numOfStudents; ++i)
	{
		cout<<"Enter the name of student"<< i << ":" <<endl;
		cin>>name;
		cout<<"Enter the gradepoint of student"<< i << ":" <<endl;
		cin>>gradePoint;
		totalGradePoint += gradePoint;
		if(i == 1)
		{
			heightGradePoint = gradePoint;
			lowestGradePoint = gradePoint;
			
		}
		else
		{
			heightGradePoint = max(heightGradePoint, gradePoint);
			
			lowestGradePoint = min(lowestGradePoint, gradePoint );
			
			
		}
	
	
	}
	averageGradePoint = totalGradePoint/numOfStudents;
	cout<< "Average gradepoint of student : "  <<   averageGradePoint  <<endl;
	cout<< "Heighest gradepoint of the student  : "  <<  heightGradePoint  <<endl;
	cout<< "Lowest gradepoint of the student   : "    << lowestGradePoint <<endl;
	
	
	
	return 0;
}

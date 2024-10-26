#include <iostream>
#include<string>
#include <vector>
struct Student
{
	std::string Name;
	std::string GroupId;
	std::vector<unsigned> Ratings;
	std::vector<std::string> Subjects;
};

std::vector<Student> VectorMathExcellent(const std::vector<Student>&students) {
	std::vector<Student> math5;
	for (int i = 0; i < students.size(); ++i) {//поиск под каким по счету стоит название предмета
		int mathindex = -1;//-1 так как на 0 индексе что-то есть 
		for (int p = 0; p < students[i].Subjects.size(); ++p) {
			if(students[i].Subjects[p] == "Math") {
				mathindex = p;
			}
		}
		if (mathindex != -1 && students[i].Ratings[mathindex] == 5) {
			math5.push_back(students[i]);
		}
	}
	return math5;
}

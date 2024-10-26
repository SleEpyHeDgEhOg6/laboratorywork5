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
void SortByName(std::vector<Student>& students) {
	int len = students.size();
	for (int i = 0; i < len - 1; ++i) {//пузырьковая сортировка 
		for (int p = 0; p < len - 1 - i; ++p) {
			if (students[p].Name > students[p + 1].Name) {
				auto rt = students[p].Name;
				students[p].Name = students[p + 1].Name;
				students[p + 1].Name = rt;
			}
		}
	}
}

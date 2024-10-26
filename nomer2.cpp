#include <iostream>
#include<string>
#include <vector>
struct Student
{
	std::string Name;
	std::string GroupId;
	std::vector<unsigned> Ratings;
	std::vector<std::string> Subjects;
	double cp() {
		double summa = 0;
		for (unsigned rat : Ratings) {
			summa += rat;
		}
		return summa / Ratings.size();
	}
};


void SortByRating(std::vector<Student>& students) {
	int len = students.size();
	for (int i = 0; i < len - 1; ++i) {
		for (int p = 0; p < len - 1 - i; ++p) {
			if (students[p].cp() > students[p + 1].cp()) {
				auto rt = students[p].Ratings;
				students[p].Ratings = students[p + 1].Ratings;
				students[p + 1].Ratings = rt;
			}
		}
	}
}

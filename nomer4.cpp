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

size_t CountExcellent(const std::vector<Student>&students) {
	int count = 0;
	for (auto rt : students) {
		bool pro = true;//флажок для проверки 
		for (unsigned rat : rt.Ratings) {
			if (rat != 5) {//если хотя одна оценка равна не 5,то меняем значение флажка
				pro = false;
			}
		}
		if (pro == true) {
			count += 1;
		}
	}
	return count;
}

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

size_t CountTwoness(const std::vector<Student>&students) {
	int count = 0; //буду считать,что неудовлетворительная оценка это меньше 3
	for (auto rt : students) {
		for(unsigned rat: rt.Ratings){
			if (rat < 3) {
				count += 1;
			}
		}
	}
	return count;
}

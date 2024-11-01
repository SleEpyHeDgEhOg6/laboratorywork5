#include<iostream>
#include<vector>
#include<map> //контейнер, в котором для каждого значению есть свой ключ
#include<string>
struct Student
{
	std::string Name;
	std::string GroupId;
	std::vector<unsigned> Ratings;
	std::vector<std::string> Subjects;
};
struct Group
{
	std::string Id;
	std::vector<Student> Students;
};
std::vector<Group> Groups(const std::vector<Student>& students) {
	std::map<std::string, Group> group;
	for (auto p : students) {
		if (group.find(p.GroupId) == group.end()) { //проверяем была ли уже создана такая группа и добавлена в контейнер с таким же id как и id текущего студента 
			Group groupnew;
			groupnew.Id = p.GroupId;//новой группе даем id группы студента
			group[p.GroupId] = groupnew;//добавляем новую группу в контейнер групп
		}
		group[p.GroupId].Students.push_back(p);//добавляем студентов их группу 
	}
	std::vector<Group> grou;
	for (auto l : group) {
		grou.push_back(l.second);//так как firstd - id группы GroupId
	}
	return grou;
}

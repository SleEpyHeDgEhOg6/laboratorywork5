#include<iostream>
#include<vector>
#include<set>
#include<string>
struct Student
{
	std::string Name;
	std::string GroupId;
	std::vector<unsigned> Ratings;
	std::vector<std::string> Subjects;
};
std::vector<std::string> GroupsId(const std::vector<Student>& students) {
	std::set<std::string> groupsid; //set< тип элементов,которые будут там лежать>,set - множество где нету повторяющихся элементов и они упорядочены
	for (auto p : students) {
		groupsid.insert(p.GroupId); //insert - добавляет элемент 
	}
	std::vector<std::string> v (groupsid.begin(), groupsid.end()); //begin - откуда начинает, end - до какого идет  
	return v;
}

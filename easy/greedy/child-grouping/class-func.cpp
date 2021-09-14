#include "main.hpp"

Child::Child() {
	_age = 0;
	_grouped = false;
	_id_group = -1;
}

Child::Child(float age) {
	_age = age;
	_grouped = false;
	_id_group = -1;
}
/*
Child::Child(Child &ref) {
	_age = ref._age;
	_grouped = ref._grouped;
	_id_group = ref._id_group;	
}
*/
int Child::getAge() const {
	return _age;
}

void	Child::setAge(float age){
	_age = age;
}

bool Child::getGroup() const {
	return _grouped;
}

void	Child::setGroup(bool grouped){
	_grouped = grouped;
}


int Child::getGroupId() const {
	return _id_group;
}

void	Child::setGroupId(int g_id){
	_id_group = g_id;
}

void	Child::operator=(Child &rhs) {
	this->_age = rhs._age;
}

bool	Child::operator>(Child &rhs) {
	if (_age > rhs._age)
		return true;
	return false;
}

bool	Child::operator==(Child &rhs)
{
	return _age == rhs._age;
}

bool	Child::operator!()
{
	return !_grouped;
}

float	Child::operator-(Child &rhs)
{
	return rhs._age - _age;
}

void	Child::display_info() {
	std::cout << _age << std::endl;
	std::cout << _id_group << std::endl;
	std::cout << _grouped << std::endl;

}

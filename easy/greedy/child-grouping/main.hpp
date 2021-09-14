#include <iostream>
#include <vector>

class Child{
	public:
		Child();
		Child(float age);
		Child(Child &val) = delete;
		int		getAge() const;
		void	setAge(float age);
		bool	getGroup() const;
		void	setGroup(bool grouped);
		int		getGroupId() const;
		void	setGroupId(int g_id);
		void	display_info();
		void	operator=(Child &rhs);
		bool	operator==(Child &rhs);
		bool	operator>(Child &c2);
		float	operator-(Child &rhs);
		bool	operator!();
	private:
		int		_id_group;
		float		_age;
		bool	_grouped;
};
void	random_list();
void	print_chs(std::vector<Child> &chs);
void	brute_force(std::vector<Child> &chs, int max_diff);
float abs_num(float c);

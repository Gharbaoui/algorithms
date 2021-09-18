#include <iostream>
#include <vector>



class Item {
	public:
		Item() : _v(1), _w(1){};
		Item(int w, int v) : _v(v) , _w (w){}
		Item(Item &i);
		void	setW_and_V(int w, int v) {_w = w; _v = v;}
		void	setWeight(int w){ _w = w;}
		void	setValue(int v){_v = v;}
		int		getWeight(){return _w;}
		int		getValue(){return _v;}
		Item	&operator=(Item &rhs);
	private:
		int	_v;
		int	_w;
};


typedef struct {
	std::vector<int> indecs;
	int	maxValue;
}	Info;

void	init_items(std::vector<Item> &items);
void	brute_force(std::vector<Item> &items, int cap);
std::vector<int> default_index(int n);

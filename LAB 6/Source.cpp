// Наследование классов //

// Наследование - обьявление производных классов от родительсикх
// при котором в производные классов включается выбранные
// свойства и методы родительских без их повторного обьявления

// Синтаксис наследования
// class имя_нового_класса : [тип наследования] имя_родительского_класса1,
//                                              имя_родительского_класса2,
//{
//..
//};

// где "тип_наследования" - тоже public, protected и private,
// но указывать не обязательно

// !!Picture - lab6-perenos Tranfer to text!!

// 2. ЗАДАНИЕ
// создать класс weapon c самыми общими св-вами для любого оружия
// создать произвольный класс launcher и rifle

#include <iostream>
using namespace std;

class weapon // игровое транспортное средство
{
public:
	double firespeed;
	double damage;
	int ammo_value;
	double weight;
	double firerange;
	char name[10] = { 0 };

	struct launcher;

	struct rifle;
};

class weapon::launcher
{
	double range;
	bool auto_aim;
	damage = 7.5
};

class weapon::rifle
{
	double range
};

int main()
{

}
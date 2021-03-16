#include "BaseObject.cpp"
#include "StaticObject.cpp"
#include "DynamicObject.cpp"
#include "Tree.cpp"
#include "House.cpp"
#include "Motorbike.cpp"
#include "Car.cpp"
#include <list>
using namespace std;

int main(){
	list<BaseObject*> listObject;
	Tree* tree = new Tree(1, "st", 7); 
	House* house = new House(2, "nd", 4) ;
	Car* car = new Car(3, "rd", 9); 
	Motorbike* motorbike = new Motorbike (4, "th", 3);
	
	listObject.push_back(tree);
	listObject.push_back(house);
	listObject.push_back(car);
	listObject.push_back(motorbike);
	
	
//	listObject.push_back(Tree(1, "st", 7));
//	listObject.push_back(House(2, "nd", 4));
//	listObject.push_back(Car(3, "rd", 9));
//	listObject.push_back(Motorbike (4, "th", 3));
	
	for (auto obj: listObject){
		obj->getName(); 
	}
	for (auto obj: listObject){
		obj->move(); 
	}
	for (auto obj: listObject){
		obj->printPosition(); 
	}
	listObject.clear();
	return 0;
}

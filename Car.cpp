#import "DynamicObject.cpp"
class Car : public DynamicObject{
	public:
		Car(int id, string name, int position) : DynamicObject(id, name, position){}
		~Car(){}
		void move(int x){
			BaseObject::setPosition(BaseObject::getPosition()+2); 
		}
};

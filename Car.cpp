#import "DynamicObject.cpp"
class Car : public DynamicObject{
	public:
		Car(int id, string name, int position) : DynamicObject(id, name, position){}
		~Car(){}
		void move(){
			BaseObject::setPosition(BaseObject::getPosition()+2); 
			cout << BaseObject::getPosition() << endl;
		}
};

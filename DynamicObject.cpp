#import "BaseObject.cpp"

class DynamicObject: public BaseObject{
	public:
		DynamicObject(int id, string name, int position) : BaseObject(id, name, position){}
		~ DynamicObject(){}
		virtual void move() = 0;
};

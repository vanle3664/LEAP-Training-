#import "BaseObject.cpp"

class StaticObject: public BaseObject{
	public:
		StaticObject(int id, string name, int position) : BaseObject(id, name, position){}
		~ StaticObject(){}
};

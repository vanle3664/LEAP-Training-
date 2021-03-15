#import "DynamicObject.cpp"
class Motorbike : public DynamicObject{
	public:
		Motorbike(int id, string name, int position) : DynamicObject(id, name, position){
		}
		~Motorbike(){}
		void move(int x){
			BaseObject::setPosition(BaseObject::getPosition()+1); 
		}
		
};

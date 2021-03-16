#import "DynamicObject.cpp"
class Motorbike : public DynamicObject{
	public:
		Motorbike(int id, string name, int position) : DynamicObject(id, name, position){
		}
		~Motorbike(){}
		void move(){
			BaseObject::setPosition(BaseObject::getPosition()+1); 
			cout << BaseObject::getPosition() << endl;
		}
		
};

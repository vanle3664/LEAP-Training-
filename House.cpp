class House : public StaticObject{
	public:
		House(int id, string name, int position) : StaticObject(id, name, position){}
		~House(){}
};

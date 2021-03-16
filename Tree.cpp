class Tree : public StaticObject{
	public:
		Tree(int id, string name, int position) : StaticObject(id, name, position){}
		~Tree(){}
		void move(){
			cout << "Can't move" << endl;
		}
};

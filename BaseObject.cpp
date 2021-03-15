#include <bits/stdc++.h>
using namespace std;

class BaseObject{
	private:
		int id;
		string name;
		int position;
		
	public:
		BaseObject(int id, string name, int position){
			this->id = id;
			this->name = name;
			this->position = position;
		}
		~BaseObject(){};
		
		void setPosition(int position){
			this->position = position; 
		} 
		int getPosition(){
			return position; 
		} 
		string getName(){
			return name;
		}
		int getId(){
			return id;
		}
		void printPosition(){
			cout << position << endl;	
		}
	
};



#include <iostream>
#include <string>
#include <exception>

#ifndef TREENODE_CPP
#define TREENODE_CPP

class TreeNode{
	private:
		int score;					 
		int id;                     
		std::string name;            
		TreeNode* leftChild = NULL; TreeNode* rightChild = NULL;        
		bool sorted;
	public:
		//constructors
		Student() : score(0), id(0) , name(""), sorted(false) //default constructor; initializes fields to default values
			{nextStudent = NULL;}    //sets pointer to "NULL" since this is the default constructor
			
		Student(Student& s1) : score(s1.score), id(s1.id) , name(s1.name), sorted(false)
			{this->nextStudent = s1.nextStudent;}
			
		Student(Student* s1) : score(s1->score), id(s1->id) , name(s1->name), sorted(false)
			{this->nextStudent = s1->nextStudent;}
		
		//The following two constructors take L-value arguments.
		Student(int& grade, int& idnum, std::string& newName) : score(grade), id(idnum) , name(newName), sorted(false)
			{nextStudent = NULL;}
			
		Student(int& grade, int& idnum, std::string& newName, Student& s2) : score(grade), id(idnum) , name(newName), sorted(false)
			{nextStudent = &s2;}
		//destructors
		~TreeNode(){
			
		}
		
		void makeSorted(){
			sorted = true;
		}
		
		void notSorted(){
			sorted = false;
		}
		
		//accessor methods
		
		int getScore(){
			return score;
		}
		
		int getIdNum(){
			return id;
		}
		
		std::string getName(){
			return name;
		}
		
		TreeNode* getleft(){
			return leftChild;
		}
		
		TreeNode* getright(){
			return rightChild;
		}
		
		bool isSorted(){
			return sorted;
		}
		
		//mutator methods
		
		void setLeft(TreeNode* a){
			leftChild = a;
		}
		
		void setRigth(TreeNode* a){
			rightChild = a;
		}
}
#endif

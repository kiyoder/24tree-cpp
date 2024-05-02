#include<iostream>
#include<cstdlib>
#include "tree24.h"

using namespace std;

int main(int argc, char** argv){
	
	Tree24* tree = new Tree24();
	
	tree->insert(13);
	tree->insert(04);
	tree->insert(10);
	tree->insert(24);

	tree->print();
	
	
	return 0;
}

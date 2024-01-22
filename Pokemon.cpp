#include "Pokemon.h"

Pokemon::Pokemon(const char* name){
	name_ = name;
}

Pokemon::~Pokemon(){
}

Pokemon::Pokemon(const Pokemon& obj){
	printf("%sをコピーします\n", obj.name_);

	name_ = obj.name_;
}

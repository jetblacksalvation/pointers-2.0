#pragma once

template<typename t>class array
{
	t data;//stuff it holds 
	array* next;//looks at the next pointer
	int size;
	array() {
		data = 0;
		next = NULL;
	}
	array(t data) {
		this->data = data;
		this->next = NULL;
		if (size != 0) {
			size+=1
		}
		else {
			size = 0;
		}
	}
	//~array(){
	//	delte this;//does this work like this? would it even make sense, im not even accessing a member, does it just kill this???
	//};
};


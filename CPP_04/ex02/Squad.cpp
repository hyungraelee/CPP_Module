#include "Squad.hpp"

Squad::Squad() {
	this->count = 0;
	this->member = NULL;
}

Squad::~Squad() {
	if (this->member != NULL) {
		for (int i = 0; i < this->count; i++) {
			delete this->member[i];
		}
		delete[] this->member;
	}
}

Squad::Squad(const Squad& copy) {
	this->count = copy.count;
	this->member = new ISpaceMarine*[copy.count];
	for (int i = 0; i < copy.count; i++) {
		this->member[i] = copy.member[i]->clone();
	}
}

Squad& Squad::operator=(const Squad& copy) {
	if (this != &copy)
	{
		if (this->member != NULL) {
			for (int i = 0; i < this->count; i++) {
				delete this->member[i];
			}
			delete [] this->member;
		}
		this->count = copy.count;
		this->member = new ISpaceMarine*[copy.count];
		for (int i = 0; i < copy.count; i++) {
			this->member[i] = copy.member[i]->clone();
		}
	}
	return (*this);
}

int Squad::getCount() const {
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int i) const {
	return (this->member[i]);
}

int Squad::push(ISpaceMarine* member) {
	if (member == NULL)
		return (this->count);
	for (int i = 0; i < this->count; i++) {
		if (this->member[i] == member)
			return (this->count);
	}
	ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count; i++) {
		tmp[i] = this->member[i];
	}
	tmp[this->count] = member;
	this->count++;
	delete [] this->member;
	this->member = tmp;
	return (this->count);
}

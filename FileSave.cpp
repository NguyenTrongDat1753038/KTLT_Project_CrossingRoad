#include "Header.h"

FileSave::FileSave(int presentLevel, string name) {
	level = presentLevel; this->name = name;
}

int FileSave::getLevel() {
	return level;
}

string FileSave::getName() {
	return name;
}
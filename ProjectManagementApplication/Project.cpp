#include "Project.h"


Project::Project(std::string name, std::string desc, std::string start, std::string deadline)
	: name_(name), description_(desc), start_(start), deadline_(deadline)
{
}


Project::~Project()
{

}
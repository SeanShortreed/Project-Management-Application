#include "BugFix.h"



BugFix::BugFix()
{
}


BugFix::~BugFix()
{
}

const std::string BugFix::GetDetails() const
{
	std::stringstream temp;
	temp << spacer << "Bug Fix: " << start_.getFormatted() << " - " << end_.getFormatted() << " Description: " << desc_ << " ID: " << id_;
	return temp.str();
}

void BugFix::GetInformationForNewClass()
{
	std::cout << "Please enter a description of the Bug Fix:\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, desc_);
	std::cout << "Please enter the bug ID:\n";
	std::cin >> id_;
	std::cout << "When was the bug fix started? dd/mm/yyyy hh:mm\n";
	std::string temp;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, temp);
	DateTime d(temp);
	start_ = d;
	std::cout << "When was the bug fix ended? dd/mm/yyyy hh:mm\n";
	std::getline(std::cin, temp);
	DateTime d2(temp);
	end_ = d2;
}


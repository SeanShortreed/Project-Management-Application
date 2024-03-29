#include "Utils.h"

Utils::Utils(){}
Utils::~Utils(){}

void Utils::CreateMeeting(Task * pT)
{
	std::shared_ptr<Meeting> m(new Meeting);
	m->SetUpNewClassFromUser();
	pT->GetTAs().push_back(m);
}

void Utils::CreateWorkDone(Task * pT)
{
	std::shared_ptr<WorkDone> w(new WorkDone);
	w->SetUpNewClassFromUser();
	pT->GetTAs().push_back(w);
}

void Utils::CreateBugFix(Task * pT)
{
	std::shared_ptr<BugFix> b(new BugFix);
	b->SetUpNewClassFromUser();
	pT->GetTAs().push_back(b);
}

void Utils::CreateResearch(Task * pT)
{
	std::shared_ptr<Research> r(new Research);
	r->SetUpNewClassFromUser();
	pT->GetTAs().push_back(r);
}

void Utils::Pause()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}
#pragma once
#include "Task.h"
class Utils
{
public:
	Utils();
	~Utils();

	static void CreateMeeting(Task * pT);
	static void CreateWorkDone(Task * pT);
	static void CreateBugFix(Task * pT);
	static void CreateResearch(Task * pT);
	static void Pause();
};


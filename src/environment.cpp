/* ---------------------------------------------------------------------------
** environment.cpp
** 
** -------------------------------------------------------------------------*/

#include <iostream>
#include "environment.h"

Environment::Environment() : Environment(m_stopRef)
{
}

Environment::Environment(char & stop) : BasicUsageEnvironment(*BasicTaskScheduler::createNew()), m_stop(stop)
{
	m_stop = 0;
}

Environment::~Environment()
{
	TaskScheduler* scheduler = &this->taskScheduler();
	delete scheduler;	
}

void Environment::mainloop()
{
	this->taskScheduler().doEventLoop(&m_stop);	
}

void Environment::stop()
{
	m_stop = 1;	
}

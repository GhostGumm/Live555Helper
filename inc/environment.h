/* ---------------------------------------------------------------------------
** environment.h
** 
** -------------------------------------------------------------------------*/

#pragma once

#include "BasicUsageEnvironment.hh"


class Environment : public BasicUsageEnvironment
{
	public:
		Environment();
		Environment(char& stop);
		virtual ~Environment();
	
	
		void mainloop();
		void stop();	
		
	protected:
		char& m_stop;		
		char  m_stopRef;		
};


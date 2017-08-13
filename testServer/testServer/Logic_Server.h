#pragma once
class Logic_Server
{
public:
	Logic_Server();
	~Logic_Server();
	static void accept_thread();
	static void worker_thread();

};


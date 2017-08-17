#pragma once
class Logic_Server
{
	std::map<int, Player> players;
	static int id;
	static HANDLE io;
public:
	Logic_Server();
	~Logic_Server();
	static void accept_thread();
	static void worker_thread();

};


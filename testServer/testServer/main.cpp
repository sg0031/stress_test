// testServer.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	Game_object* object = new Game_object;
	Game_object* player = new Player;

	object->get_id();
	player->get_id();

	delete object;
	delete player;


    return 0;
}


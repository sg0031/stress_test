// testServer.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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


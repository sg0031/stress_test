#include "stdafx.h"
#include "game_object.h"


Game_object::Game_object()
{
	std::cout << "object create" << std::endl;
}

Game_object::~Game_object()
{
	std::cout << "object delete" << std::endl;
}

void Game_object::set_object_data(int id, int state, float speed, D3DXVECTOR3 pos, D3DXVECTOR3 dir) {
	this->id = id;
	this->state = state;
	this->speed = speed;
	this->position = pos;
	this->direction = dir;
}
void Game_object::move() {

}
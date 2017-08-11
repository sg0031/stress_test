#pragma once
class Game_object
{
	int id;		// object id
	int state;	// object state 
	float speed;// object speed
	D3DXVECTOR3 position; //object position
	D3DXVECTOR3 direction; //object direction
public:
	Game_object();
	virtual ~Game_object();
	virtual void set_object_data(int id, int state, float speed, D3DXVECTOR3 pos, D3DXVECTOR3 dir);

	virtual void set_id(int id) { this->id = id; }
	virtual void set_state(int state) { this->state = state; }
	virtual void set_speed(float speed) { this->speed = speed; }
	virtual void set_position(D3DXVECTOR3 pos) { position = pos; }
	virtual void set_direction(D3DXVECTOR3 dir) { direction = dir; }

	virtual int get_id() { return id; }
	virtual int get_state() { return state; }
	virtual float get_speed() {	return speed;}
	virtual D3DXVECTOR3 get_position() { return position; }
	virtual D3DXVECTOR3 get_direction() { return direction; }

	virtual void move();
};


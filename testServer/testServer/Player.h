#pragma once
class Player:public Game_object
{
	float keyup_time;
	float keydown_time;
	float mouse_time;
public:
	Player();
	virtual ~Player();
	void set_up_time() { keyup_time = clock(); }
	void set_down_time() { keydown_time = clock(); }
	void set_mouse_time() { mouse_time = clock(); }

	float get_up_time() { return keyup_time; }
	float get_down_time() { return keydown_time; }
	float get_mouse_time() { return mouse_time; }
	
	float get_mouse_dealta_time() { return (clock() - mouse_time); }
	float get_keyborad_dealta_time() { return (clock() - keydown_time); }

	virtual void move();
};


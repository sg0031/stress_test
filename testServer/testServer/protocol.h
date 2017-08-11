#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma pack(push,1)
enum {
	SC_MOVE_POSITION = 200,
	SC_LOGIN_SUCESS,
	SC_LOGIN_FAIL
};

enum {
	CS_MOVE_POSITION =300,
	CS_LOGIN_REQUEST,
};

//server move packet
struct sc_move_packet {
	int packet_size;
	unsigned char packet_type;
	int id;
	D3DXVECTOR3 position;
};
//server login pakcet
struct sc_login_packet {
	int packet_size;
	unsigned char packet_type;
	int id;
};


//player move packet
struct cs_move_packet {
	int packet_size;
	unsigned char packet_type;
};
//player login packet
struct cs_login_packet {
	int packet_size;
	unsigned char packet_type;
};

#pragma pack(pop)
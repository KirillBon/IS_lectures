#include <iostream>
using namespace std;

enum States
{
	ON,
	OFF,
	GETTINGCOORDINATES,
	MoveForward,
	TurnRight,
	TurnLeft,
	PaintWall,
	PaintFloor,
	ReturnPlace

}
;

class Robot {
	States state;
public:
	void on() {
		state = States::ON;
	}

	void off() {
		state = States::OFF;
	}

	void getting_coordinated() {
		state = States::GETTINGCOORDINATES;
	}

	void move() {
		state = States::MoveForward;
	}

	void turnLeft() {
		state = States::TurnLeft;
	}

	void turnRight() {
		state = States::TurnRight;
	}

	void paint_wall() {
		state = States::PaintWall;

	}

	void paint_floor() {
		state = States::PaintFloor;

	}

	void return_on_his_place() {
		state = States::ReturnPlace;

	}

}
;

class CameraSystem {
	States state;
public:
	void detected_graffiti() {
		state = States::GETTINGCOORDINATES;
	}

	void call_user() {
		state = States::GETTINGCOORDINATES;
	}

	void call_robot_coordinates() {
		state = States::GETTINGCOORDINATES;
	}
}
;
int main() {
	Robot r;
	while (true)
	{
		char c;
		cin >> c;
		switch (c)
		{
		case 'm':
			r.move();
			break;

		case 'l':
			r.turnLeft();
			break;

		case 'r':
			r.turnRight();
			break;

		case 'f':
			r.paint_floor();
			break;

		case 'w':
			r.paint_wall();
			break;

		case 'g':
			r.getting_coordinated();
			break;

		case '0':
			r.off();
			break;

		case '1':
			r.on();
			break;

		case '0p':
			r.return_on_his_place();
			break;
		}

	}
}
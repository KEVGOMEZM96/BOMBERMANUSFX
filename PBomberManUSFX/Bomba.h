#pragma once
#include <iostream>
#include "GamePawn.h"

using namespace std;

class Bomba : public GamePawn
{
private:

public:
	//Constructor
	Bomba(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo) override;

	void update();
	void render();

};

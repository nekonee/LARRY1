#include <libtcod/libtcod.hpp>
#include "Actor.hpp"


Actor::Actor(int positionX, int positionY, int symbol, const TCODColor &color):
	positionX(positionX), positionY(positionY), symbol(symbol), color(color){}


void Actor::render() const{
	TCODConsole::root->setChar(positionX, positionY, symbol);
	TCODConsole::root->setCharForeground(positionX, positionY, color);
}

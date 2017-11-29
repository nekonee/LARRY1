#include <libtcod/libtcod.hpp>

int main(){

  int playerX = 80;
  int playerY = 50;


  TCODConsole::initRoot(160,100,"Larry1: jesus *steps on bone*",false);
  while(
        !TCODConsole::isWindowClosed()
        ){
    TCOD_key_t key;

    TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS,&key,NULL);

    switch(key.vk){
    case TCODK_UP:
      playerY--;
      break;

    case TCODK_DOWN:
      playerY++;
      break;

    case TCODK_LEFT:
      playerX--;
      break;

    case TCODK_RIGHT:
      playerX++;
      break;

    default:
      break;
    }

    TCODConsole::root->clear();
    TCODConsole::root->putChar(playerX, playerY,'X');
    TCODConsole::flush();
  }
  
  return 0;
}

class Actor{
public:
  int positionX;
  int positionY;
  int symbol;
  TCODcolor color;

  Actor(int positionX, int positionY, int symbol, const TCODColor color);
  void render() const;
};

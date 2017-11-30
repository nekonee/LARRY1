class Actor{
public:
  int positionX;
  int positionY;
  int symbol;
  TCODColor color;

  Actor(int positionX, int positionY, int symbol, const TCODColor &color);
  void render() const;
};

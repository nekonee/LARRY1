struct Tile{
  bool canWalk;
  Tile() : canWalk(true){}
};

class Map{
public:
  int width;
  int height;

  Map(int width, int height);
  ~Map();

  bool isWall(intx, int y) const;
  void render() const;

protected:
  Tile *tiles;

  void setWall(int x, int y);
};

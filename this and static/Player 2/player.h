class Player
{
    int id;
    int runs;
    int wicketsTaken;
    int inningsPlayed;
    char name[20];

    static int playerCount;

public:
    Player();
    Player(int, int, int, const char *);
    void display();
    void accept();
};


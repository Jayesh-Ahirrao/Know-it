class Account {
    int accountNumber;
    char name[20];
    float balance;

    static int accountCount;
    static float intRate;

    public: 
    Account();
    Account(const char* , float);

    void display();
    static int updateIntRate(float newRate);
};
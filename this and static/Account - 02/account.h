class Account {
    int accountNumber;
    char name[20];
    float balance;

    static int accountCount;
    static float intRate;
    static int activeAccountCounts;

    public: 
    Account();
    Account(const char* , float);
    ~Account();

    void display();
    static int updateIntRate(float newRate);
    static void displayActiveAccounts();
};
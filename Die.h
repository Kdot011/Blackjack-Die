#ifndef DIE_H
#define DIE_H
class Die {
private:
    int value;//storevalue of die
public:
    Die();//constructor to initialize die
    void roll();//function to roll die
    int getValue() const;//function to get value of die
};
#endif
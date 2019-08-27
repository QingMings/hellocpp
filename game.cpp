//
// Created by 试试帆布鞋 on 2019-08-27.
//


#include <iostream>

using namespace std;
bitset<8> isHungry{0b0000'0001};
bitset<8> isSad{0b0000'0010};
bitset<8> isMad{0b0000'0100};
bitset<8> isHappy{0b0000'1000};
bitset<8> isLaughing{0b0001'0000};
bitset<8> isAsleep{0b0010'0000};
bitset<8> isDead{0b0100'0000};
bitset<8> isCrying{0b1000'0000};
bitset<8> dog {};
/**
 * make dog options
 * @param options
 * @return
 */
 bitset<8> makeDog(bitset<8> options){
     dog |= options;
     return dog;
 }
/**
 * reset dog options
 * @param options
 * @return
 */
 bitset<8> resetDog(bitset<8> options) {
     dog &= ~ options;
     return dog;
 }
int main() {

    // make dog  Happy and Laughing
   bitset<8> dog_status= makeDog(isHappy | isLaughing);
    std::cout << dog_status << std::endl;
    // make dos dead
   dog_status =   makeDog(isDead);
    std::cout << dog_status << std::endl;

    // save dog life
    dog_status = resetDog(isDead);
    std::cout << dog_status << std::endl;
    std::cout <<"dog is "<<( (dog_status.test(7)) ? "Dead" : "noDead")<< std::endl;
    unsigned char mask7 {0b0100'0000};
    unsigned  char dogchar = 0b01001100;
    return 0;

}
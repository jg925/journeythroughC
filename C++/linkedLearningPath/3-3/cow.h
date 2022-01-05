#ifndef COW_H  // this is the other trick, only one is used typically.
#define COW_H
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

class cow {
   public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    void set_age(int new_age);
    void set_name(std::string new_name);
    void set_purpose(unsigned char new_purpose);

    std::string get_name();
    int get_age();
    unsigned char get_purpose();

   private:  // Keep data private as often as possible. Use setters + getters.
    std::string name;
    int age;
    unsigned char purpose;
};
#endif  // COW_H
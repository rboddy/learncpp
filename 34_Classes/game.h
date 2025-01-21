#ifndef DATE_H
#define DATE_H

#include <string>
class Game {
 private:
  double m_price{};
  char m_rating{};
  std::string m_title{"Game"};

 public:
  Game(double price, char rating, std::string& title);
  void print() const;

  double getPrice() const { return m_price; }
  char getRating() const { return m_rating; }
  const std::string& getTitle() const { return m_title; }
};

#endif

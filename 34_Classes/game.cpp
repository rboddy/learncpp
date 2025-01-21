#include "game.h"

#include <iostream>

Game::Game(double price, char rating, std::string& title)
    : m_price{price}, m_rating{rating}, m_title{title} {}

void Game::print() const {
  std::cout << "The game " << m_title << " is " << m_price << " dollars\n";
}

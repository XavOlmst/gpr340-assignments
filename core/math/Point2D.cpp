#include "Point2D.h"

const Point2D Point2D::UP = Point2D(0, -1);
const Point2D Point2D::DOWN = Point2D(0, 1);
const Point2D Point2D::LEFT = Point2D(-1, 0);
const Point2D Point2D::RIGHT = Point2D(1, 0);

bool Point2D::operator==(const Point2D& rhs) const { return y == rhs.y && x == rhs.x; }

bool Point2D::operator!=(const Point2D& rhs) const { return x != rhs.x || y != rhs.y; }

bool Point2D::operator<(const Point2D& rhs) const { return x + y < rhs.x + rhs.y; }

Point2D& Point2D::operator=(const Point2D& rhs) {
  // Check for self-assignment
  if (this == &rhs) return *this;
  x = rhs.x;
  y = rhs.y;
  return *this;
}

Point2D Point2D::operator+(const Point2D& rhs) const { return {x + rhs.x, y + rhs.y}; }

Point2D Point2D::operator-(const Point2D& rhs) const { return {x - rhs.x, y - rhs.y}; }
std::string Point2D::to_string() { return "{" + std::to_string(x) + ", " + std::to_string(y) + "}"; }
Point2D& Point2D::operator+=(const Point2D& rhs) {
  this->x += rhs.x;
  this->y += rhs.y;
  return *this;
}
Point2D& Point2D::operator-=(const Point2D& rhs) {
  this->x -= rhs.x;
  this->y -= rhs.y;
  return *this;
}

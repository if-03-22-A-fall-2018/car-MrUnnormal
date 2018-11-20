#include "car.h"

struct CarImplemantation {
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
};

Car jeep1 = {JEEP, SILVER, 80.0, 0.0, 0}
Car jeep2 = {JEEP, BLACK, 80.0, 0.0, 0}
Car aixam1 = {AIXAM, RED, 16.0, 0.0, 0}
Car multipla1 = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0}
Car multipla3 = {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0}
Car multipla2 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0}

Car get_car(CarType car)
{
  return 0;
}
enum CarType get_type(Car car)
{
  return JEEP;
}
enum Color get_color(Car car)
{
  return BLACK;
}
void init()
{

}
double get_fill_level(Car car)
{
  return 0.0;
}
double get_speed(Car car)
{
  return 0.0;
}
double get_acceleration_rate(Car car)
{
  return 0.0;
}
void set_acceleration_rate(Car car, double rate)
{

}

void accelerate(Car car)
{

}

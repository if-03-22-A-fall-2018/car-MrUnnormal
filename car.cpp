#include "car.h"

struct CarImplemantation {
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
  int maax_speed;
  bool is_rented;
};

struct CarImplemantation jeep1 = {JEEP, SILVER, 80.0, 0.0, 0};
struct CarImplemantation jeep2 = {JEEP, BLACK, 80.0, 0.0, 0};
struct CarImplemantation aixam1 = {AIXAM, RED, 16.0, 0.0, 0};
struct CarImplemantation multipla1 = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0};
struct CarImplemantation multipla3 = {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0};
struct CarImplemantation multipla2 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0};

Car cars[] = {&aixam1, &multipla1, &multipla2, &multipla3, &jeep1, &jeep2};

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

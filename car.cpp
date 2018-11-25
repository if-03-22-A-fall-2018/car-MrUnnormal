#include "car.h"
#include <stdlib.h>

struct CarImplementation{
  enum Color color;
  enum CarType type;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  int speed;
  bool is_rented;
};

#define CAR_NUM 6

struct CarImplementation aixam1={RED,AIXAM,45,16.0,0.0,0,false};
struct CarImplementation multipla1={BLUE,FIAT_MULTIPLA,170,65.0,0.0,0,false};
struct CarImplementation multipla2={BLUE,FIAT_MULTIPLA,170,65.0,0.0,0,false};
struct CarImplementation multipla3={ORANGE,FIAT_MULTIPLA,170,65.0,0.0,0,false};
struct CarImplementation jeep1={SILVER,JEEP,196,80.0,0.0,0,false};
struct CarImplementation jeep2={BLACK,JEEP,196,80.0,0.0,0,false};

Car cars[]={&aixam1,&multipla1,&multipla2,&multipla3,&jeep1,&jeep2};

Car get_car(CarType car)
{
  for(int i = 0; i < CAR_NUM; i++)
  {
    //if(cars[i] -> is_rented == false)
    {
      //return cars[i];
    }
  }
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

/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 08
* Title:			car.cpp
* Author:			Jan Kaufmann
* Due Date:		Nov. 26 2018
* ----------------------------------------------------------
*/
#include "car.h"

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

// Writing "Car" insted of "struct CarImplementation*" does not work
Car cars[]={&aixam1,&multipla1,&multipla2,&multipla3,&jeep1,&jeep2};

Car get_car(enum CarType car)
{
  for (int i = 0; i < CAR_NUM; i++)
  {
    if((cars[i]->type==car)&&(!cars[i]->is_rented))
    {
        cars[i]->is_rented = true;
        return cars[i];
    }
  }
  return 0;
}
enum CarType get_type(Car car)
{
  return car -> type;
}
enum Color get_color(Car car)
{
  return car -> color;
}
void init()
{
  for (int i = 0; i < CAR_NUM; i++)
   {
      cars[i]->is_rented = false;
      cars[i]->speed= 0;
      cars[i]->acceleration_rate= 0;
    }
}
double get_fill_level(Car car)
{
  return car -> fill_level;
}
double get_speed(Car car)
{
  return car -> speed;
}
double get_acceleration_rate(Car car)
{
  return car -> acceleration_rate;
}
void set_acceleration_rate(Car car, double rate)
{
  if(rate > 0)
  {
    car -> acceleration_rate = rate;
  }
}

void accelerate(Car car)
{
  if(car->speed+car->acceleration_rate<=car->max_speed)
    {
        car->speed+=car->acceleration_rate*4;
    }
    else
    {
        car->speed=car->max_speed;
    }
}

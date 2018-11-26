/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			Jan Kaufmann
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImplementation* Car;

enum CarType {AIXAM, FIAT_MULTIPLA, JEEP};
enum Color{RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

void init();
Car get_car(CarType car);
enum CarType get_type(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
double get_speed(Car car);
double get_acceleration_rate(Car car);
void set_acceleration_rate(Car car, double acceleration_rate);
void accelerate(Car car);

#endif

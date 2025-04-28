#include "Random.h"

std::mt19937 Random::rand(time(0));
unsigned int Random::rnd() {
	return Random::rand();
}
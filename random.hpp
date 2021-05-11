#pragma once

#include <chrono>
#include <random>
#include <algorithm>
// #include <iterator>

namespace libmath {

class Random
{
private:
	const long long __seed{std::chrono::steady_clock::now().time_since_epoch().count()};

	std::default_random_engine __generator{__seed};
	std::uniform_real_distribution<double> __distribution{0.0, 1.0};

public:
	// Random()
	// : __generator{static_cast<unsigned int>(__seed)}
	// {}

	auto operator()() -> double
	{
		return __distribution(__generator);
	}
	auto One(int lowerLimit, int upperLimit) -> int {
		std::vector<int> v = {};
		for (auto k = lowerLimit; k < upperLimit; k++) {
			v.emplace_back(k);
		}
		std::shuffle(v.begin(), v.end(), __generator);

		return *v.begin();

	}
}; // end of class Random

} // end of namespace libmath
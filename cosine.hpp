#ifndef DPSCPP_COSINE_HPP_
#define DPSCPP_COSINE_HPP_
#define _USE_MATH_DEFINES
#include "signal.hpp"
#include <cmath>
class cosine : public signal
{
	public:
		cosine(double frequency, double phase);
		cosine(const cosine &toCopy) noexcept;
		cosine& operator=(const cosine &toCopy) noexcept;
		cosine(cosine &&toMove) noexcept;
		cosine& operator=(cosine &&toMove) noexcept;
		std::complex<double>	get(long long int n);
		double getFrequency() const;
		void setFrequency(double frequency);
		double getPhase() const;
		void setPhase(double phase);
	private:
		double frequency;
		double phase;

};






#endif /* DPSCPP_COSINE_HPP_ */

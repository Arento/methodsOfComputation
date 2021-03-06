#pragma once
#include <vector>
#include <iosfwd>
#include <functional>

class Poly {
  public:
  std::vector<double> coefs;

  Poly() = default;
  explicit Poly(double zeroCoef);
  explicit Poly(double zeroCoef, double firstCoef);
  virtual double operator()(double val) const;
  Poly operator*(const Poly& op) const;
  Poly operator+(const Poly& op) const;
  Poly operator-(const Poly& op) const;
  Poly operator*(double val) const;
  Poly operator/(double val) const;
  Poly operator+(double val) const;
  Poly operator-(double val) const;
  Poly& operator=(const Poly& op);
  void reduceZeros();
  friend std::ostream& operator<<(std::ostream& os, const Poly& poly);
  friend Poly operator*(double val, const Poly& poly);
  friend Poly operator/(double val, const Poly& poly);
  friend Poly operator+(double val, const Poly& poly);
};

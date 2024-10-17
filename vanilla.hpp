#ifndef __VANILLA_OPTION_H
#define __VANILLA_OPTION_H

class VanillaOption {
  private:
  void init();
  void copy(const VanillaOption& rhs);

  double K; // Strike Price
  double r; // Interest rate
  double T; // Expiry time of option
  double S; // Underlying Asset Price
  double sigma; // Volatility of underlying asset

  public:

};

#endif
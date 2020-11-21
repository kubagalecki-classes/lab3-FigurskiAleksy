#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int zaglowki = 0;

    if(towar == 0)
    {
      return 0;
    }
      else
    {

      int towar_ile =0;

      while (towar_ile < towar)
      {
        Stocznia stocznia{}

        Statek* statek1 = stocznia();

        towar_ile = towar_ile + statek1->transportuj();

        if (statek1 == dynamic_cast<Zaglowiec>(statek1))
        {
          zaglowki++;
        }
        delete statek1;
      }
      return zaglowki
    }
}
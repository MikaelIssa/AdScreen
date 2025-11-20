#ifndef AD_MANAGER_HPP
#define AD_MANAGER_HPP

#include "../include/advertiser.hpp"
#include <vector>
#include <random>

class AdManager{
    private:
    std::vector<Advertiser> advertisers;       //lista med alla företag
    std::vector<int> weights; // betalningsbelopp för viktad skumpning
    std::default_random_engine rng;        // slumptalsgenerator
    std::discrete_distribution<int> dist; // fördelning baserat på weights

    public:
        AdManager(); // konstruktor
        void addAdvertiser(const Advertiser &adv);  //läg till ett företag
        Advertiser& getNextAdvertiser();  //välj nästa företag baserat på viktad slump

};
#endif
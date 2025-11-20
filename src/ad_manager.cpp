#include "include/ad_manager.hpp"
#include <chrono>

//konstruktor som initierar slumptalsgeneratorn med aktuell tid

AdManager::AdManager(){
    rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
}


// Lägger till ett företag i listan och uppdaterar viktningen
void AdManager::addAdvertiser(const Advertiser &adv) {
    advertisers.push_back(adv);               // Lägg till företaget
    weights.push_back(adv.getPaidAmount());   // Lägg till betalning som vikt

    // Skapa ny fördelning baserat på uppdaterade weights
    dist = std::discrete_distribution<int>(weights.begin(), weights.end());
}

// Väljer nästa företag baserat på viktad slump
Advertiser& AdManager::getNextAdvertiser() {
    int index = dist(rng);                    // Slumpa ett index baserat på vikt
    return advertisers[index];                // Returnera företaget
}
#include "include/advertiser.hpp"

//konstruktor som sätter namn och betalning och nollstället annonsindex

Advertiser::Advertiser(std::string name, int paidAmount)
            : name(name), paidAmount(paidAmount), currentAdIndex(0) {}


// läger till en annons och om den ska blinka

void Advertiser::addAd(std::string adText, bool blink){

    ads.push_back(adText); // lägg till annonsen i listan
    blinkFlags.push_back(blink); //lägg till en blink-flagga i samma ordning
}

//returnerar företagsnamnet

std::string Advertiser::getName() const {
    return name;
}

//returnerar hur mycket företaget har betalat
int Advertiser::getPaidAmount() const{
    return paidAmount;
}


//returnerar nästa annons i turordning och sätter blink flaggan
std::string Advertiser::getNextAd(bool &shouldBlink){

    if(ads.empty()) return "";

    //hämta blink flagga för aktuell annons
    shouldBlink = blinkFlags[currentAdIndex];
     //hämta själva annonsen
     std::string ad = ads[currentAdIndex];

     // går vidare till nästa annons och loopar tillbaka till början

     currentAdIndex = (currentAdIndex + 1) % ads.size();
     return ad;
}
#ifndef ADVERTISER_HPP
#define ADVERTISER_HPP

#include <vector>
#include <string>

// denna klass kommer representera företag som visar annonser
class Advertiser {
    private:
        std::string name; // företagsnamn
        int paidAmount; // hur mycket företaget har betalat
        std::vector<std::string> ads; // lista med annonser
        std::vector<bool> blinkFlags; // // om annonsen ska blinka = true
        int currentAdIndex; // håller koll på vilken annons som ska visas


    public:
        //konstruktor - skapar ett företag med namn och betalning
        Advertiser(std::string name, int paidAmount);


        //lägger till en annons + info om den ska blinka
        void addAd(std::string adText, bool blink);

        //returnerar företagsnmanet

        std::string getName() const;

        //returnerar hur mycket företaget har betalat

        int getPaidAmount() const;

        //returnerar nästa annons och sätter blink -flaggan
        std::string getNextAd(bool &shouldBlink);
};

#endif
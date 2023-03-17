#include <iostream>
int main(){
short numbercard, numberpieces, nametypeNum; //1000 - 9999
std::string nameclass, nametype;

std::cout << "min fadlik sayidi 'adkhil raqm tartibik aladhi hasalat ealayh min rajul altadhakir: ";
std::cin >> numbercard;

if (numbercard >= 1000 && numbercard <= 9999)
{
   std::cout << "\n1- American_cream_cheeses" << "\n";
   std::cout << "\n2- American_soft_cheeses" << "\n";
   std::cout << "\n3- American_hard_cheeses" << "\n";

   std::cout << "\n4- American_blue_cheeses" << "\n";
   std::cout << "\n5- Processed_cheeses" << "\n";
   std::cout << "\n6- American_Fresh_cheeses" << "\n";

   std::cout << "\naikhtar sinf aljubnat alati tufadiluha min khilal aidikhal raqm tartibiha 'aw aismiha: ";
   std::cin >> nameclass;

//! 1-American cream cheeses
   if (nameclass == "American_cream_cheeses" || nameclass == "1")
   {
    std::cout << "\n01- Bergenost (1kg = 15$)\n02- Cream_cheese (1kg = 22$)\n03- Creole_cream_cheese (1kg = 30$)\n04- Cup_cheese (1kg = 22$)\n05- Red_Hawk_cheese (1kg = 32$)\n06- Kunik_cheese (1kg = 40$)";
    std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
    std::cin >> nametype;

    double Bergenost = 15, Cream = 22, Creole_cream = 30, Cup = 22, Red_Hawk = 32, Kunik = 40;

std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "Bergenost" || nametype == "1")
std::cout << "The total price is (" << Bergenost*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Cream_cheese" || nametype == "2")
std::cout << "The total price is (" << Cream*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Creole_cream_cheese" || nametype == "3")
std::cout << "The total price is (" << Creole_cream*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Cup_cheese" || nametype == "4")
std::cout << "The total price is (" << Cup*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Red_Hawk_cheese" || nametype == "5")
std::cout << "The total price is (" << Red_Hawk*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Kunik_cheese" || nametype == "6")
std::cout << "The total price is (" << Kunik*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

   }


//! 2-American soft cheeses
   if (nameclass == "American_soft_cheeses" || nameclass == "2")
   {
 double BellaVitano = 10, Brick = 20, curd = 30, Colby = 40, Colby_Jack = 50, Farmer = 60, Hoop = 70, String = 80, Cougar_Gold = 90, Humboldt_Fog = 100, Liederkranz = 110, Monterey_Jack = 120, Pepper_jack = 130, Pinconning = 140, Pizza = 150, Muenster = 160, Swiss = 170, Vermont_cheddar = 180;

std::cout << "\n1- BellaVitano_Cheese (1kg = 10$)\n";
std::cout << "\n2- Brick_cheese (1kg = 20$)\n";
std::cout << "\n3- Cheese_curd (1kg = 30$)\n";
std::cout << "\n4- Colby_cheese (1kg = 40$)\n";
std::cout << "\n5- Colby_Jack_cheese (1kg = 50$)\n";
std::cout << "\n6- Farmer_cheese (1kg = 60$)\n";
std::cout << "\n7- Hoop_cheese (1kg = 70$)\n";
std::cout << "\n8- String_cheese (1kg = 80$)\n";
std::cout << "\n9- Cougar_Gold_cheese (1kg = 90$)\n";
std::cout << "\n10- Humboldt_Fog (1kg = 100$)\n";
std::cout << "\n11- Liederkranz_cheese (1kg = 110$)\n";
std::cout << "\n12- Monterey_Jack (1kg = 120$)\n";
std::cout << "\n13- Pepper_jack_cheese (1kg = 130$)\n";
std::cout << "\n14- Pinconning_cheese (1kg = 140$)\n";
std::cout << "\n15- Pizza_cheese (1kg = 150$)\n";
std::cout << "\n16- Muenster_cheese (1kg = 160$)\n";
std::cout << "\n17- Swiss_cheese (1kg = 170$)\n";
std::cout << "\n18- Vermont_cheddar (1kg = 180$)\n";

std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
std::cin >> nametype;

std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "BellaVitano_Cheese" || nametype == "1")
std::cout << "The total price is (" << BellaVitano*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Brick_cheese" || nametype == "2")
std::cout << "The total price is (" << Brick*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Cheese_curd" || nametype == "3")
std::cout << "The total price is (" << curd*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Colby_cheese" || nametype == "4")
std::cout << "The total price is (" << Colby*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Farmer_cheese" || nametype == "5")
std::cout << "The total price is (" << Farmer*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Hoop_cheese" || nametype == "6")
std::cout << "The total price is (" << Hoop*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "String_cheese" || nametype == "7")
std::cout << "The total price is (" << String*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Cougar_Gold_cheese" || nametype == "8")
std::cout << "The total price is (" << Cougar_Gold*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Humboldt_Fog" || nametype == "9")
std::cout << "The total price is (" << Humboldt_Fog*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Liederkranz_cheese" || nametype == "10")
std::cout << "The total price is (" << Liederkranz*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Monterey_Jack" || nametype == "11")
std::cout << "The total price is (" << Monterey_Jack*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Pepper_jack_cheese" || nametype == "12")
std::cout << "The total price is (" << Pepper_jack*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Pinconning_cheese" || nametype == "13")
std::cout << "The total price is (" << Pinconning*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Pizza_cheese" || nametype == "14")
std::cout << "The total price is (" << Pizza*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Muenster_cheese" || nametype == "15")
std::cout << "The total price is (" << Muenster*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Swiss_cheese" || nametype == "16")
std::cout << "The total price is (" << Swiss*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Vermont_cheddar" || nametype == "17")
std::cout << "The total price is (" << Vermont_cheddar*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

   }

//! 3-American hard cheeses
if (nameclass == "American_hard_cheeses" || nameclass == "3"){

double Capricious = 44, American_generic_parmesan = 55;

std::cout << "\n1- Capricious (1kg = 44$)\n";
std::cout << "\n2- American_generic_parmesan (1kg = 55$)\n";

std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
std::cin >> nametype;

std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "Capricious" || nametype == "1")
std::cout << "The total price is (" << Capricious*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "American_generic_parmesan" || nametype == "2")
std::cout << "The total price is (" << American_generic_parmesan*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

   }


//! 4-American blue cheeses
if (nameclass == "American_blue_cheeses" || nameclass == "4") {

double Maytag_Blue = 19;

std::cout << "\n1- Maytag_Blue_cheese (1kg = 19$)\n";
std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
std::cin >> nametype;


std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "Maytag_Blue_cheese" || nametype == "1")
std::cout << "The total price is (" << Maytag_Blue*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

}


//! 5-Processed cheeses
if (nameclass == "Processed_cheeses" || nameclass == "5") {

double American = 40, Government = 1600, Nacho = 2200, Pimento = 200, Pizza_cheese = 147, Provel_cheese = 159, Velveeta = 753;

std::cout << "\n1- American_cheese (1kg = 40$)\n";
std::cout << "\n2- Government_cheese (1kg = 1600$)\n";
std::cout << "\n3- Nacho_cheese (1kg = 2200$)\n";
std::cout << "\n4- Pimento_cheese (1kg = 200$)\n";
std::cout << "\n5- Pizza_cheese (1kg = 147$)\n";
std::cout << "\n6- Provel_cheese (1kg = 159$)\n";
std::cout << "\n7- Velveeta (1kg = 753$)\n";


std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
std::cin >> nametype;


std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "American_cheese" || nametype == "1")
std::cout << "The total price is (" << American*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Government_cheese" || nametype == "2")
std::cout << "The total price is (" << Government*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Nacho_cheese" || nametype == "3")
std::cout << "The total price is (" << Nacho*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Pimento_cheese" || nametype == "4")
std::cout << "The total price is (" << Pimento*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Pizza_cheese" || nametype == "5")
std::cout << "The total price is (" << Pizza_cheese*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Provel_cheese" || nametype == "6")
std::cout << "The total price is (" << Provel_cheese*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";

if (nametype == "Velveeta" || nametype == "7")
std::cout << "The total price is (" << Velveeta*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";


}


//! 6-American Fresh cheeses
if (nameclass == "American_Fresh_cheeses" || nameclass == "6"){

double Cottage = 78;

std::cout << "\n1- Cottage_Cheese (1kg = 78$)\n";

std::cout << "\n\nqum bi'iidkhal tartib alnawe aladhi turiduh: ";
std::cin >> nametype;

std::cout << "\nkam qiteat turid eazizi?\n";
std::cin >>  numberpieces;

if (nametype == "Cottage_Cheese" || nametype == "1")
std::cout << "The total price is (" << Cottage*numberpieces << "$) min fadlik adhhab lilkashir lilshira'i. wshkraan liziaratik.";


}

    
}

else

std::cout << "\nasfu, min fadlik ahsul ealaa raqm tartib min rajul altadhakir hataa yatima eard 'anwae aljubn ealayki.";


    return 0;
}
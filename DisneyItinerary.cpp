#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// Author: Corah Price
// Created 11/12/2023
// I designed this project to produce a randomized itinerary for the user at a Disney Park of their choice.

// Random shuffle function using rand()
template <typename RandomIt>
void customShuffle(RandomIt first, RandomIt last) {
    for (auto it = first; it != last; ++it) {
        std::iter_swap(it, first + rand() % (last - first));
    }
}

// Function to generate random itinerary for each park
vector<string> hollywoodStudios() {
    vector<string> activities = {
            "Meet Mickey Mouse",
            "Ride the Twilight Zone Tower of Terror",
            "Experience Rock 'n' Roller Coaster starring Aerosmith",
            "Watch the Beauty and the Beast - Live on Stage",
            "Watch the Muppets Show",
            "Watch the Indiana Jones Epic Stunt Spectacular!",
            "Ride Slinky Dog Dash",
            "Ride Alien Swirling Saucers",
            "Ride Mickey and Minnie's Runaway Railway",
            "Ride Rise of the Resistance",
            "Ride Star Tours",
            "Ride Millennium Falcon: Smugglers Run",
            "Ride Toy Story Mania",
            "Watch Disney Junior Play and Dance",
            "Meet Olaf",
            "Meet Chewbacca",
            "Meet BB-8",
            "Meet Darth Vader",
            "Watch the Frozen Sing-Along Celebration",
            "Watch the Fantasmic! nighttime spectacular"
    };
    customShuffle(activities.begin(), activities.end());
    return activities;
}


vector<string> animalKingdom() {
    vector<string> activities = {
            "Ride Expedition Everest",
            "Ride Avatar Flight of Passage",
            "Ride Na'vi River Journey",
            "Explore Gorilla Falls Exploration Trail",
            "Watch Festival of the Lion King",
            "Take the train to Rafiki's Planet Watch",
            "Watch Finding Nemo - The Musical",
            "Ride Kilimanjaro Safaris",
            "Explore Pandora - The World of Avatar",
            "Ride Dinosaur",
            "Meet Moana",
            "Explore the Maharajah Jungle Trek",
            "Ride Kali River Rapids",
            "Meet Mickey and Minnie at Adventurers Outpost",
            "Watch UP! A Great Bird Adventure",
            "Explore Discovery Island Trails",
            "Ride TriceraTop Spin",
            "Watch Rivers of Light nighttime show",
            "Watch It's Tough to be a Bug!",
    };
    customShuffle(activities.begin(), activities.end());
    return activities;
}

vector<string> magicKingdom() {
    vector<string> activities = {
            "Astro Orbiter",
            "The Barnstormer",
            "Big Thunder Mountain Railroad",
            "Buzz Lightyear's Space Ranger Spin",
            "Casey's Corner Pianist",
            "Character Greeting near Buzzlightyear's Star Command",
            "Country Bear Jamboree",
            "The Dapper Dans",
            "Disney Festival of Fantasy Parade",
            "Enchanted Tales with Belle",
            "Frontierland Shootin' Arcade",
            "The Hall of Presidents",
            "Happily Ever After",
            "Haunted Mansion",
            "it's a small world",
            "Jungle Cruise",
            "Let the Magic Begin",
            "Liberty Square Riverboat",
            "Mad Tea Party",
            "The Magic Carpets of Aladdin",
            "Main Street Vehicles",
            "The Many Adventures of Winnie the Pooh",
            "Meet Ariel at Her Grotto",
            "Meet Characters from Aladdin in Adventureland",
            "Meet Characters at Princess FairyTale Hall",
            "Meet Daring and Dashing Disney Pals as Circus Stars at Pete's Silly SLideshow",
            "Meet Mickey at Town Square Theater",
            "Meet Mirabel at Fairytale Garden",
            "Meet Winnie the Pooh and Tigger at the Thotful Spot",
            "Mickey's Magical Friendship Faire",
            "Mickey's PhilharMagic",
            "Monsters Inc. Laugh Floor",
            "Peter Pan's FLight",
            "A Pirate's Adventure",
            "Pirates of the Caribbean",
            "Prince Charming Regal Carrousel",
            "Seven Dwarfs Mine Train",
            "Space Mountain",
            "Swiss Family TreeHouse",
            "Tom Sawyer Island",
            "Tomorrowland Speedway",
            "Tomorrowland Transit Authority PeopleMover",
            "Tron Lightcycle Run",
            "Under the Sea - Journey of the Little Mermaid",
            "Walt Disney World Railroad",
            "Walt Disney's Carousel of Progress",
            "Walt Disney's Enchanted Tiki Room"
    };
    customShuffle(activities.begin(), activities.end());
    return activities;
}

vector<string> epcot() {
    vector<string> activities = {
            "Advanced Training Lab",
            "The American Adventure",
            "American Heritage Gallery",
            "Awesome Planet",
            "Beauty and the Beast Sing-Along",
            "Bijutsu-kan Gallery",
            "Bruce's Shark World",
            "Canada Far and Wide in Circle-Vision 360",
            "Command Performance",
            "Disney and Pixar Short Film Festival",
            "Disney's DuckTales World Showcase Adventure",
            "Entertainment at Canada Mill Stage",
            "Entertainment at Germany Gazebo",
            "Frozen Ever After",
            "Gallery of Arts and History",
            "Gran Fiesta Tour Starring The Three Caballeros",
            "House of Whispering Willows",
            "Impressions de France",
            "JAMMitors",
            "Journey Into Imagination With Fignment",
            "Journey of Water",
            "Living with the Land",
            "Masturiza",
            "Meet a Friend from the Hundred Acre Wood in the United Kingdom",
            "Meet Alice in the United Kingdom",
            "Meet Anna and Elsa at Royal Sommerhus",
            "Meet Asha Near World Showcase Plaza",
            "Meet Belle in France",
            "Meet Disney Friends Near Epcot Main Entrance",
            "Meet Donald Duck in Mexico",
            "Meet Favorite Disney Pals at Disney and Pixar Short Film Festival",
            "Meet Figment Inside ImageWorks",
            "Meet Joy Inside ImageWorks",
            "Meet Mulan in China",
            "Meet Princess Aurora in France",
            "Meet Princess Jasmine in Morocco",
            "Meet Snow White in Germany",
            "Mexico Folk Art Gallery",
            "Mission: SPace",
            "Music of Mexico",
            "Project Tomorrow: Inventing the Wonders of the Future",
            "Reflections of China",
            "Remy's Ratatouille Adventure",
            "Rose & Crown Pub Musician",
            "SeaBase",
            "The Seas with Nemo & Friends",
            "Sergio",
            "Soarin'",
            "Spaceship Earth",
            "Stave Church Gallery",
            "Test Track",
            "Voices of Liberty"

    };
    customShuffle(activities.begin(), activities.end());
    return activities;
}


// Quick service based on park
vector<string> getQuickService(const string& park, int numQuickService) {
    vector<string> quickServiceOptions;
    if (tolower(park[0]) == 'h') {
        quickServiceOptions = {
                "Backlot Express",
                "ABC Commissary",
                "Docking Bay 7 Food and Cargo",
                "BaseLine Tap House",
                "Catalina Eddie's",
                "Dockside Diner",
                "Epic Eats",
                "Fairfax Fare",
                "Hollywood Scoops",
                "Joffrey's",
                "Kat Saka's Kettle",
                "Milk Stand",
                "Oga's Cantina",
                "Pizzerizzo",
                "Ronto Roasters",
                "Rosie's All-American Cafe",
                "The Trolley Car Cafe",
                "Woody's Lunch Box",
                "Tune-In Lounge",
                "Starbucks"
        };
    } else if (tolower(park[0]) == 'a') {
        quickServiceOptions = {
                "Satu'li Canteen",
                "Creature Comforts",
                "Flame Tree Barbecue",
                "Pizzafari",
                "Yak & Yeti Local Foods",
                "Eight Spoon Cafe",
                "Anandapur Ice Cream Truck",
                "Dawa Bar",
                "Drinkwallah",
                "Harambe Market",
                "Kusafiri Coffe Shop & Bakery",
                "Mahindi",
                "Nomad Lounge",
                "Pongu Pongu",
                "Restaurantosaurus",
                "The Smiling Crocodile",
                "Terra Treats",
                "Thirsty River Bar",
                "Trilo-Bites",
                "Warung Outpost"
        };
    } else if (tolower(park[0]) == 'm') {
        quickServiceOptions = {
                "Aloha Isle",
                "Auntie Gravity's Galactic Goodies",
                "Casey's Corner",
                "Cheshire Cafe",
                "Cool Ship",
                "Columbia Harbour House",
                "Cosmic Ray's Starlight Cafe",
                "Gaston's Tavern",
                "Golden Oak Outpost",
                "Liberty Square Market",
                "The Lunching Pad",
                "Main Street Bakery",
                "Pecos Bill Tall Tale Inn and Cafe",
                "Pinocchio Village Haus",
                "Plaza Ice Cream Parlor",
                "Prince Eric's Village Market",
                "Sleepy Hollow",
                "Storybook Treats",
                "Sunshine Tree Terrace",
                "Tortuga Tavern",
                "Westward Ho"
        };
    } else if (tolower(park[0]) == 'e') {
        quickServiceOptions = {
                "Block & Hans",
                "Choza de Margarita",
                "Connections Cafe and Eatery",
                "Crepes A Emporter by La Creperie de Paris",
                "Fife & Drum Tavern",
                "Gelateria Toscana",
                "Joy of Tea",
                "Kabuki Cafe",
                "Kringla Bakeri Og Kafe",
                "La Cantina de San Angel",
                "La Cava del Tequila",
                "The Land Cart",
                "L'Artisan des Glaces",
                "Les Halles Boulangerie-Patisserie",
                "Les Vins des Chefs de France",
                "Lotus Blossom Cafe",
                "Oasis Sweets & Sips",
                "Popcorn in Canada",
                "Refreshment Station",
                "Refreshment Port",
                "Refreshment Outpost",
                "Regal Eagle Smokehouse: Craft Drafts & Barbecue",
                "Rose & Crown Pub",
                "Sommerfest",
                "Sunshine Seasons",
                "Tutto Gusto Wine Cellar",
                "UK Beer Cart",
                "Yorkshire County Fish Shop"
        };
    } else {
        // Handle the case where the park is not recognized
        cout << "Invalid park name for quick-service options.\n";
        return {};
    }

    customShuffle(quickServiceOptions.begin(), quickServiceOptions.end());

    // Resize to the user-defined limit
    quickServiceOptions.resize(min(numQuickService, static_cast<int>(quickServiceOptions.size())));
    return quickServiceOptions;
}

// Sit-down dining based on park
vector<string> getSitdownDining(const string& park, int numSitdown) {
    vector<string> sitDownDiningOptions;
    if (tolower(park[0]) == 'h') {
        sitDownDiningOptions = {
                "50's Prime Time Cafe",
                "Sci-Fi Dine-In Theater Restaurant",
                "Hollywood Brown Derby",
                "Hollywood & Vine",
                "Mama Melrose's Ristorante Italiano",
                "Roundup Rodeo BBQ"
        };
    } else if (tolower(park[0]) == 'a') {
        sitDownDiningOptions = {
                "Tusker House",
                "Yak & Yeti",
                "Tiffins Restaurant"
        };
    } else if (tolower(park[0]) == 'm') {
        sitDownDiningOptions = {
                "Be Our Guest Restaurant",
                "Cinderella's Royal Table",
                "Crystal Palace",
                "Jungle Navigation Co. LTD Skipper Canteen",
                "The Diamond Horseshoe",
                "Liberty Tree Tavern",
                "The Plaza Restaurant",
                "Tony's Town Square Restaurant"
        };
    } else if (tolower(park[0]) == 'e') {
        sitDownDiningOptions = {
                "Akershus Royal Banquet Hall",
                "Biergarten Restaurant",
                "Chefs de France",
                "Coral Reef Restaurant",
                "Garden Grill Restaurant",
                "Katsura Grill",
                "La Cava Experience",
                "La Creperie de Paris",
                "La Hacienda",
                "Le Cellier Steakhouse",
                "Monsieur Paul",
                "Nine Dragons Restaurant",
                "Restaurant Marrakesh",
                "Rose & Crown Dining",
                "San Angel Inn Restaurante",
                "Shiki-Sai: Sushi Izakaya",
                "Space 220",
                "Spice Road Table",
                "Takumi-Tei",
                "Teppan Edo",
                "Tutto Italia Ristorante",
                "Via Napoli Ristorante e Pizzeria"
        };
    } else {
        // Handle the case where the park is not recognized
        cout << "Invalid park name for sit-down dining options.\n";
        return {};
    }

    customShuffle(sitDownDiningOptions.begin(), sitDownDiningOptions.end());

    // Resize to the user-defined limit
    sitDownDiningOptions.resize(min(numSitdown, static_cast<int>(sitDownDiningOptions.size())));

    return sitDownDiningOptions;
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    cout << "Which Disney Park are you at or planning on going to? ";
    string park;
    getline(cin, park);

    vector<string> activities;
    int numActivities;

    // Prompt the user for the number of activities
    cout << "How many Activities do you want planned? ";
    cin >> numActivities;
    cin.ignore(); // Clear the input buffer

    // Call the appropriate function based on the selected park
    if (tolower(park[0]) == 'h') {
        activities = hollywoodStudios();
    } else if (tolower(park[0]) == 'a') {
        activities = animalKingdom();
    } else if (tolower(park[0]) == 'm') {
        activities = magicKingdom();
    } else if (tolower(park[0]) == 'e') {
        activities = epcot();
    } else {
        cout << "Invalid Park name. Please enter one of: Hollywood Studios, Animal Kingdom, Magic Kingdom, or Epcot.\n";
        return 1; // Exit the program with an error code
    }

    // Shuffle the activities and limit to the requested number
    customShuffle(activities.begin(), activities.end());
    activities.resize(numActivities);

    // Ask the user for quick-service and sit-down dining options
    int numQuickService, numSitdown;

    cout << "How many Quick Service options do you want? ";
    cin >> numQuickService;
    // Clear input buffer
    cin.ignore();

    cout << "How many Table Service options do you want? ";
    cin >> numSitdown;
    // Clear input buffer
    cin.ignore();

    // Display the randomized itinerary for the selected park
    cout << "\nYour Itinerary is all set. Have a magical day!\n";
    cout << "\nActivities:\n";
    for (const auto& activity : activities) {
        cout << "- " << activity << "\n";
    }

    // Get and display random quick-service options
    if (numQuickService > 0) {
        vector<string> quickServiceOptions = getQuickService(park, numQuickService);
        cout << "\nQuick Service:\n";
        for (const auto& option : quickServiceOptions) {
            cout << "- " << option << "\n";
        }
    }

    // Get and display random sit-down dining options
    if (numSitdown > 0) {
        vector<string> sitdownDiningOptions = getSitdownDining(park, numSitdown);
        cout << "\nTable Service:\n";
        for (const auto& option : sitdownDiningOptions) {
            cout << "- " << option << "\n";
        }
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    
    cout << "What English idiom? ";
    cin >> a;
    
    if (a == "REDNECK") {
        cout << "REDNECK is an insensitive person";
    } else if (a == "GOLDEN RULE") {
        cout << "GOLDEN RULE is a wise rule";
    } else if (a == "AIRY-FAIRY") {
        cout << "AIRY-FAIRY is lofty and impractical";
    } else if (a == "WATERSHED") {
        cout << "WATERSHED is a decisive turning point";
    } else if (a == "DOWN-TO-EARTH") {
        cout << "DOWN-TO-EARTH is practical and sensible";
    } else if (a == "STICK-IN-THE-MUD") {
        cout << "STICK-IN-THE-MUD is someone without initiative who never takes a chance";
    } else if (a == "TIP OF THE ICEBERG") {
        cout << "TIP OF THE ICEBERG is evidence that a great deal more exists but remains hidden";
    } else if (a == "WINDBAG") {
        cout << "WINDBAG is someone who is talkative but incapable of action";
    } else if (a == "TIME-CONSUMING") {
        cout << "TIME-CONSUMING means requiring a great deal of time";
    } else if (a == "ON THE SPUR OF THE MOMENT") {
        cout << "ON THE SPUR OF THE MOMENT means on a sudden impulse, without premeditation";
    } else if (a == "LET BY-GONES BE BY-GONES") {
        cout << "LET BY-GONES BE BY-GONES means let's forgive and forget";
    } else if (a == "ALIVE AND KICKING") {
        cout << "ALIVE AND KICKING means very much alive";
    } else if (a == "SICK TO DEATH") {
        cout << "SICK TO DEATH means exasperated beyond endurance";
    } else if (a == "LIKE AN ANGEL") {
        cout << "LIKE AN ANGEL means with the utmost innocence and purity";
    } else if (a == "BED OF ROSES") {
        cout << "BED OF ROSES means a pleasant, enjoyable situation without any drawbacks and irritations";
    } else if (a == "PRIMROSE PATH") {
        cout << "PRIMROSE PATH means the path of self-indulgence that ends in ruin";
    } else if (a == "LOTUS-EATERS") {
        cout << "LOTUS-EATERS are people who neglect their friends and families in order to enjoy a life of luxury and idleness";
    } else if (a == "PICK OF THE BUNCH") {
        cout << "PICK OF THE BUNCH means the outstanding one in a group";
    } else if (a == "HIT THE HAY") {
        cout << "HIT THE HAY means to go to bed";
    } else if (a == "LAST STRAW") {
        cout << "LAST STRAW means beyond limit; the breaking point";
    } else if (a == "GO HAYWIRE") {
        cout << "GO HAYWIRE means to go crazy";
    } else if (a == "SLEEP LIKE A DOG") {
        cout << "SLEEP LIKE A DOG means to sleep soundly";
    } else if (a == "LAP-DOG") {
        cout << "LAP-DOG means to be pampered and overprotected";
    } else if (a == "LOOK SHEEPISH") {
        cout << "LOOK SHEEPISH means to look embarrassed or guilty";
    } else if (a == "SCAPEGOAT") {
        cout << "SCAPEGOAT means to be punished for the sins and crime of others";
    } else if (a == "PIG-HEADED") {
        cout << "PIG-HEADED means stubborn";
    } else if (a == "MOLE") {
        cout << "MOLE means a traitor who undermines from the inside the organization in which he is employed";
    } else if (a == "SCOTCH THE SNAKE") {
        cout << "SCOTCH THE SNAKE means to spoil a plan";
    } else if (a == "MONKEY BUSINESS") {
        cout << "MONKEY BUSINESS means underhanded business";
    } else if (a == "LION'S DEN") {
        cout << "LION'S DEN means a place of great danger";
    } else {
        cout << "No idiom found";
    }
    
    return 0;
}
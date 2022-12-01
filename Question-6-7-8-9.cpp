#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
        //❓❓ QUESTION 9, add the constructor here:
        Player(string n, int h){
            name = n;
            hitPoints = h;
        }
        

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    Player a = Player("Brad", 19);
    cout << a.damage(5) <<endl;
    cout << a.getName() << endl;
    cout << a.getHitPoints() << endl;
}

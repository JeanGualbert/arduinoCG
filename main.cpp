/*
 * File:   main.cpp
 * Author: babous
 *
 * Created on 10 juillet 2014, 02:38
 */

#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

   //-- QApplication app(argc, argv);

    int led = 13;//broche par défault pour la led soudé à la carte
    int Time_up; // temp haut de la pwm
    int Time_down; //temp bas de la pwm
    
    cout<<"entrez le temps haut en microseconde ";
    cin>>Time_up;
    cout<<"entrez le temps bas en microseconde";
    cin>>Time_down;
    
    cout<<"int led ="<<led<<";\n void setup() {\n pinMode(led,OUTPUT);\n}";

    //return app.exec();
    return 0;
}

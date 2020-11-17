#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: headphones
//  action 1: Transduce electric to acoustic energy
headphones.transduce();
//  action 2: Cancel Noise
headphones.cancelNoise();
//  action 3: Lights up led when battery is low
headphones.ledOn(); 
//  2)
//  Noun: Audio Interface
//  action 1: Powers microphone
audioInterface.phantomPowerOn();
//  action 2: converts analog signals to digital
audioInterface.analogToDigital();
//  action 3: converts digital signals to analog
audioInterface.digitalToAnalog();
//  3)
//  Noun: coffee maker
//  action 1: makes coffee
coffeeMaker.makeCoffee();
//  action 2: counts time
coffeeMaker.countTime();
//  action 3: beeps when timer is out
coffeeMaker.beep();
//  4)
//  Noun: Dog 
//  action 1: Barks
dog.bark();
//  action 2: Poops
dog.poop();
//  action 3: chases tail
dog.chaseTail();
//  5)
//  Noun: Washing machine
//  action 1: fills tank with water
washingMachine.fillTank();
//  action 2: rotates tank 
washingMachine.rotateTank();
//  action 3: dries clothes
 washingMachine.dryCycle();
//  6)
//  Noun: Printer
//  action 1:n Pulls paper
printer.pullPaper();
//  action 2: checks ink cartridges
printer.checkCartridges();
//  action 3: scans 
printer.scan();
//  7)
//  Noun: baby
//  action 1: eats
baby.eat();
//  action 2: smiles
baby.smile();
//  action 3: cries
baby.cry();
//  8)
//  Noun: Sun Flower
//  action 1: Does photosynthesis
sunFlower.startPhotosynthesis();
//  action 2: Follows Light
sunFlower.followLight();
//  action 3: Grows seeds
sunFlower.growSeed();
//  9) 
//  Noun: cellphone 
//  action 1: displays caller id
cellphone.displayCallerID();
//  action 2: displays notifications
cellphone.displayNotification();
//  action 3: plays ringtone
cellphone.playRingtone();
//  10)
//  Noun: elevator 
//  action 1: checks if door is closed
elevator.checkDoor();
//  action 2: beeps
elevator.beep();
//  action 3: activates emergency breaks
 elevator.activateEmergencyBreaks();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

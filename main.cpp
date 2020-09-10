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
//  Noun: Red pen
//  action 1: the red pen write fast
redPen.writeFast();
//  action 2: the red pen write slow
redPen.writeSlow();
//  action 3: the red pen change color 
redPen.changeColor();
//  2)
//  Noun: air
//  action 1: the air creates pressure 
air.createPressure();
//  action 2: the air fills empty spaces
air.fillSpaces();
//  action 3: the air moves things 
air.moveThings()();
//  3) 
//  Noun: fire 
//  action 1: fire burns
fire.burn();
//  action 2: fire warms up
fire.warmUp();
//  action 3: fire melts 
fire.melt();
//  4) 
//  Noun: ice 
//  action 1: ice freezes
ice.freeze();
//  action 2: ice cools
ice.cool();
//  action 3: ice expands
ice.expand(); 
//  5)
//  Noun: wind
//  action 1: the wind blows
wind.blow();
//  action 2: the wind moves the clouds
wind.movesClouds();
//  action 3: the wind makes noise
wind.makeNoise();
//  6)
//  Noun: energy
//  action 1: the energy flows
energy.flow();
//  action 2: the energy makes things move
energy.makeMove();
//  action 3: the energy provides heat
energy.provideHeat();
//  7)
//  Noun: tree
//  action 1: the tree grow
tree.grow();
//  action 2: the tree produce fruits
tree.provideFruit();
//  action 3:the tree produces oxygen 
tree.produceOxygen();
//  8)
//  Noun: sun
//  action 1: the sun illuminates
sun.illuminate();
//  action 2: the sun rises
sun.rise();
//  action 3: the sun sets
sun.sets();
//  9)
//  Noun: bird
//  action 1: the bird flies 
bird.fly();
//  action 2: the bird eats
bird.eat();
//  action 3: the bird tweets
bird.tweet();
//  10)
//  Noun: dog
//  action 1: the dog run
dog.run();
//  action 2: the dog barks
dog.bark();
//  action 3: the dog bites
dog.bite();


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

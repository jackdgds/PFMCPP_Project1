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
//  Noun:       tree
//  action 1:   the tree grows taller
tree.growUp();
//  action 2:   the tree grows leaves
tree.growLeaves();
//  action 3:   the tree sheds leaves
tree.shedLeaves();
//  2)
//  Noun:       leg                         
//  action 1:   the leg extends        
leg.extend();    
//  action 2:   the leg flexes  
leg.flex(); 
//  action 3:   the leg rotates conter-clockwise
leg.rotateCounterClockwise();
//  3)
//  Noun:       finger
//  action 1:   the finger extends
finger.extend();
//  action 2:   the finger points 
finger.point();
//  action 3:   the finger rotates counter-clockwise
finger.rotateCounterClockwise();
//  4)          
//  Noun:       thumb
//  action 1:   the thumb extends
thumb.extend();
//  action 2:   the thumb raises 
thumb.raise();
//  action 3:   the thumb rotates counter-clockwise
thumb.rotateCounterClockwise();

//  5)
//  Noun:       eye
//  action 1:   the eye sees 
eye.see();
//  action 2:   the eye blinks
eye.blink();
//  action 3:   the eye closes
eye.close();
//  6)
//  Noun:       girl 
//  action 1:   the girl sings
girl.sing();
//  action 2:   the girl dances 
girl.dance();
//  action 3:   the girl smiles
girl.smile();
//  7)
//  Noun:       boy
//  action 1:   the boy runs
boy.run();
//  action 2:   the boy jumps
boy.jump();
//  action 3:   the boy falls
boy.fall();
//  8)
//  Noun:       bird 
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird glides
bird.glide();
//  action 3:   the bird eats seeds
bird.eatSeeds();
//  9)            
//  Noun:       spider
//  action 1:   the spider crawls
spider.crawl();
//  action 2:   the spider spins a web
spider.spinWeb();
//  action 3:   the spider curls into a ball
spider.curlIntoBall();
//  10)         
//  Noun:       sun
//  action 1:   the sun rises
sun.rise();
//  action 2:   the sun shines 
sun.shine();
//  action 3:   the sun sets
sun.sets();



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

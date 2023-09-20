#include<bits/stdc++.h>
#include "bird.h"
using namespace std;

void birdDoesSomething(Bird* &bird){
    bird->eat();
    bird->fly();
    bird->eat();
}

int main(){

    Bird* bird = new pigeon();
    // sparrow* sp = new sparrow();
    // sp->eat();
    birdDoesSomething(bird);

    // Bird* b2 = new Bird();                        // we cant create like this.

    return 0;
}
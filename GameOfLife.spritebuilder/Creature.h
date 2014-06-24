#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbours
@property (nonatomic, assign) NSInteger livingNeighbours;

- (id)initCreature;

@end
#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Pipe.h"


class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
private:
    void setPhysicsWorld( cocos2d::PhysicsWorld *world ) { sceneWorld = world; };
    cocos2d::PhysicsWorld *sceneWorld;
    //pipes
    void SpawnPipe( float dt );
    Pipe pipe;
};

#endif // __GAME_SCENE_H__

//
//  IntroScene.h
//  Castle of Thorn
//
//  Created by Leon on 13-12-13.
//
//

#ifndef __Castle_of_Thorn__IntroScene__
#define __Castle_of_Thorn__IntroScene__

#include "cocos2d.h"
#include "CCRPGScene.h"
class IntroScene : public CCRPGScene
{
private:
    float scaleX ;
    float scaleY;
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	bool loadmode;
    virtual bool init();
	virtual void A_Button_Pressed();
	virtual void B_Button_Pressed();
	virtual void Scan_cur_block(CCPoint pos);
	void Scan_Face_To_block(CCPoint pos);
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
	static cocos2d::CCScene* scene_load();
    void GoToNextStage();
	void LoadData();
    // a selector callback
	void LoadScene();
    virtual void changeZorder(CCPoint tilePos);
	bool event[3];
    void Event0();
    void Event1();
    void Event2();
    // implement the "static node()" method manually
    CREATE_FUNC(IntroScene);
};
#endif /* defined(__Castle_of_Thorn__IntroScene__) */

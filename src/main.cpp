#include <Geode/Geode.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

/*
 * Mod: Dro6i Level Coder
 * Developer: taprapka
 */

class $modify(Dro6iEditor, LevelEditorLayer) {
    bool init(GJGameLevel* level) {
        if (!LevelEditorLayer::init(level)) return false;

        auto menu = this->getChildByID("editor-buttons-menu");
        auto btnSprite = CircleButtonSprite::createWithSpriteFrameName("GJ_plusBtn_001.png", 0.8f, CircleBaseColor::Green);
        
        auto btn = CCMenuItemSpriteExtra::create(
            btnSprite,
            this,
            menu_selector(Dro6iEditor::onImportDro6i)
        );
        
        if (menu) {
            menu->addChild(btn);
            menu->updateLayout();
        }
        return true;
    }

    void onImportDro6i(CCObject*) {
        // Your custom code string from taprapka
        std::string code = "dro6i/levelname/test/glou/01070829/fon/00000/!irk'9#";

        if (code.find("dro6i/") != std::string::npos) {
            // Spawn a basic block (ID 1) at X:100, Y:105 as a test
            this->createObject(1, CCPoint(100, 105), true);
            
            FLAlertLayer::create("taprapka Engine", "Code executed! Block spawned.", "OK")->show();
        }
    }
};

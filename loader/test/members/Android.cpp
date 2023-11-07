#include "Common.hpp"

#ifdef GEODE_IS_ANDROID

// Add known android struct members here

// needed classes are ones in the ids folder and some generic ones (i think they are already done though so only ids)
static_assert(sizeof(cocos2d::CCObject) == 0x30);
static_assert(sizeof(cocos2d::CCNode) == 0x104);
static_assert(sizeof(cocos2d::CCLayer) == 0x138);

/*GEODE_MEMBER_CHECK(GameManager, m_playLayer, 0x138);
GEODE_MEMBER_CHECK(GameManager, m_levelEditorLayer, 0x13c);
GEODE_MEMBER_CHECK(GameManager, m_canGetLevelSaveData, 0x28c);

static_assert(sizeof(GJBaseGameLayer) == 0x2cc);

GEODE_MEMBER_CHECK(PlayLayer, unknown4e8, 0x2e8);
GEODE_MEMBER_CHECK(PlayLayer, m_endPortal, 0x324);
GEODE_MEMBER_CHECK(PlayLayer, m_bottomGround, 0x37c);
GEODE_MEMBER_CHECK(PlayLayer, m_topGround, 0x380);
GEODE_MEMBER_CHECK(PlayLayer, m_level, 0x470);
GEODE_MEMBER_CHECK(PlayLayer, m_shouldTryToKick, 0x4e0);

static_assert(sizeof(GameObject) == 0x42c);

GEODE_MEMBER_CHECK(GameStatsManager, m_dailyChests, 0x110);
GEODE_MEMBER_CHECK(GameStatsManager, m_completedLevels, 0x164);

GEODE_MEMBER_CHECK(DailyLevelPage, m_weekly, 0x1ed);

GEODE_MEMBER_CHECK(TeleportPortalObject, m_orangePortal, 0x430);

GEODE_MEMBER_CHECK(EditorUI, m_rotationControl, 0x16c);
GEODE_MEMBER_CHECK(EditorUI, m_updateTimeMarkers, 0x1a4);
GEODE_MEMBER_CHECK(EditorUI, m_selectedObjects, 0x1bc);
GEODE_MEMBER_CHECK(EditorUI, m_selectedObject, 0x2c4);*/

#endif
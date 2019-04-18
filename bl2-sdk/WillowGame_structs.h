#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_FrontendGFxMovie_WPS_PushToTalk                    125
#define CONST_OptionsGFxMovie_WPS_VehicleSteering                146
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC35      335
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_LAST      350
#define CONST_MAIN_GAME_SKU_ID                                   0
#define CONST_MAX_MISSION_SUB_OBJECTIVE_SETS                     4
#define CONST_OptionsGFxMovie_PROPERTY_DLC_MAP_CONTENT_ID        0x1000000D
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC40      340
#define CONST_DAMAGEFLAG_CriticalHit                             1
#define CONST_MAX_ACTIVE_DYNAMIC_ICONS                           18
#define CONST_FrontendGFxMovie_WPS_Brightness                    112
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC36   336
#define CONST_DAMAGEFLAG_Healing                                 2
#define CONST_WillowOnlineGameSettings_WPS_HUDScaleE             120
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC08      308
#define CONST_CONNECTION_QUALTIY_GOOD                            "two"
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC31      331
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_MENU_5      4
#define CONST_OptionsGFxMovie_WPS_DlcNotifications               122
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_WillowOnlineGameSearch_WPS_SFXVolume               108
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC44      344
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_GAME_MODE 0x0000800B
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS_SIREN     2
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC11      311
#define CONST_WillowOnlineGameSearch_WPS_AcceptTrades            110
#define CONST_OptionsGFxMovie_PROPERTY_CURRMISSION               0x1000000C
#define CONST_WillowProfileSettings_WPS_LastNewOfferVersion      151
#define CONST_DAMAGEFLAG_Resist                                  4
#define CONST_LANServerBrowserGFxMovie_WPS_PerShotForceFeedback  128
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_MENU_4   3
#define CONST_WillowProfileSettings_WPS_BadassRewardsEarned      143
#define CONST_LIB_TYPE_BITS                                      4
#define CONST_FrontendGFxMovie_WPS_IntroMovieViewed              106
#define CONST_WillowPlayerController_QUERY_BROAD                 6
#define CONST_WillowPlayerController_WPS_PlayerFOV               129
#define CONST_FrontendGFxMovie_WPS_StashSlot3                    133
#define CONST_WillowOnlineGameSearch_QUERY_SPECIFIC              2
#define CONST_WillowScrollingListDataProviderExtras_WPS_DisableTrainingMessages 118
#define CONST_MAX_BEAMS                                          20
#define CONST_BUYBACK_SLOTS                                      20
#define CONST_WillowPlayerController_PROPERTY_PLAYTHROUGH        0x10000009
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC29      329
#define CONST_SELECTION_WEIGHT_THRESHOLD                         0.00000001
#define CONST_LANServerBrowserGFxMovie_PROPERTY_MIN_PLOT_MISSION 0x10000025
#define CONST_EVENT_ID_MATCHMAKING                               1
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_LAST       350
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC44   344
#define CONST_NUM_REPLICATED_PARAMETERS                          2
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC32      332
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC47      347
#define CONST_MAX_PROJECTILES                                    16
#define CONST_DISPLAY_DEBUG_STATS_PER_PAGE                       10
#define CONST_BUTTON_INDEX_SPAWN_VEHICLE                         0
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC15   315
#define CONST_MAX_ACTIVE_SKILL_STATION_ICONS                     28
#define CONST_WillowOnlineGameSettings_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowPlayerController_WPS_MouseAutoAim            167
#define CONST_NUM_MISSION_REWARD_CHOICES                         2
#define CONST_STATE_LOADING_CUSTOMIZATIONS                       5
#define CONST_WillowScrollingListDataProviderExtras_WPS_LastNewOfferVersion 151
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_IDLE     0
#define CONST_HolsteredWeaponSize_Small                          1
#define CONST_LANServerBrowserGFxMovie_WPS_StashSlot1            131
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC38      338
#define CONST_PLAYER_DETAILS_BUTTON_ID_MUTE                      3
#define CONST_REPLICATED_PRECISION_SCALE                         100.0f
#define CONST_WillowProfileSettings_WPS_DisableOptionalVO        117
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC07      307
#define CONST_HolsteredWeaponSize_Medium                         2
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC16      316
#define CONST_WillowPlayerController_WPS_StashSlot3              133
#define CONST_HolsteredWeaponSize_Large                          4
#define CONST_OptionsGFxMovie_WPS_GamepadInvertStrafe            156
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC34      334
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ControllerRebinding 158
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC41      341
#define CONST_HolsteredWeaponSize_ExtraLarge                     8
#define CONST_FrontendGFxMovie_WPS_DriftCameraLock               145
#define CONST_LANServerBrowserGFxMovie_WPS_StashSlot0            130
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC39      339
#define CONST_SKU_ID_BITS                                        8
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC36      336
#define CONST_WillowScrollingListDataProviderExtras_WPS_MouseSensitivity 121
#define CONST_WillowPlayerController_WPS_AbsoluteMinimap         140
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_MENU_2      1
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC43      343
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC46 346
#define CONST_LANServerBrowserGFxMovie_WPS_ControllerSensitivityY 103
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_MENU_5           4
#define CONST_WillowProfileSettings_WPS_SplitDirection           147
#define CONST_BADASS_REWARD_CHOICES                              5
#define CONST_MAX_INV_SLOTS                                      4
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC26      326
#define CONST_MAX_VEHICLES                                       2
#define CONST_MAX_ACTIVE_MISSION_DIRECTORS                       14
#define CONST_WillowOnlineGameSettings_WPS_LastNewOfferVersion   151
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC34     334
#define CONST_LANServerBrowserGFxMovie_WPS_DriftCameraLock       145
#define CONST_NETWORK_NOTIFICATION_TIME                          3.0f
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC49      349
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_OptionsGFxMovie_WPS_MouseSmoothing                 152
#define CONST_WillowScrollingListDataProviderExtras_WPS_AcceptDuels 109
#define CONST_WillowPlayerController_WPS_CustomUnlocks_FIRST     300
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC48      348
#define CONST_MAX_SPLIT_PLAYERS                                  2
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassPoints 136
#define CONST_FrontendGFxMovie_WPS_BadassTokensEarned            139
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC33      333
#define CONST_WillowPlayerController_WPS_Brightness              112
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC46      346
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC35 335
#define CONST_MAX_IO_ICONS_PER_TYPE                              4
#define CONST_FrontendGFxMovie_WPS_MasterVolume                  101
#define CONST_WillowProfileSettings_WPS_PushToTalk               125
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC09      309
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_MENU_4      3
#define CONST_MOTD_STRUCT_KEY_BODY                               "\",Body=\""
#define CONST_WillowOnlineGameSearch_WPS_EasterEggOption         160
#define CONST_WillowOnlineGameSearch_WPS_DisableUISway           163
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC30      330
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CrouchToggle 134
#define CONST_STATE_CHOOSE_CUSTOMIZATION                         3
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC45      345
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC37      337
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_MENU_3      2
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC42      342
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC28      328
#define CONST_WillowPlayerController_WPS_DisableTrainingMessages 118
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC27      327
#define CONST_WillowOnlineGameSettings_PROPERTY_IS_PUBLIC        0x10000010
#define CONST_FrontendGFxMovie_PROPERTY_HOST_EXP_LEVEL           0x10000027
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC25      325
#define CONST_WillowOnlineGameSearch_WPS_HUDScaleE               120
#define CONST_FrontendGFxMovie_WPS_EasterEggOption               160
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC04 304
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_CustomizationGFxMovie_ENTRY_IDX_SKINS              1
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC24      324
#define CONST_MAX_LOCATION_MISSIONS                              4
#define CONST_EVENT_ID_DISCONNECT                                8
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC23      323
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_FrontendGFxMovie_WPS_AcceptDuels                   109
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC22      322
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC21      321
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC20      320
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC19      319
#define CONST_FrontendGFxMovie_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC18      318
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC17      317
#define CONST_WillowPlayerController_WPS_StashSlot2              132
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC15      315
#define CONST_WillowPlayerController_WPS_StashSlot0              130
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_LastNewOfferVersion 151
#define CONST_WillowPlayerController_WPS_StashSlot1              131
#define CONST_WillowOnlineGameSearch_WPS_InvertMouseLook         105
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC14      314
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC13      313
#define CONST_WillowPlayerController_WPS_GoldenKeysEarned        162
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC12      312
#define CONST_LANServerBrowserGFxMovie_WPS_DisableTrainingMessages 118
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC10      310
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC06      306
#define CONST_ENTRY_IDX_CONFIRM                                  3
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC05      305
#define CONST_FrontendGFxMovie_PROPERTY_DLC_MAP_CONTENT_ID       0x1000000D
#define CONST_LANServerBrowserGFxMovie_WPS_BadassPoints          136
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC04      304
#define CONST_OptionsGFxMovie_WPS_ViewAccel                      104
#define CONST_FrontendGFxMovie_WPS_LastSavedId                   116
#define CONST_LANServerBrowserGFxMovie_WPS_IntroMovieViewed      106
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC03      303
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC02      302
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_DLC01      301
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC49     349
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_MAIN       300
#define CONST_NUM_EQUIPMENT_LOCATIONS                            4
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC31     331
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_MAIN             300
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_WillowProfileSettings_WPS_CustomUnlocks_FIRST      300
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC19            319
#define CONST_WillowProfileSettings_PROPERTY_DLC_MAP_CONTENT_ID  0x1000000D
#define CONST_WillowOnlineGameSearch_WPS_GamepadInvertStrafe     156
#define CONST_WillowProfileSettings_WPS_ColorBlindMode           168
#define CONST_WillowProfileSettings_WPS_ViewAccel                104
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_MasterVolume 101
#define CONST_MAX_COMBINE_HITS_TIME                              0.2f
#define CONST_WillowProfileSettings_WPS_MouseAutoAim             167
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_LAST    350
#define CONST_SORT_ALPHABETICAL                                  1
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_StashSlot3 133
#define CONST_WillowProfileSettings_WPS_BackpackSortPreference   166
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC37            337
#define CONST_WillowProfileSettings_WPS_StashSlot1               131
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC09 309
#define CONST_WillowProfileSettings_WPS_MasterVolume             101
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC25            325
#define CONST_WillowProfileSettings_WPS_InvertedReverseSteering  165
#define CONST_WillowProfileSettings_WPS_BadassRewardsToOfferNext 164
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC10           310
#define CONST_WillowProfileSettings_WPS_DisableUISway            163
#define CONST_WillowProfileSettings_PROPERTY_PLAYTHROUGH         0x10000009
#define CONST_WillowProfileSettings_WPS_GoldenKeysEarned         162
#define CONST_WillowProfileSettings_WPS_AutoAim                  113
#define CONST_WillowProfileSettings_WPS_RewardedForPlayingPreviousGame 161
#define CONST_CharacterSelectionReduxGFxMovie_ENTRY_IDX_SKINS    1
#define CONST_WillowProfileSettings_WPS_EasterEggOption          160
#define CONST_WillowOnlineGameSettings_WPS_PlayerFOV             129
#define CONST_FrontendGFxMovie_WPS_KeyRebinding                  149
#define CONST_FrontendGFxMovie_WPS_BadassPoints                  136
#define CONST_WillowProfileSettings_WPS_GunzerkingAutoSwitch     159
#define CONST_WillowProfileSettings_WPS_ControllerRebinding      158
#define CONST_FrontendGFxMovie_WPS_DlcNotifications              122
#define CONST_WillowOnlineGameSearch_PROPERTY_DLC_FLAG           0x10000028
#define CONST_WillowProfileSettings_WPS_ShouldCensorContent      157
#define CONST_MAX_SPLITSCREEN_PLAYERS                            2
#define CONST_WillowOnlineGameSearch_WPS_AcceptDuels             109
#define CONST_WillowProfileSettings_WPS_GamepadInvertStrafe      156
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC32   332
#define CONST_WillowOnlineGameSettings_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_WillowProfileSettings_WPS_GamepadInvertMove        155
#define CONST_WillowProfileSettings_WPS_GamepadInvertTurn        154
#define CONST_LANServerBrowserGFxMovie_QUERY_DEFAULT             0
#define CONST_WillowProfileSettings_QUERY_BROAD                  6
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_PLAYING_4   7
#define CONST_WillowProfileSettings_WPS_TEST_ItemRotation        153
#define CONST_WillowPlayerController_WPS_BadassTokens            138
#define CONST_WillowProfileSettings_WPS_MouseSmoothing           152
#define CONST_FrontendGFxMovie_WPS_HUDScaleY                     142
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_PLAYING_3   6
#define CONST_LANServerBrowserGFxMovie_WPS_VoiceVolume           124
#define CONST_WillowProfileSettings_WPS_CheckedForPreviousGame   150
#define CONST_WillowProfileSettings_WPS_KeyRebinding             149
#define CONST_FrontendGFxMovie_QUERY_BROAD                       6
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC22     322
#define CONST_OptionsGFxMovie_WPS_VoiceVolume                    124
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC29   329
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC40     340
#define CONST_WillowProfileSettings_WPS_TradingDisabled          148
#define CONST_WillowOnlineGameSearch_PROPERTY_PLAYTHROUGH        0x10000009
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC26           326
#define CONST_WillowProfileSettings_WPS_VehicleSteering          146
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC31           331
#define CONST_WillowProfileSettings_WPS_BadassTokensEarned       139
#define CONST_WillowProfileSettings_WPS_DriftCameraLock          145
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC47     347
#define CONST_WillowPlayerController_WPS_BadassPoints            136
#define CONST_WillowOnlineGameSearch_WPS_GunzerkingAutoSwitch    159
#define CONST_WillowScrollingListDataProviderOptionsBase_QUERY_NARROW 5
#define CONST_WillowProfileSettings_WPS_HUDScaleY                142
#define CONST_WillowPlayerController_WPS_EnableSubtitles         111
#define CONST_LANServerBrowserGFxMovie_WPS_BadassTokens          138
#define CONST_WillowProfileSettings_WPS_HUDScaleX                141
#define CONST_WillowOnlineGameSearch_WPS_ViewAccel               104
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC48   348
#define CONST_WillowProfileSettings_WPS_AbsoluteMinimap          140
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC49           349
#define CONST_FrontendGFxMovie_WPS_StashSlot2                    132
#define CONST_LANServerBrowserGFxMovie_WPS_TradingDisabled       148
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS 0
#define CONST_WillowProfileSettings_WPS_BadassTokens             138
#define CONST_NotStartedMenu                                     1
#define CONST_WillowProfileSettings_WPS_BadassPointsSpent        137
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC17     317
#define CONST_OptionsGFxMovie_WPS_BadassRewardsToOfferNext       164
#define CONST_WillowProfileSettings_WPS_BadassPoints             136
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_MENU_5     4
#define CONST_WillowPlayerController_WPS_DisableUISway           163
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC33   333
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_WillowProfileSettings_WPS_ZoomToggle               135
#define CONST_OptionsGFxMovie_WPS_StashSlot1                     131
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC18 318
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC13   313
#define CONST_WillowOnlineGameSettings_PROPERTY_MAX_EXP_LEVEL    0x10000024
#define CONST_WillowProfileSettings_PROPERTY_MAX_PLOT_MISSION    0x10000026
#define CONST_VEHICLE_CHOICE_MODULE_STATE_DEPLOYED               2
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_StashSlot0 130
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC03     303
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC34            334
#define CONST_WillowProfileSettings_WPS_CrouchToggle             134
#define CONST_EVENT_ID_QUIT                                      5
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC49   349
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC27            327
#define CONST_WillowOnlineGameSettings_WPS_DisableTrainingMessages 118
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_IDLE       0
#define CONST_LANServerBrowserGFxMovie_WPS_MouseAutoAim          167
#define CONST_MAX_SKILL_TYPES                                    5
#define CONST_WillowOnlineGameSearch_WPS_ControllerPreset        115
#define CONST_WillowProfileSettings_WPS_StashSlot3               133
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassTokens 138
#define CONST_WillowProfileSettings_WPS_StashSlot2               132
#define CONST_WillowProfileSettings_WPS_AcceptTrades             110
#define CONST_WillowOnlineGameSearch_WPS_LastSavedId             116
#define CONST_CustomizationGFxMovie_ENTRY_IDX_HEADS              0
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC24            324
#define CONST_WillowProfileSettings_WPS_StashSlot0               130
#define CONST_WillowProfileSettings_WPS_PlayerFOV                129
#define CONST_WillowProfileSettings_WPS_PerShotForceFeedback     128
#define CONST_WillowOnlineGameSearch_WPS_HUDScaleY               142
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC15 315
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_GamepadInvertStrafe 156
#define CONST_FrontendGFxMovie_WPS_ControllerSensitivityY        103
#define CONST_STATE_CUSTOMIZE_CHARACTER                          2
#define CONST_WillowProfileSettings_WPS_VOVolume                 127
#define CONST_WillowPlayerController_WPS_BadassRewardsEarned     143
#define CONST_WillowProfileSettings_WPS_VoiceVolume              124
#define CONST_WillowProfileSettings_WPS_DlcNotifications         122
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC27 327
#define CONST_WillowProfileSettings_WPS_MouseSensitivity         121
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_MENU_2 1
#define CONST_WillowProfileSettings_WPS_HUDScaleE                120
#define CONST_WillowProfileSettings_WPS_AmbientOcclusion         119
#define CONST_WillowPlayerController_QUERY_DEFAULT               0
#define CONST_WillowProfileSettings_WPS_DisableTrainingMessages  118
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC21 321
#define CONST_WillowPlayerController_WPS_SplitDirection          147
#define CONST_WillowProfileSettings_WPS_LastSavedId              116
#define CONST_FrontendGFxMovie_WPS_PlayerFOV                     129
#define CONST_WillowProfileSettings_WPS_ControllerPreset         115
#define CONST_FrontendGFxMovie_QUERY_NARROW                      5
#define CONST_OptionsGFxMovie_WPS_BackpackSortPreference         166
#define CONST_WillowProfileSettings_WPS_HasUnlockedViralAchievement 114
#define CONST_WillowProfileSettings_WPS_Brightness               112
#define CONST_WillowOnlineGameSearch_PROPERTY_HOST_EXP_LEVEL     0x10000027
#define CONST_OptionsGFxMovie_WPS_MusicVolume                    107
#define CONST_MAX_ALLOWED_LOCATION_DELTA                         5000
#define CONST_WillowProfileSettings_WPS_EnableSubtitles          111
#define CONST_WillowProfileSettings_WPS_AcceptDuels              109
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_MAX_EXP_LEVEL 0x10000024
#define CONST_WillowPlayerController_WPS_ShouldCensorContent     157
#define CONST_FrontendGFxMovie_WPS_LastNewOfferVersion           151
#define CONST_WillowProfileSettings_WPS_SFXVolume                108
#define CONST_WillowProfileSettings_WPS_MusicVolume              107
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_FIRST 300
#define CONST_WillowPlayerController_WPS_MouseSmoothing          152
#define CONST_FALLING_NODE_IDLE_CHILD                            2
#define CONST_WillowProfileSettings_WPS_IntroMovieViewed         106
#define CONST_LANServerBrowserGFxMovie_PROPERTY_DLC_FLAG         0x10000028
#define CONST_WillowOnlineGameSearch_WPS_KeyRebinding            149
#define CONST_WillowProfileSettings_WPS_InvertMouseLook          105
#define CONST_OptionsGFxMovie_QUERY_DEFAULT                      0
#define CONST_FrontendGFxMovie_WPS_MusicVolume                   107
#define CONST_WillowProfileSettings_WPS_ControllerSensitivityY   103
#define CONST_WillowProfileSettings_WPS_ControllerSensitivityX   102
#define CONST_LANServerBrowserGFxMovie_WPS_HasUnlockedViralAchievement 114
#define CONST_WillowPlayerController_WPS_HUDScaleE               120
#define CONST_RESERVED_ROW_COUNT                                 5
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_MAX_EXP_LEVEL 0x10000024
#define CONST_CharacterSelectionReduxGFxMovie_ENTRY_IDX_HEADS    0
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_PLAYING_5   8
#define CONST_LANServerBrowserGFxMovie_WPS_DlcNotifications      122
#define CONST_FrontendGFxMovie_WPS_HUDScaleX                     141
#define CONST_WillowPlayerController_PROPERTY_EXP_LEVEL          0x10000001
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_PLAYING_2   5
#define CONST_WillowPlayerController_WPS_VoiceVolume             124
#define CONST_LANServerBrowserGFxMovie_WPS_InvertedReverseSteering 165
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_PLAYING_4 7
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_MIN_PLOT_MISSION 0x10000025
#define CONST_WillowProfileSettings_CONTEXT_PRESENCE_IDLE        0
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_HUDScaleX 141
#define CONST_OptionsGFxMovie_WPS_SFXVolume                      108
#define CONST_FrontendGFxMovie_WPS_SplitDirection                147
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC20     320
#define CONST_WillowProfileSettings_CONTEXT_CHARACTER_CLASS      0
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC02           302
#define CONST_WillowOnlineGameSearch_WPS_StashSlot3              133
#define CONST_WillowProfileSettings_CONTEXT_GAME_MODE_NORMAL     0
#define CONST_LANServerBrowserGFxMovie_PROPERTY_MAX_EXP_LEVEL    0x10000024
#define CONST_WillowScrollingListDataProviderExtras_WPS_IntroMovieViewed 106
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC38   338
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC33     333
#define CONST_OptionsGFxMovie_WPS_LastSavedId                    116
#define CONST_WillowScrollingListDataProviderPause_EVENT_ID_NETOPTIONS 5
#define CONST_WillowProfileSettings_CONTEXT_GAME_MODE            0x0000800B
#define CONST_WillowOnlineGameSettings_WPS_ColorBlindMode        168
#define CONST_WillowPlayerController_WPS_LastSavedId             116
#define CONST_WillowProfileSettings_QUERY_CUSTOM                 7
#define CONST_WillowProfileSettings_QUERY_NARROW                 5
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC30     330
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC07   307
#define CONST_WillowPlayerController_WPS_BadassTokensEarned      139
#define CONST_WillowProfileSettings_QUERY_SPECIFIC               2
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC20   320
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC49     349
#define CONST_WillowOnlineGameSettings_WPS_VOVolume              127
#define CONST_WillowProfileSettings_QUERY_DEFAULT                0
#define CONST_WillowProfileSettings_PROPERTY_DLC_MAP_PACKAGE_ID  0x10000029
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC04     304
#define CONST_WillowProfileSettings_PROPERTY_DLC_FLAG            0x10000028
#define CONST_WillowPlayerController_WPS_InvertedReverseSteering 165
#define CONST_WillowProfileSettings_PROPERTY_HOST_EXP_LEVEL      0x10000027
#define CONST_WillowPlayerController_WPS_MusicVolume             107
#define CONST_WillowProfileSettings_PROPERTY_MIN_PLOT_MISSION    0x10000025
#define CONST_MenuRefreshRate                                    0.5
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC12     312
#define CONST_WillowPlayerController_WPS_PerShotForceFeedback    128
#define CONST_WillowProfileSettings_PROPERTY_MAX_EXP_LEVEL       0x10000024
#define CONST_WillowProfileSettings_PROPERTY_MIN_EXP_LEVEL       0x10000023
#define CONST_WillowProfileSettings_PROPERTY_CURR_PLOT_MISSION   0x10000022
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC13     313
#define CONST_WillowProfileSettings_PROPERTY_IS_PUBLIC           0x10000010
#define CONST_LANServerBrowserGFxMovie_PROPERTY_MAX_PLOT_MISSION 0x10000026
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC06     306
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC31            331
#define CONST_WillowProfileSettings_PROPERTY_CURRMISSION         0x1000000C
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_InvertMouseLook 105
#define CONST_WillowProfileSettings_PROPERTY_EXP_LEVEL           0x10000001
#define CONST_VEHICLE_CHOICE_MODULE_STATE_READY                  1
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC20     320
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC13            313
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC16     316
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC25   325
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC07            307
#define CONST_WillowPlayerController_WPS_CustomUnlocks_LAST      350
#define CONST_HOLSTERED_ITEMS_HIDDEN_BIT                         0x4
#define CONST_OptionsGFxMovie_WPS_DisableOptionalVO              117
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC09   309
#define CONST_WillowPawn_MAX_REPLICATED_NOUNS                    20
#define CONST_NetworkOptionsGFxObject_NETWORK_TYPE_FRIENDS_ONLY  "friendsOnly"
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC06           306
#define CONST_HOLSTERED_WEAPONS_HIDDEN_BIT                       0x2
#define CONST_EQUIPPED_WEAPONS_HIDDEN_BIT                        0x1
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC10   310
#define CONST_MAX_NUM_HOLSTERED_WEAPON_SLOTS                     3
#define CONST_MINTIMEBETWEENPAINSOUNDS                           0.35
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_MENU_3     2
#define CONST_FrontendGFxMovie_WPS_BadassTokens                  138
#define CONST_RECENTLY_RESISTED_ATTACK_HISTORY_LENGTH            16
#define CONST_WillowPlayerController_QUERY_SPECIFIC              2
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC11     311
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC17           317
#define CONST_EVENT_ID_ACHIEVEMENTS                              1
#define CONST_GOLDEN_KEY_SOURCE_SPARK                            0
#define CONST_MAX_AMMO_RESOURCE_UPGRADES                         8
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC27     327
#define CONST_WillowPlayerController_PROPERTY_DLC_FLAG           0x10000028
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC29 329
#define CONST_MIN_TIME_BETWEEN_SAVES_AT_SAME_STATION             60
#define CONST_MAX_RECENT_KILLS                                   25
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC24 324
#define CONST_OptionsGFxMovie_WPS_MasterVolume                   101
#define CONST_WillowPlayerController_WPS_MouseSensitivity        121
#define CONST_TIME_BETWEEN_LOCATION_STAT_UPDATES_MS              5000
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC11     311
#define CONST_CustomizationGFxMovie_ENTRY_IDX_NAME               2
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC22   322
#define CONST_OptionsGFxMovie_WPS_ShouldCensorContent            157
#define CONST_MAX_PLAYER_DAMAGE_NOTIFICATIONS                    6
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC21   321
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC48     348
#define CONST_LANServerBrowserGFxMovie_QUERY_SPECIFIC            2
#define CONST_EVENT_ID_GAME_OPTIONS                              0
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC47     347
#define CONST_NETWORK_OPTIONS_EVENT_ID_OFFLINE                   4
#define CONST_WillowOnlineGameSearch_WPS_VehicleSteering         146
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC46     346
#define CONST_FrontendGFxMovie_PROPERTY_IS_PUBLIC                0x10000010
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC45     345
#define CONST_FrontendGFxMovie_PROPERTY_CURR_PLOT_MISSION        0x10000022
#define CONST_WillowScrollingListDataProviderExtras_WPS_AutoAim  113
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC44     344
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC43     343
#define CONST_WillowPlayerController_WPS_InvertMouseLook         105
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC42     342
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC28   328
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC41     341
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC32   332
#define CONST_FrontendGFxMovie_PROPERTY_MAX_EXP_LEVEL            0x10000024
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC39     339
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC33   333
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC38     338
#define CONST_LANServerBrowserGFxMovie_WPS_DisableOptionalVO     117
#define CONST_WillowOnlineGameSettings_PROPERTY_DLC_FLAG         0x10000028
#define CONST_LANServerBrowserGFxMovie_WPS_DisableUISway         163
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC37     337
#define CONST_WillowPlayerController_WPS_VehicleSteering         146
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC36     336
#define CONST_FrontendGFxMovie_WPS_AbsoluteMinimap               140
#define CONST_LANServerBrowserGFxMovie_PROPERTY_CURR_PLOT_MISSION 0x10000022
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC35     335
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC39   339
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC32     332
#define CONST_MAX_ACTIVE_AREA_WAYPOINTS                          4
#define CONST_LANServerBrowserGFxMovie_WPS_ViewAccel             104
#define CONST_FrontendGFxMovie_WPS_CheckedForPreviousGame        150
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC30     330
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC29     329
#define CONST_MAX_APPLIED_CUSTOMIZATIONS                         5
#define CONST_FrontendGFxMovie_PROPERTY_MIN_PLOT_MISSION         0x10000025
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC28     328
#define CONST_MAX_SKILLICON_FLASK                                1
#define CONST_WillowPlayerController_WPS_GamepadInvertStrafe     156
#define CONST_WillowPlayerController_WPS_ControllerRebinding     158
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC26     326
#define CONST_WillowPlayerController_WPS_ControllerPreset        115
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC25     325
#define CONST_USE_FAILURE_CHARACTER                              16
#define CONST_EVENT_ID_WILLOW_ONE_SAVES                          2
#define CONST_FrontendGFxMovie_WPS_HasUnlockedViralAchievement   114
#define CONST_QUALITY_TYPE_NONE                                  "none"
#define CONST_EVENT_ID_KEYBOARD_MOUSE_OPTIONS                    3
#define CONST_WillowOnlineGameSearch_PROPERTY_MAX_PLOT_MISSION   0x10000026
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC24     324
#define CONST_WillowOnlineGameSettings_WPS_MouseSensitivity      121
#define CONST_WillowOnlineGameSettings_WPS_IntroMovieViewed      106
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC23     323
#define CONST_MAX_TRACKED_SKILLS                                 17
#define CONST_WillowPlayerController_WPS_ColorBlindMode          168
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC21     321
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC19     319
#define CONST_WillowOnlineGameSearch_WPS_BackpackSortPreference  166
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC18     318
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC16     316
#define CONST_WillowScrollingListDataProviderExtras_WPS_DisableUISway 163
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC15     315
#define CONST_STATE_INIT                                         0
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC14     314
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC10     310
#define CONST_WillowPlayerController_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_PerShotForceFeedback 128
#define CONST_WillowOnlineGameSearch_WPS_SplitDirection          147
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC09     309
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC08     308
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC07     307
#define CONST_LANServerBrowserGFxMovie_WPS_ColorBlindMode        168
#define CONST_FrontendGFxMovie_WPS_ShouldCensorContent           157
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC06     306
#define CONST_OptionsGFxMovie_PROPERTY_MIN_EXP_LEVEL             0x10000023
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC05     305
#define CONST_LANServerBrowserGFxMovie_WPS_KeyRebinding          149
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_PLAYING_3 6
#define CONST_LANServerBrowserGFxMovie_PROPERTY_CURRMISSION      0x1000000C
#define CONST_FrontendGFxMovie_WPS_MouseAutoAim                  167
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC03     303
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC02     302
#define CONST_WillowPlayerController_WPS_CustomUnlocks_DLC01     301
#define CONST_WillowPlayerController_WPS_CustomUnlocks_MAIN      300
#define CONST_OptionsGFxMovie_WPS_StashSlot3                     133
#define CONST_WillowPlayerController_WPS_BackpackSortPreference  166
#define CONST_WillowPlayerController_WPS_BadassRewardsToOfferNext 164
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC17     317
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC24   324
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC06            306
#define CONST_WillowPlayerController_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC26     326
#define CONST_WillowPlayerController_WPS_EasterEggOption         160
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC15            315
#define CONST_OptionsGFxMovie_WPS_AutoAim                        113
#define CONST_WillowPlayerController_WPS_GunzerkingAutoSwitch    159
#define CONST_FrontendGFxMovie_WPS_HUDScaleE                     120
#define CONST_WillowOnlineGameSettings_WPS_DisableOptionalVO     117
#define CONST_WillowPlayerController_WPS_GamepadInvertMove       155
#define CONST_WillowOnlineGameSearch_WPS_DisableTrainingMessages 118
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_PLAYING_2        5
#define CONST_TitleFormat                                        "<font size='13' color='#FFFFFF'>%message%</font>"
#define CONST_FrontendGFxMovie_WPS_DisableTrainingMessages       118
#define CONST_WillowPlayerController_WPS_GamepadInvertTurn       154
#define CONST_FrontendGFxMovie_WPS_GoldenKeysEarned              162
#define CONST_WillowPlayerController_WPS_TEST_ItemRotation       153
#define CONST_MAX_SHOPS_ICONS                                    8
#define CONST_MAX_LOCAL_USERS                                    4
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_WillowPlayerController_WPS_LastNewOfferVersion     151
#define CONST_WillowPlayerController_WPS_CheckedForPreviousGame  150
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC25 325
#define CONST_LANServerBrowserGFxMovie_WPS_SFXVolume             108
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_GunzerkingAutoSwitch 159
#define CONST_WillowPlayerController_WPS_KeyRebinding            149
#define CONST_WillowPlayerController_WPS_TradingDisabled         148
#define CONST_OptionsGFxMovie_WPS_BadassPoints                   136
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC23 323
#define CONST_WillowPlayerController_WPS_DriftCameraLock         145
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_PLAYING_4        7
#define CONST_WillowPlayerController_WPS_HUDScaleY               142
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_PLAYING_5        8
#define CONST_WillowPlayerController_WPS_HUDScaleX               141
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_MENU_3   2
#define CONST_WillowPlayerController_WPS_BadassPointsSpent       137
#define CONST_WillowPlayerController_WPS_ZoomToggle              135
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC38           338
#define CONST_WillowPlayerController_WPS_CrouchToggle            134
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_MAIN    300
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_PLAYING_3        6
#define CONST_WillowPlayerController_WPS_VOVolume                127
#define CONST_WillowPlayerController_WPS_PushToTalk              125
#define CONST_WillowOnlineGameSearch_WPS_ZoomToggle              135
#define CONST_WillowOnlineGameSettings_WPS_LastSavedId           116
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC30   330
#define CONST_WillowPlayerController_WPS_DlcNotifications        122
#define CONST_WillowPlayerController_WPS_AmbientOcclusion        119
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_MAIN    300
#define CONST_FrontendGFxMovie_WPS_VOVolume                      127
#define CONST_WillowScrollingListDataProviderExtras_QUERY_DEFAULT 0
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC12           312
#define CONST_WillowPlayerController_WPS_DisableOptionalVO       117
#define CONST_FrontendGFxMovie_WPS_ColorBlindMode                168
#define CONST_WillowPlayerController_WPS_HasUnlockedViralAchievement 114
#define CONST_MAX_ITEM_CARD_MODIFIER_STATS                       5
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC15           315
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC04           304
#define CONST_WillowPlayerController_WPS_AutoAim                 113
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC17   317
#define CONST_WillowPlayerController_WPS_AcceptTrades            110
#define CONST_LANServerBrowserGFxMovie_WPS_BadassTokensEarned    139
#define CONST_FrontendGFxMovie_WPS_BadassPointsSpent             137
#define CONST_WillowPlayerController_WPS_AcceptDuels             109
#define CONST_OptionsGFxMovie_WPS_ZoomToggle                     135
#define CONST_WillowPlayerController_WPS_SFXVolume               108
#define CONST_WORKING_ICON_FRAME_NAME                            "working"
#define CONST_FrontendGFxMovie_WPS_TEST_ItemRotation             153
#define CONST_WillowOnlineGameSettings_WPS_MouseAutoAim          167
#define CONST_WillowPlayerController_WPS_IntroMovieViewed        106
#define CONST_WillowPlayerController_WPS_ViewAccel               104
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_MAIN            300
#define CONST_LANServerBrowserGFxMovie_PROPERTY_PLAYTHROUGH      0x10000009
#define CONST_WillowPlayerController_WPS_ControllerSensitivityY  103
#define CONST_WillowScrollingListDataProviderExtras_WPS_ControllerPreset 115
#define CONST_WillowPlayerController_WPS_ControllerSensitivityX  102
#define CONST_FrontendGFxMovie_WPS_GamepadInvertMove             155
#define CONST_WillowPlayerController_WPS_MasterVolume            101
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS   0
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_PLAYING_5  8
#define CONST_WillowOnlineGameSearch_WPS_InvertedReverseSteering 165
#define CONST_FrontendGFxMovie_WPS_EnableSubtitles               111
#define CONST_NETWORK_OPTIONS_EVENT_ID_SYSTEM_LINK               3
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_PLAYING_4  7
#define CONST_FrontendGFxMovie_QUERY_DEFAULT                     0
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_PLAYING_3  6
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_PLAYING_2  5
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_MENU_5     4
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_MENU_4     3
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_MENU_3     2
#define CONST_FrontEndPlayerListGFxObject_NETWORK_TYPE_OFFLINE   "offline"
#define CONST_WillowPlayerController_CONTEXT_PRESENCE_MENU_2     1
#define CONST_WillowOnlineGameSettings_WPS_BadassPointsSpent     137
#define CONST_WillowOnlineGameSearch_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_IDLE              0
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_RPMToRadsPerSec                                    0.104719755119659773
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC41            341
#define CONST_FrontendGFxMovie_PROPERTY_EXP_LEVEL                0x10000001
#define CONST_WillowPlayerController_CONTEXT_CHARACTER_CLASS     0
#define CONST_WillowPlayerController_CONTEXT_GAME_MODE_NORMAL    0
#define CONST_WillowPlayerController_CONTEXT_GAME_MODE           0x0000800B
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC08   308
#define CONST_WillowPlayerController_QUERY_CUSTOM                7
#define CONST_FrontendGFxMovie_PROPERTY_CURRMISSION              0x1000000C
#define CONST_ROW_TYPE_ID_HEADER_INFO                            1
#define CONST_WillowScrollingListDataProviderOptionsBase_QUERY_CUSTOM 7
#define CONST_FrontendGFxMovie_WPS_TradingDisabled               148
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC16   316
#define CONST_WillowPlayerController_QUERY_NARROW                5
#define CONST_PLAYER_DETAILS_BUTTON_ID_KICK                      5
#define CONST_WillowScrollingListDataProviderOptionsBase_QUERY_SPECIFIC 2
#define CONST_WillowPlayerController_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_WillowPlayerController_PROPERTY_HOST_EXP_LEVEL     0x10000027
#define CONST_SUCCESS_ICON_FRAME_NAME                            "success"
#define CONST_STATE_CHOOSE_CHARACTER                             1
#define CONST_WillowPlayerController_PROPERTY_MAX_PLOT_MISSION   0x10000026
#define CONST_WillowOnlineGameSearch_WPS_StashSlot1              131
#define CONST_WillowPlayerController_PROPERTY_MIN_PLOT_MISSION   0x10000025
#define CONST_WillowPlayerController_PROPERTY_MAX_EXP_LEVEL      0x10000024
#define CONST_WillowPlayerController_PROPERTY_MIN_EXP_LEVEL      0x10000023
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC40            340
#define CONST_WillowScrollingListDataProviderExtras_WPS_EasterEggOption 160
#define CONST_WillowPlayerController_PROPERTY_CURR_PLOT_MISSION  0x10000022
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_LAST             350
#define CONST_WillowPlayerController_PROPERTY_IS_PUBLIC          0x10000010
#define CONST_LANServerBrowserGFxMovie_WPS_StashSlot2            132
#define CONST_OptionsGFxMovie_WPS_SplitDirection                 147
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC32 332
#define CONST_WillowPlayerController_PROPERTY_CURRMISSION        0x1000000C
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassRewardsToOfferNext 164
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC48            348
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC22           322
#define CONST_NETWORK_OPTIONS_EVENT_ID_FRIENDS_ONLY              0
#define CONST_MINIMAP_HEIGHT                                     48.0f
#define CONST_WillowOnlineGameSearch_QUERY_BROAD                 6
#define CONST_POSTAK_RTPCUpdated                                 2
#define CONST_STATE_CHARACTER_CONFIRMED                          4
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_CharacterSelectionReduxGFxMovie_ENTRY_IDX_NAME     2
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC35   335
#define CONST_CHARACTER_GRID_DIRECTION_UP                        0
#define CONST_CHARACTER_GRID_DIRECTION_DOWN                      1
#define CONST_CHARACTER_GRID_DIRECTION_LEFT                      2
#define CONST_CHARACTER_GRID_DIRECTION_RIGHT                     3
#define CONST_WillowOnlineGameSearch_PROPERTY_CURR_PLOT_MISSION  0x10000022
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC30           330
#define CONST_MAX_SECONDARY_PER_PRIMARY                          20
#define CONST_ENTRY_IDX_RESPEC                                   3
#define CONST_MaxButtons                                         5
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC11           311
#define CONST_SORT_GAME                                          0
#define CONST_WillowOnlineGameSettings_WPS_EasterEggOption       160
#define CONST_MAX_NUM_NPC_ALLIES                                 2
#define CONST_FrontendGFxMovie_WPS_ZoomToggle                    135
#define CONST_NUM_FAST_TRAVEL_BYTES                              16
#define CONST_NUM_ALLY_CACHES                                    3
#define CONST_MAX_COLISEUM_PLAYERS                               4
#define CONST_MAX_ACTIVE_WAYPOINTS                               6
#define CONST_LANServerBrowserGFxMovie_WPS_CheckedForPreviousGame 150
#define CONST_SHOP_TIMER_RESEND_RATE                             10
#define CONST_FrontendGFxMovie_PROPERTY_PLAYTHROUGH              0x10000009
#define CONST_FrontendGFxMovie_PROPERTY_MIN_EXP_LEVEL            0x10000023
#define CONST_FrontendGFxMovie_WPS_StashSlot1                    131
#define CONST_FrontendGFxMovie_PROPERTY_MAX_PLOT_MISSION         0x10000026
#define CONST_WillowOnlineGameSearch_WPS_CheckedForPreviousGame  150
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC27           327
#define CONST_WillowOnlineGameSettings_WPS_DisableUISway         163
#define CONST_WillowOnlineGameSettings_PROPERTY_HOST_EXP_LEVEL   0x10000027
#define CONST_FrontendGFxMovie_PROPERTY_DLC_FLAG                 0x10000028
#define CONST_FrontendGFxMovie_PROPERTY_DLC_MAP_PACKAGE_ID       0x10000029
#define CONST_FrontendGFxMovie_QUERY_SPECIFIC                    2
#define CONST_FrontendGFxMovie_QUERY_CUSTOM                      7
#define CONST_OptionsGFxMovie_WPS_CheckedForPreviousGame         150
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC07           307
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC47 347
#define CONST_MAX_WEAPON_CARD_MODIFIER_STATS                     5
#define CONST_FrontendGFxMovie_CONTEXT_GAME_MODE                 0x0000800B
#define CONST_PLAYER_DETAILS_BUTTON_ID_JOIN                      0
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC18 318
#define CONST_LANServerBrowserGFxMovie_QUERY_CUSTOM              7
#define CONST_FrontendGFxMovie_CONTEXT_GAME_MODE_NORMAL          0
#define CONST_WillowScrollingListDataProviderLobby_EVENT_ID_CHARSELECT 3
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS           0
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC19 319
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC12   312
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS_SOLDIER   0
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS_ASSASSIN  1
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS   0
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC42            342
#define CONST_WillowOnlineGameSearch_WPS_HasUnlockedViralAchievement 114
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC28           328
#define CONST_FrontendGFxMovie_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_IDLE             0
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC14           314
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_MENU_2           1
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_MENU_3           2
#define CONST_FrontendGFxMovie_CONTEXT_PRESENCE_MENU_4           3
#define CONST_LANServerBrowserGFxMovie_WPS_SplitDirection        147
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS     0
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC47 347
#define CONST_LANServerBrowserGFxMovie_WPS_ControllerSensitivityX 102
#define CONST_QUALITY_TYPE_GOOD                                  "good"
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC38            338
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_FIRST           300
#define CONST_WillowOnlineGameSearch_WPS_HUDScaleX               141
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC14 314
#define CONST_FrontendGFxMovie_WPS_ControllerSensitivityX        102
#define CONST_FrontendGFxMovie_WPS_ViewAccel                     104
#define CONST_FrontendGFxMovie_WPS_InvertMouseLook               105
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_MENU_4 3
#define CONST_FrontendGFxMovie_WPS_SFXVolume                     108
#define CONST_OptionsGFxMovie_WPS_VOVolume                       127
#define CONST_FrontendGFxMovie_WPS_AcceptTrades                  110
#define CONST_FrontendGFxMovie_WPS_AutoAim                       113
#define CONST_WillowOnlineGameSearch_WPS_GamepadInvertMove       155
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC44 344
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_PLAYING_4  7
#define CONST_FrontendGFxMovie_WPS_DisableOptionalVO             117
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_StashSlot2 132
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC36            336
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC01     301
#define CONST_WillowScrollingListDataProviderExtras_WPS_GunzerkingAutoSwitch 159
#define CONST_FrontendGFxMovie_WPS_ControllerPreset              115
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC05           305
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS_ASSASSIN   1
#define CONST_FrontendGFxMovie_WPS_AmbientOcclusion              119
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC27   327
#define CONST_FrontendGFxMovie_WPS_MouseSensitivity              121
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC33 333
#define CONST_FrontendGFxMovie_WPS_VoiceVolume                   124
#define CONST_FrontendGFxMovie_WPS_PerShotForceFeedback          128
#define CONST_LANServerBrowserGFxMovie_WPS_MusicVolume           107
#define CONST_FrontendGFxMovie_WPS_StashSlot0                    130
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC35   335
#define CONST_FrontendGFxMovie_WPS_CrouchToggle                  134
#define CONST_FrontendGFxMovie_WPS_BadassRewardsEarned           143
#define CONST_FrontendGFxMovie_WPS_VehicleSteering               146
#define CONST_FrontendGFxMovie_WPS_MouseSmoothing                152
#define CONST_FrontendGFxMovie_WPS_GamepadInvertTurn             154
#define CONST_FrontendGFxMovie_WPS_GamepadInvertStrafe           156
#define CONST_FrontendGFxMovie_WPS_ControllerRebinding           158
#define CONST_FrontendGFxMovie_WPS_GunzerkingAutoSwitch          159
#define CONST_FrontendGFxMovie_WPS_DisableUISway                 163
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC42 342
#define CONST_FrontendGFxMovie_WPS_BadassRewardsToOfferNext      164
#define CONST_WillowOnlineGameSearch_WPS_TEST_ItemRotation       153
#define CONST_FrontendGFxMovie_WPS_InvertedReverseSteering       165
#define CONST_FrontendGFxMovie_WPS_BackpackSortPreference        166
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC01           301
#define CONST_LANServerBrowserGFxMovie_WPS_GunzerkingAutoSwitch  159
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC03           303
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC08           308
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC09           309
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC13           313
#define CONST_WillowOnlineGameSearch_QUERY_NARROW                5
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC16           316
#define CONST_MOTD_STRUCT_KEY_DISPLAYTIME                        "\",DisplayTime="
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC18           318
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC19           319
#define CONST_WillowOnlineGameSearch_WPS_GoldenKeysEarned        162
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC20           320
#define CONST_NetworkOptionsGFxObject_NETWORK_TYPE_INVITE_ONLY   "inviteOnly"
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC21           321
#define CONST_SpawnItemPool_SPAWNS_PER_SECOND                    50.0f
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC49            349
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC23           323
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC24           324
#define CONST_WillowOnlineGameSearch_WPS_IntroMovieViewed        106
#define CONST_LANServerBrowserGFxMovie_WPS_BadassRewardsEarned   143
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC25           325
#define CONST_OptionsGFxMovie_WPS_BadassRewardsEarned            143
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC43            343
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_IDLE 0
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC29           329
#define CONST_ROW_TYPE_ID_MESSAGE_PROMPT                         2
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC32           332
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC33           333
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC34           334
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS_SIREN      2
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC35           335
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC36           336
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC37           337
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC39           339
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC41   341
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC40           340
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC40   340
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC41           341
#define CONST_MAX_DYNAMIC_MISSION_DIRECTIVES                     10
#define CONST_EVENT_ID_VIDEO_OPTIONS                             2
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC43   343
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC42           342
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC42   342
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC43           343
#define CONST_OptionsGFxMovie_WPS_GamepadInvertMove              155
#define CONST_WillowOnlineGameSearch_WPS_VoiceVolume             124
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC45   345
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC44           344
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC44   344
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC45           345
#define CONST_WillowScrollingListDataProviderExtras_WPS_TEST_ItemRotation 153
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC47   347
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC46           346
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC46   346
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC47           347
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC49   349
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_DLC48           348
#define CONST_WillowScrollingListDataProviderExtras_WPS_StashSlot2 132
#define CONST_FrontendGFxMovie_WPS_CustomUnlocks_LAST            350
#define CONST_NETWORK_OPTIONS_EVENT_ID_INVITE_ONLY               1
#define CONST_OptionsGFxMovie_PROPERTY_MIN_PLOT_MISSION          0x10000025
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC18   318
#define CONST_NETWORK_OPTIONS_EVENT_ID_PUBLIC                    2
#define CONST_QUALITY_TYPE_BAD                                   "bad"
#define CONST_NETWORK_OPTIONS_EVENT_ID_BACK                      5
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_IDLE       0
#define CONST_MOTD_STRUCT_KEY_HEADER                             "Header=\""
#define CONST_ROW_TYPE_ID_INVALID                                -1
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_MAX_PLAYER_DETAILS_BUTTONS                         7
#define CONST_PLAYER_DETAILS_BUTTON_ID_INVITE                    1
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC47   347
#define CONST_OptionsGFxMovie_WPS_KeyRebinding                   149
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC29            329
#define CONST_WillowScrollingListDataProviderExtras_WPS_AcceptTrades 110
#define CONST_PLAYER_DETAILS_BUTTON_ID_GAMERCARD                 2
#define CONST_NetworkOptionsGFxObject_NETWORK_TYPE_OFFLINE       "offline"
#define CONST_PLAYER_DETAILS_BUTTON_ID_UNMUTE                    4
#define CONST_EVENT_ID_GAMEPAD_OPTIONS                           4
#define CONST_PLAYER_DETAILS_BUTTON_ID_BACK                      6
#define CONST_PARTY_TYPE_LOCAL                                   "myParty"
#define CONST_LANServerBrowserGFxMovie_WPS_BadassRewardsToOfferNext 164
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_PLAYING_2         5
#define CONST_PARTY_TYPE_FRIEND                                  "friendParty"
#define CONST_FrontEndPlayerListGFxObject_NETWORK_TYPE_PUBLIC    "public"
#define CONST_OptionsGFxMovie_WPS_HasUnlockedViralAchievement    114
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_FrontEndPlayerListGFxObject_NETWORK_TYPE_LAN       "lan"
#define CONST_FrontEndPlayerListGFxObject_NETWORK_TYPE_INVITE_ONLY "inviteOnly"
#define CONST_FrontEndPlayerListGFxObject_NETWORK_TYPE_FRIENDS_ONLY "friendsOnly"
#define CONST_QUALITY_TYPE_GREAT                                 "great"
#define CONST_QUALITY_TYPE_ACCEPTABLE                            "acceptable"
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC23            323
#define CONST_ROW_TYPE_ID_PLAYER_INFO                            0
#define CONST_MINIMAP_WIDTH                                      58.0f
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_LAST    350
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC48   348
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC26            326
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC46   346
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC28            328
#define CONST_OptionsGFxMovie_WPS_GamepadInvertTurn              154
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC45   345
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC43   343
#define CONST_BUTTON_INDEX_TELEPORT_TO_VEHICLE                   1
#define CONST_STASH_MAX                                          4
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC42   342
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC41   341
#define CONST_WillowOnlineGameSettings_WPS_KeyRebinding          149
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC40   340
#define CONST_WillowScrollingListDataProviderFrontEnd_EVENT_ID_NETOPTIONS 10
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC39   339
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS_SOLDIER    0
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_AcceptTrades 110
#define CONST_WillowOnlineGameSearch_PROPERTY_IS_PUBLIC          0x10000010
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC38   338
#define CONST_WillowOnlineGameSettings_WPS_BadassTokensEarned    139
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC37   337
#define CONST_WillowOnlineGameSearch_WPS_BadassRewardsEarned     143
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC34   334
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC31   331
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_PLAYING_3 6
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC29   329
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_PLAYING_2 5
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC28   328
#define CONST_STARTING_MISSION_NUMBER                            0
#define CONST_WillowOnlineGameSettings_WPS_ShouldCensorContent   157
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC14     314
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC27   327
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC05            305
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC15     315
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC26   326
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC04            304
#define CONST_WillowScrollingListDataProviderExtras_WPS_AmbientOcclusion 119
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC10     310
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC23   323
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC01            301
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC12     312
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC21   321
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC03            303
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC13     313
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC20   320
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC02            302
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC19   319
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC17   317
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC14   314
#define CONST_OptionsGFxMovie_CONTEXT_GAME_MODE                  0x0000800B
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC13   313
#define CONST_TIME_BETWEEN_IF_RELEVANT                           3.f
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC12   312
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC11   311
#define CONST_LANServerBrowserGFxMovie_WPS_GamepadInvertTurn     154
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC09   309
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_MENU_4   3
#define CONST_PICKUP_SHRINK_STEP_TIME                            0.1f
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC08   308
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_MENU_5   4
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC31     331
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC06   306
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC32     332
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC05   305
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC33     333
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC04   304
#define CONST_WillowScrollingListDataProviderExtras_WPS_HUDScaleX 141
#define CONST_OptionsGFxMovie_WPS_AcceptDuels                    109
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC34     334
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC03   303
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC35     335
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC02   302
#define CONST_LANServerBrowserGFxMovie_WPS_AbsoluteMinimap       140
#define CONST_LANServerBrowserGFxMovie_WPS_PlayerFOV             129
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC36     336
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_DLC01   301
#define CONST_LANServerBrowserGFxMovie_WPS_CustomUnlocks_FIRST   300
#define CONST_LANServerBrowserGFxMovie_WPS_BackpackSortPreference 166
#define CONST_LANServerBrowserGFxMovie_WPS_GoldenKeysEarned      162
#define CONST_LANServerBrowserGFxMovie_WPS_RewardedForPlayingPreviousGame 161
#define CONST_LANServerBrowserGFxMovie_WPS_EasterEggOption       160
#define CONST_LANServerBrowserGFxMovie_WPS_ControllerRebinding   158
#define CONST_LANServerBrowserGFxMovie_WPS_ShouldCensorContent   157
#define CONST_WillowOnlineGameSettings_PROPERTY_CURRMISSION      0x1000000C
#define CONST_PS3_CHOOSE_CHAR_ID                                 -999
#define CONST_LANServerBrowserGFxMovie_WPS_GamepadInvertStrafe   156
#define CONST_LANServerBrowserGFxMovie_WPS_GamepadInvertMove     155
#define CONST_WillowScrollingListDataProviderExtras_WPS_GamepadInvertTurn 154
#define CONST_LANServerBrowserGFxMovie_WPS_TEST_ItemRotation     153
#define CONST_LANServerBrowserGFxMovie_WPS_MouseSmoothing        152
#define CONST_LANServerBrowserGFxMovie_WPS_ZoomToggle            135
#define CONST_LANServerBrowserGFxMovie_WPS_Brightness            112
#define CONST_LANServerBrowserGFxMovie_WPS_LastNewOfferVersion   151
#define CONST_LANServerBrowserGFxMovie_WPS_VehicleSteering       146
#define CONST_LANServerBrowserGFxMovie_WPS_HUDScaleY             142
#define CONST_LANServerBrowserGFxMovie_WPS_HUDScaleX             141
#define CONST_LANServerBrowserGFxMovie_WPS_BadassPointsSpent     137
#define CONST_WillowOnlineGameSettings_WPS_AcceptTrades          110
#define CONST_LANServerBrowserGFxMovie_WPS_CrouchToggle          134
#define CONST_LANServerBrowserGFxMovie_WPS_StashSlot3            133
#define CONST_NUM_RESULT_ENTRIES                                 4
#define CONST_LANServerBrowserGFxMovie_WPS_VOVolume              127
#define CONST_LANServerBrowserGFxMovie_WPS_PushToTalk            125
#define CONST_LANServerBrowserGFxMovie_WPS_MouseSensitivity      121
#define CONST_LANServerBrowserGFxMovie_WPS_LastSavedId           116
#define CONST_LANServerBrowserGFxMovie_WPS_HUDScaleE             120
#define CONST_LANServerBrowserGFxMovie_WPS_AmbientOcclusion      119
#define CONST_LANServerBrowserGFxMovie_WPS_ControllerPreset      115
#define CONST_LANServerBrowserGFxMovie_WPS_AutoAim               113
#define CONST_LANServerBrowserGFxMovie_WPS_EnableSubtitles       111
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_PLAYING_2 5
#define CONST_LANServerBrowserGFxMovie_WPS_AcceptTrades          110
#define CONST_OptionsGFxMovie_WPS_GunzerkingAutoSwitch           159
#define CONST_LANServerBrowserGFxMovie_WPS_AcceptDuels           109
#define CONST_BASE_SYSTEM_SETTING_EVENT_ID                       1000
#define CONST_LANServerBrowserGFxMovie_WPS_InvertMouseLook       105
#define CONST_LANServerBrowserGFxMovie_WPS_MasterVolume          101
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_MouseSmoothing 152
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_PLAYING_5 8
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_PLAYING_3 6
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC39     339
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_MENU_3   2
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC38     338
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_MENU_2   1
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC16 316
#define CONST_LANServerBrowserGFxMovie_CONTEXT_PRESENCE_IDLE     0
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_LANServerBrowserGFxMovie_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_LANServerBrowserGFxMovie_CONTEXT_GAME_MODE_NORMAL  0
#define CONST_WillowOnlineGameSearch_PROPERTY_EXP_LEVEL          0x10000001
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassRewardsEarned 143
#define CONST_WillowOnlineGameSearch_QUERY_DEFAULT               0
#define CONST_LANServerBrowserGFxMovie_CONTEXT_GAME_MODE         0x0000800B
#define CONST_LANServerBrowserGFxMovie_QUERY_BROAD               6
#define CONST_WillowOnlineGameSearch_WPS_PerShotForceFeedback    128
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC25 325
#define CONST_LANServerBrowserGFxMovie_QUERY_NARROW              5
#define CONST_WillowScrollingListDataProviderExtras_WPS_ViewAccel 104
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC23     323
#define CONST_LANServerBrowserGFxMovie_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC10            310
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassRewardsToOfferNext 164
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC48     348
#define CONST_LANServerBrowserGFxMovie_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_LANServerBrowserGFxMovie_PROPERTY_HOST_EXP_LEVEL   0x10000027
#define CONST_LANServerBrowserGFxMovie_PROPERTY_MIN_EXP_LEVEL    0x10000023
#define CONST_LANServerBrowserGFxMovie_PROPERTY_IS_PUBLIC        0x10000010
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CheckedForPreviousGame 150
#define CONST_LANServerBrowserGFxMovie_PROPERTY_EXP_LEVEL        0x10000001
#define CONST_WillowScrollingListDataProviderPause_EVENT_ID_EXIT 4
#define CONST_FAILURE_ICON_FRAME_NAME                            "failure"
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassTokensEarned 139
#define CONST_MAX_MISSION_OBJECTIVES                             20
#define CONST_WillowScrollingListDataProviderExtras_WPS_SplitDirection 147
#define CONST_NetworkOptionsGFxObject_NETWORK_TYPE_PUBLIC        "public"
#define CONST_NetworkOptionsGFxObject_NETWORK_TYPE_LAN           "lan"
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC03 303
#define CONST_EVENT_ID_BACK                                      -1
#define CONST_WillowOnlineGameSearch_CONTEXT_GAME_MODE           0x0000800B
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_MENU_5   4
#define CONST_NETWORK_TYPE_NONE                                  ""
#define CONST_SubtitleFormat                                     "<font size='11' color='#CCCCCC'>%message%</font>"
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_DLC_FLAG 0x10000028
#define CONST_OptionsGFxMovie_PROPERTY_EXP_LEVEL                 0x10000001
#define CONST_WillowScrollingListDataProviderExtras_WPS_EnableSubtitles 111
#define CONST_OptionsGFxMovie_PROPERTY_PLAYTHROUGH               0x10000009
#define CONST_WillowOnlineGameSettings_WPS_EnableSubtitles       111
#define CONST_OptionsGFxMovie_PROPERTY_IS_PUBLIC                 0x10000010
#define CONST_NUM_RULE_SLOTS                                     4
#define CONST_OptionsGFxMovie_PROPERTY_CURR_PLOT_MISSION         0x10000022
#define CONST_WillowOnlineGameSearch_WPS_ShouldCensorContent     157
#define CONST_OptionsGFxMovie_PROPERTY_MAX_EXP_LEVEL             0x10000024
#define CONST_OptionsGFxMovie_WPS_EnableSubtitles                111
#define CONST_OptionsGFxMovie_PROPERTY_MAX_PLOT_MISSION          0x10000026
#define CONST_WillowOnlineGameSearch_WPS_AutoAim                 113
#define CONST_OptionsGFxMovie_PROPERTY_HOST_EXP_LEVEL            0x10000027
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_PLAYING_4         7
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC12 312
#define CONST_RECENT_DROP_CAP                                    200
#define CONST_OptionsGFxMovie_PROPERTY_DLC_FLAG                  0x10000028
#define CONST_OptionsGFxMovie_PROPERTY_DLC_MAP_PACKAGE_ID        0x10000029
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC20            320
#define CONST_OptionsGFxMovie_QUERY_SPECIFIC                     2
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC45 345
#define CONST_OptionsGFxMovie_QUERY_NARROW                       5
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_PLAYING_5  8
#define CONST_OptionsGFxMovie_QUERY_BROAD                        6
#define CONST_OptionsGFxMovie_QUERY_CUSTOM                       7
#define CONST_WillowOnlineGameSearch_WPS_MouseAutoAim            167
#define CONST_OptionsGFxMovie_WPS_StashSlot0                     130
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC30 330
#define CONST_OptionsGFxMovie_CONTEXT_GAME_MODE_NORMAL           0
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS            0
#define CONST_OptionsGFxMovie_WPS_PushToTalk                     125
#define CONST_OptionsGFxMovie_CONTEXT_CHARACTER_CLASS_MERCENARY  3
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_MENU_2            1
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_MENU_3            2
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_MENU_4            3
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_MENU_5            4
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_PLAYING_3         6
#define CONST_OptionsGFxMovie_CONTEXT_PRESENCE_PLAYING_5         8
#define CONST_WillowScrollingListDataProviderExtras_WPS_MusicVolume 107
#define CONST_OptionsGFxMovie_WPS_ControllerSensitivityX         102
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_MAIN 300
#define CONST_OptionsGFxMovie_WPS_ControllerSensitivityY         103
#define CONST_OptionsGFxMovie_WPS_InvertMouseLook                105
#define CONST_OptionsGFxMovie_WPS_IntroMovieViewed               106
#define CONST_WillowScrollingListDataProviderExtras_QUERY_CUSTOM 7
#define CONST_MAX_SKILLICON_KILL                                 5
#define CONST_OptionsGFxMovie_WPS_AcceptTrades                   110
#define CONST_OptionsGFxMovie_WPS_Brightness                     112
#define CONST_OptionsGFxMovie_WPS_ControllerPreset               115
#define CONST_OptionsGFxMovie_WPS_DisableTrainingMessages        118
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC07     307
#define CONST_OptionsGFxMovie_WPS_AmbientOcclusion               119
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC30            330
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC04 304
#define CONST_OptionsGFxMovie_WPS_HUDScaleE                      120
#define CONST_OptionsGFxMovie_WPS_MouseSensitivity               121
#define CONST_VEHICLE_CHOICE_MODULE_STATE_INVALID                3
#define CONST_OptionsGFxMovie_WPS_PerShotForceFeedback           128
#define CONST_OptionsGFxMovie_WPS_PlayerFOV                      129
#define CONST_OptionsGFxMovie_WPS_StashSlot2                     132
#define CONST_OptionsGFxMovie_WPS_CrouchToggle                   134
#define CONST_WillowScrollingListDataProviderExtras_WPS_ControllerSensitivityX 102
#define CONST_OptionsGFxMovie_WPS_BadassPointsSpent              137
#define CONST_OptionsGFxMovie_WPS_BadassTokens                   138
#define CONST_OptionsGFxMovie_WPS_BadassTokensEarned             139
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_MENU_3 2
#define CONST_OptionsGFxMovie_WPS_AbsoluteMinimap                140
#define CONST_OptionsGFxMovie_WPS_HUDScaleX                      141
#define CONST_OptionsGFxMovie_WPS_HUDScaleY                      142
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ColorBlindMode 168
#define CONST_OptionsGFxMovie_WPS_DriftCameraLock                145
#define CONST_OptionsGFxMovie_WPS_TradingDisabled                148
#define CONST_OptionsGFxMovie_WPS_LastNewOfferVersion            151
#define CONST_OptionsGFxMovie_WPS_TEST_ItemRotation              153
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_OptionsGFxMovie_WPS_ControllerRebinding            158
#define CONST_OptionsGFxMovie_WPS_EasterEggOption                160
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_OptionsGFxMovie_WPS_RewardedForPlayingPreviousGame 161
#define CONST_OptionsGFxMovie_WPS_GoldenKeysEarned               162
#define CONST_WillowOnlineGameSearch_WPS_BadassRewardsToOfferNext 164
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC42 342
#define CONST_OptionsGFxMovie_WPS_DisableUISway                  163
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_PLAYING_2  5
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC22 322
#define CONST_OptionsGFxMovie_WPS_InvertedReverseSteering        165
#define CONST_OptionsGFxMovie_WPS_MouseAutoAim                   167
#define CONST_OptionsGFxMovie_WPS_ColorBlindMode                 168
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_FIRST            300
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC19     319
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC08            308
#define CONST_WillowOnlineGameSettings_WPS_BadassRewardsToOfferNext 164
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC18     318
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC09            309
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC22     322
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC11            311
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC21     321
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC12            312
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC27     327
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC14            314
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC25     325
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC16            316
#define CONST_CONNECTION_QUALITY_OK                              "one"
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC24     324
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC17            317
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC18            318
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC21            321
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC22            322
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC05     305
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC32            332
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC04     304
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC33            333
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_StashSlot1 131
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC35            335
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC02     302
#define CONST_TOOLTIP_SPACING                                    "    "
#define CONST_SKIP_UPDATE_TIME_RELEVANCE                         0.1f
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC39            339
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC44            344
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC45            345
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC46            346
#define CONST_OptionsGFxMovie_WPS_CustomUnlocks_DLC47            347
#define CONST_EVENT_ID_DEBUG                                     3
#define CONST_MAX_BUTTON_HISTORY                                 10
#define CONST_BUTTON_INDEX_SKIN_TYPE                             3
#define CONST_BUTTON_INDEX_VEHICLE_TYPE                          2
#define CONST_MAX_VEHICLE_CHOICE_MODULES                         2
#define CONST_WillowOnlineGameSearch_WPS_ControllerRebinding     158
#define CONST_FALLING_NODE_PASS_THRU_CHILD                       0
#define CONST_WillowScrollingListDataProviderExtras_WPS_MouseSmoothing 152
#define CONST_FALLING_NODE_START_CHILD                           1
#define CONST_WillowScrollingListDataProviderExtras_WPS_GoldenKeysEarned 162
#define CONST_FALLING_NODE_END_CHILD                             3
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC46 346
#define CONST_ZoomedFireModeNum                                  1
#define CONST_MAX_SKILLICON_TRIGRESP                             11
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_Brightness 112
#define CONST_WillowPlayerReplicationInfo_MAX_REPLICATED_NOUNS   20
#define CONST_WillowOnlineGameSearch_PROPERTY_CURRMISSION        0x1000000C
#define CONST_WillowOnlineGameSearch_PROPERTY_MIN_EXP_LEVEL      0x10000023
#define CONST_WillowOnlineGameSearch_PROPERTY_MAX_EXP_LEVEL      0x10000024
#define CONST_WillowOnlineGameSearch_PROPERTY_MIN_PLOT_MISSION   0x10000025
#define CONST_WillowOnlineGameSearch_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_WillowOnlineGameSettings_PROPERTY_PLAYTHROUGH      0x10000009
#define CONST_WillowOnlineGameSearch_QUERY_CUSTOM                7
#define CONST_WillowOnlineGameSearch_CONTEXT_GAME_MODE_NORMAL    0
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_GoldenKeysEarned 162
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_WillowOnlineGameSearch_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_MENU_2     1
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_MENU_4     3
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC43 343
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_DlcNotifications 122
#define CONST_WillowOnlineGameSearch_CONTEXT_PRESENCE_PLAYING_3  6
#define CONST_WillowOnlineGameSearch_WPS_MasterVolume            101
#define CONST_WillowOnlineGameSearch_WPS_ControllerSensitivityX  102
#define CONST_WillowOnlineGameSearch_WPS_ControllerSensitivityY  103
#define CONST_WillowOnlineGameSearch_WPS_MusicVolume             107
#define CONST_WillowOnlineGameSearch_WPS_EnableSubtitles         111
#define CONST_WillowOnlineGameSearch_WPS_Brightness              112
#define CONST_WillowOnlineGameSearch_WPS_DisableOptionalVO       117
#define CONST_WillowOnlineGameSearch_WPS_AmbientOcclusion        119
#define CONST_WillowOnlineGameSearch_WPS_MouseSensitivity        121
#define CONST_WillowOnlineGameSearch_WPS_DlcNotifications        122
#define CONST_WillowOnlineGameSearch_WPS_DriftCameraLock         145
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BackpackSortPreference 166
#define CONST_WillowOnlineGameSearch_WPS_PushToTalk              125
#define CONST_WillowScrollingListDataProviderLobby_EVENT_ID_EXIT 1
#define CONST_WillowOnlineGameSearch_WPS_VOVolume                127
#define CONST_WillowOnlineGameSettings_WPS_MouseSmoothing        152
#define CONST_WillowOnlineGameSearch_WPS_PlayerFOV               129
#define CONST_WillowOnlineGameSettings_WPS_ControllerRebinding   158
#define CONST_WillowOnlineGameSearch_WPS_StashSlot0              130
#define CONST_WillowOnlineGameSearch_WPS_StashSlot2              132
#define CONST_WillowOnlineGameSearch_WPS_CrouchToggle            134
#define CONST_WillowScrollingListDataProviderFrontEnd_EVENT_ID_CHARSELECT 11
#define CONST_WillowOnlineGameSettings_QUERY_SPECIFIC            2
#define CONST_WillowOnlineGameSearch_WPS_BadassPoints            136
#define CONST_WillowOnlineGameSearch_WPS_BadassPointsSpent       137
#define CONST_WillowOnlineGameSearch_WPS_BadassTokens            138
#define CONST_WillowOnlineGameSearch_WPS_BadassTokensEarned      139
#define CONST_WillowOnlineGameSearch_WPS_AbsoluteMinimap         140
#define CONST_WillowOnlineGameSearch_WPS_TradingDisabled         148
#define CONST_WillowOnlineGameSearch_WPS_LastNewOfferVersion     151
#define CONST_WillowOnlineGameSearch_WPS_MouseSmoothing          152
#define CONST_WillowOnlineGameSearch_WPS_GamepadInvertTurn       154
#define CONST_WillowOnlineGameSearch_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowOnlineGameSearch_WPS_ColorBlindMode          168
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_FIRST     300
#define CONST_WillowScrollingListDataProviderExtras_WPS_InvertedReverseSteering 165
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_MAIN      300
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC08     308
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_LAST 350
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC09     309
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC28     328
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC29     329
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC37     337
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC40     340
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC41     341
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC42     342
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC43     343
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC44     344
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC45     345
#define CONST_WillowOnlineGameSearch_WPS_CustomUnlocks_DLC46     346
#define CONST_FailsafeCheckPeriod                                5
#define CONST_WillowOnlineGameSettings_PROPERTY_EXP_LEVEL        0x10000001
#define CONST_WillowOnlineGameSettings_PROPERTY_CURR_PLOT_MISSION 0x10000022
#define CONST_WillowOnlineGameSettings_PROPERTY_MIN_EXP_LEVEL    0x10000023
#define CONST_WillowOnlineGameSettings_PROPERTY_MIN_PLOT_MISSION 0x10000025
#define CONST_WillowOnlineGameSettings_PROPERTY_MAX_PLOT_MISSION 0x10000026
#define CONST_WillowOnlineGameSettings_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_WillowOnlineGameSettings_QUERY_DEFAULT             0
#define CONST_WillowOnlineGameSettings_WPS_TradingDisabled       148
#define CONST_WillowOnlineGameSettings_QUERY_NARROW              5
#define CONST_WillowOnlineGameSettings_QUERY_BROAD               6
#define CONST_WillowOnlineGameSettings_QUERY_CUSTOM              7
#define CONST_WillowOnlineGameSettings_CONTEXT_GAME_MODE         0x0000800B
#define CONST_WillowOnlineGameSettings_CONTEXT_GAME_MODE_NORMAL  0
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_WillowOnlineGameSettings_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_MENU_2   1
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_PLAYING_2 5
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_PLAYING_3 6
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_PLAYING_4 7
#define CONST_WillowOnlineGameSettings_CONTEXT_PRESENCE_PLAYING_5 8
#define CONST_WillowScrollingListDataProviderExtras_WPS_MouseAutoAim 167
#define CONST_WillowOnlineGameSettings_WPS_MasterVolume          101
#define CONST_WillowOnlineGameSettings_WPS_ControllerSensitivityX 102
#define CONST_WillowOnlineGameSettings_WPS_ControllerSensitivityY 103
#define CONST_WillowScrollingListDataProviderExtras_WPS_VoiceVolume 124
#define CONST_WillowOnlineGameSettings_WPS_ViewAccel             104
#define CONST_WillowOnlineGameSettings_WPS_InvertMouseLook       105
#define CONST_WillowOnlineGameSettings_WPS_MusicVolume           107
#define CONST_WillowOnlineGameSettings_WPS_SFXVolume             108
#define CONST_WillowOnlineGameSettings_WPS_AcceptDuels           109
#define CONST_WillowOnlineGameSettings_WPS_Brightness            112
#define CONST_WillowOnlineGameSettings_WPS_AutoAim               113
#define CONST_WillowOnlineGameSettings_WPS_HasUnlockedViralAchievement 114
#define CONST_WillowOnlineGameSettings_WPS_ControllerPreset      115
#define CONST_WillowOnlineGameSettings_WPS_AmbientOcclusion      119
#define CONST_WillowOnlineGameSettings_WPS_DlcNotifications      122
#define CONST_WillowOnlineGameSettings_WPS_VoiceVolume           124
#define CONST_WillowOnlineGameSettings_WPS_PushToTalk            125
#define CONST_WillowOnlineGameSettings_WPS_PerShotForceFeedback  128
#define CONST_WillowOnlineGameSettings_WPS_StashSlot0            130
#define CONST_WillowOnlineGameSettings_WPS_StashSlot1            131
#define CONST_WillowScrollingListDataProviderExtras_WPS_HUDScaleE 120
#define CONST_WillowOnlineGameSettings_WPS_StashSlot2            132
#define CONST_WillowOnlineGameSettings_WPS_StashSlot3            133
#define CONST_WillowOnlineGameSettings_WPS_CrouchToggle          134
#define CONST_WillowOnlineGameSettings_WPS_ZoomToggle            135
#define CONST_CONNECTION_QUALITY_NONE                            "none"
#define CONST_WillowOnlineGameSettings_WPS_BadassPoints          136
#define CONST_WillowOnlineGameSettings_WPS_BadassTokens          138
#define CONST_WillowOnlineGameSettings_WPS_AbsoluteMinimap       140
#define CONST_WillowOnlineGameSettings_WPS_HUDScaleX             141
#define CONST_WillowOnlineGameSettings_WPS_HUDScaleY             142
#define CONST_WillowOnlineGameSettings_WPS_BadassRewardsEarned   143
#define CONST_WillowOnlineGameSettings_WPS_DriftCameraLock       145
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_PLAYING_4 7
#define CONST_WillowOnlineGameSettings_WPS_VehicleSteering       146
#define CONST_WillowOnlineGameSettings_WPS_SplitDirection        147
#define CONST_WillowScrollingListDataProviderExtras_WPS_ControllerRebinding 158
#define CONST_WillowOnlineGameSettings_WPS_CheckedForPreviousGame 150
#define CONST_WillowOnlineGameSettings_WPS_TEST_ItemRotation     153
#define CONST_WillowOnlineGameSettings_WPS_GamepadInvertTurn     154
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC36 336
#define CONST_WillowOnlineGameSettings_WPS_GamepadInvertMove     155
#define CONST_WillowOnlineGameSettings_WPS_GamepadInvertStrafe   156
#define CONST_WillowOnlineGameSettings_WPS_GunzerkingAutoSwitch  159
#define CONST_WillowOnlineGameSettings_WPS_GoldenKeysEarned      162
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_WillowOnlineGameSettings_WPS_InvertedReverseSteering 165
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC37 337
#define CONST_WillowOnlineGameSettings_WPS_BackpackSortPreference 166
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_FIRST   300
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC24 324
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC01   301
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC27 327
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_TradingDisabled 148
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_VOVolume 127
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC02   302
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC26 326
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC03   303
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC21 321
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC04   304
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC20 320
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC05   305
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC23 323
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC06   306
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC22 322
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC07   307
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC10   310
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC11   311
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC14   314
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC15   315
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC16   316
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC13 313
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC18   318
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC12 312
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC19   319
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC22   322
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC23   323
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC24   324
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC25   325
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC26   326
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC30   330
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC31   331
#define CONST_WillowScrollingListDataProviderExtras_WPS_HasUnlockedViralAchievement 114
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC34   334
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC36   336
#define CONST_WillowOnlineGameSettings_WPS_CustomUnlocks_DLC37   337
#define CONST_CONNECTION_QUALITY_GREAT                           "three"
#define CONST_MAX_EXIT_POINTS                                    4
#define CONST_MAX_ARMS_LEADING_ROTATION_HISTORY                  10
#define CONST_WEATHER_PSC_INSTANCE_DATA_NAME_2                   'WeatherParticle'
#define CONST_WEATHER_PSC_INSTANCE_DATA_NAME_3                   'WeatherParticle_Screen'
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_EXP_LEVEL 0x10000001
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_PLAYTHROUGH 0x10000009
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_CURRMISSION 0x1000000C
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_IS_PUBLIC 0x10000010
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_CURR_PLOT_MISSION 0x10000022
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_MIN_EXP_LEVEL 0x10000023
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_MIN_PLOT_MISSION 0x10000025
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_MAX_PLOT_MISSION 0x10000026
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_HOST_EXP_LEVEL 0x10000027
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_DLC_FLAG 0x10000028
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_WillowScrollingListDataProviderOptionsBase_PROPERTY_DLC_MAP_CONTENT_ID 0x1000000D
#define CONST_WillowScrollingListDataProviderOptionsBase_QUERY_DEFAULT 0
#define CONST_WillowScrollingListDataProviderOptionsBase_QUERY_BROAD 6
#define CONST_WillowScrollingListDataProviderExtras_WPS_SFXVolume 108
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_GAME_MODE_NORMAL 0
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_EVENT_ID_PREVIOUS_MENU                             99
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS_ASSASSIN 1
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_CHARACTER_CLASS_MECHROMANCER 4
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_PushToTalk 125
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_IDLE 0
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_MENU_3 2
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_MENU_4 3
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_MENU_5 4
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_PLAYING_2 5
#define CONST_WillowScrollingListDataProviderOptionsBase_CONTEXT_PRESENCE_PLAYING_5 8
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ControllerSensitivityX 102
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ControllerSensitivityY 103
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ViewAccel 104
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_IntroMovieViewed 106
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_MusicVolume 107
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_SFXVolume 108
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_AcceptDuels 109
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_EnableSubtitles 111
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_AutoAim 113
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_HasUnlockedViralAchievement 114
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ControllerPreset 115
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_LastSavedId 116
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_DisableOptionalVO 117
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_DisableTrainingMessages 118
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_AmbientOcclusion 119
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_HUDScaleE 120
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_MouseSensitivity 121
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_VoiceVolume 124
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_PlayerFOV 129
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ZoomToggle 135
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassPointsSpent 137
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassTokens 138
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassTokensEarned 139
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_AbsoluteMinimap 140
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_HUDScaleY 142
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_VehicleSteering 146
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_BadassRewardsEarned 143
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_DriftCameraLock 145
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_SplitDirection 147
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_KeyRebinding 149
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_TEST_ItemRotation 153
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_GamepadInvertTurn 154
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_GamepadInvertMove 155
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_ShouldCensorContent 157
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_EasterEggOption 160
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_DisableUISway 163
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_InvertedReverseSteering 165
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_MouseAutoAim 167
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_FIRST 300
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC01 301
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC02 302
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC05 305
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC06 306
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC07 307
#define CONST_WillowScrollingListDataProviderExtras_QUERY_SPECIFIC 2
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC08 308
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC10 310
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC11 311
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC17 317
#define CONST_EVENT_ID_GEARBOX_ACCOUNT                           1
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC28 328
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC29 329
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC31 331
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC32 332
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC33 333
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS 0
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC34 334
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC38 338
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC39 339
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC40 340
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC41 341
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC48 348
#define CONST_WillowScrollingListDataProviderOptionsBase_WPS_CustomUnlocks_DLC49 349
#define CONST_EVENT_ID_APPLY_CHANGES                             5000
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_EXP_LEVEL 0x10000001
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_PLAYTHROUGH 0x10000009
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_CURRMISSION 0x1000000C
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_IS_PUBLIC 0x10000010
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_CURR_PLOT_MISSION 0x10000022
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC08 308
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_MIN_EXP_LEVEL 0x10000023
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_MAX_PLOT_MISSION 0x10000026
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_HOST_EXP_LEVEL 0x10000027
#define CONST_WillowScrollingListDataProviderExtras_PROPERTY_DLC_MAP_PACKAGE_ID 0x10000029
#define CONST_WillowScrollingListDataProviderExtras_QUERY_NARROW 5
#define CONST_WillowScrollingListDataProviderExtras_QUERY_BROAD  6
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_GAME_MODE 0x0000800B
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_GAME_MODE_NORMAL 0
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS_SOLDIER 0
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS_SIREN 2
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_CHARACTER_CLASS_MERCENARY 3
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_MENU_2 1
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_MENU_5 4
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_PLAYING_4 7
#define CONST_WillowScrollingListDataProviderExtras_CONTEXT_PRESENCE_PLAYING_5 8
#define CONST_WillowScrollingListDataProviderExtras_WPS_MasterVolume 101
#define CONST_WillowScrollingListDataProviderExtras_WPS_ControllerSensitivityY 103
#define CONST_EVENT_ID_CREDITS                                   0
#define CONST_WillowScrollingListDataProviderExtras_WPS_InvertMouseLook 105
#define CONST_WillowScrollingListDataProviderExtras_WPS_Brightness 112
#define CONST_WillowScrollingListDataProviderExtras_WPS_LastSavedId 116
#define CONST_WillowScrollingListDataProviderExtras_WPS_DisableOptionalVO 117
#define CONST_WillowScrollingListDataProviderExtras_WPS_DlcNotifications 122
#define CONST_WillowScrollingListDataProviderExtras_WPS_PushToTalk 125
#define CONST_WillowScrollingListDataProviderExtras_WPS_VOVolume 127
#define CONST_WillowScrollingListDataProviderExtras_WPS_PerShotForceFeedback 128
#define CONST_WillowScrollingListDataProviderExtras_WPS_PlayerFOV 129
#define CONST_WillowScrollingListDataProviderExtras_WPS_VehicleSteering 146
#define CONST_WillowScrollingListDataProviderExtras_WPS_StashSlot0 130
#define CONST_WillowScrollingListDataProviderExtras_WPS_StashSlot1 131
#define CONST_WillowScrollingListDataProviderExtras_WPS_StashSlot3 133
#define CONST_WillowScrollingListDataProviderExtras_WPS_CrouchToggle 134
#define CONST_WillowScrollingListDataProviderExtras_WPS_BackpackSortPreference 166
#define CONST_WillowScrollingListDataProviderExtras_WPS_ZoomToggle 135
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassPoints 136
#define CONST_WillowScrollingListDataProviderExtras_WPS_BadassPointsSpent 137
#define CONST_WillowScrollingListDataProviderExtras_WPS_AbsoluteMinimap 140
#define CONST_WillowScrollingListDataProviderExtras_WPS_HUDScaleY 142
#define CONST_WillowScrollingListDataProviderExtras_WPS_DriftCameraLock 145
#define CONST_WillowScrollingListDataProviderExtras_WPS_TradingDisabled 148
#define CONST_WillowScrollingListDataProviderExtras_WPS_KeyRebinding 149
#define CONST_WillowScrollingListDataProviderExtras_WPS_CheckedForPreviousGame 150
#define CONST_WillowScrollingListDataProviderExtras_WPS_GamepadInvertMove 155
#define CONST_WillowScrollingListDataProviderExtras_WPS_GamepadInvertStrafe 156
#define CONST_WillowScrollingListDataProviderExtras_WPS_ShouldCensorContent 157
#define CONST_WillowScrollingListDataProviderExtras_WPS_RewardedForPlayingPreviousGame 161
#define CONST_WillowScrollingListDataProviderExtras_WPS_ColorBlindMode 168
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_MAIN 300
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC01 301
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC02 302
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC03 303
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC05 305
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC06 306
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC07 307
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC09 309
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC10 310
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC11 311
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC13 313
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC14 314
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC15 315
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC16 316
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC17 317
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC19 319
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC20 320
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC26 326
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC28 328
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC30 330
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC31 331
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC34 334
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC35 335
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC36 336
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC37 337
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC38 338
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC39 339
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC40 340
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC41 341
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC43 343
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC44 344
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC45 345
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC48 348
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_DLC49 349
#define CONST_WillowScrollingListDataProviderExtras_WPS_CustomUnlocks_LAST 350
#define CONST_EVENT_ID_CONTINUE                                  0
#define CONST_WillowScrollingListDataProviderFrontEnd_EVENT_ID_OPTIONS 2
#define CONST_EVENT_ID_EXTRAS                                    3
#define CONST_EVENT_ID_DLC                                       4
#define CONST_EVENT_ID_NEW_GAME                                  6
#define CONST_EVENT_ID_LAN_BROWSER                               7
#define CONST_EVENT_ID_COMPATPACK                                9
#define CONST_EVENT_ID_KEYBINDINGS                               1000
#define CONST_EVENT_ID_RESETKEYBINDINGS                          1001
#define CONST_EVENT_ID_PLAY                                      0
#define CONST_WillowScrollingListDataProviderLobby_EVENT_ID_OPTIONS 2
#define CONST_EVENT_ID_QUICK_MATCH                               0
#define CONST_EVENT_ID_CUSTOM_MATCH                              1
#define CONST_EVENT_ID_RESUME                                    0
#define CONST_WillowScrollingListDataProviderPause_EVENT_ID_OPTIONS 2
#define CONST_EVENT_ID_AUDIO_OPTIONS                             1
#define CONST_EVENT_ID_CHANGE_STORAGE_DEVICE                     5
#define CONST_EVENT_ID_RESOLUTION                                5000
#define CONST_EVENT_ID_WINDOW_MODE                               5001
#define CONST_SCROLL_ACCEL_RATE                                  0.85f
#define CONST_SCROLL_MIN_DELAY                                   0.02f
#define CONST_SCROLL_INITIAL_DELAY                               0.1f
#define CONST_INTERRUPT_FADE_OUT_TIME                            0.1f
#define CONST_CLOSE_FADE_OUT_TIME                                0.3f
#define CONST_GEARBUILDER_MAX_CONFIGURABLE_ITEM_PARTS            9
#define CONST_GEARBUILDER_MAX_CONFIGURABLE_WEAPON_PARTS          9
#define CONST_InProgressMenu                                     0
#define CONST_CompletedMenu                                      2
#define CONST_IneligibleMenu                                     3
#define CONST_FastTravelMenu                                     0
#define CONST_LevelTravelMenu                                    1
#define CONST_MaxItemsInShop                                     30
#define CONST_DETECTION_TIME_INTERVAL                            0.5f

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WillowGame.AchievementUtility.EAchievementUnlockType
//enum class EAchievementUnlockType : uint8_t
//{
//	AUT_ZoneIn                     = 0,
//	AUT_EarnMoney                  = 1,
//	AUT_LeveledUp                  = 2,
//	AUT_InstinctUp                 = 3,
//	AUT_FallHeight                 = 4,
//	AUT_HangTime                   = 5,
//	AUT_QuestCompleted             = 6,
//	AUT_ActionSkillKill            = 7,
//	AUT_QuestCompletedCoOp         = 8,
//	AUT_SpeedyTravel               = 9,
//	AUT_SpeedyKills                = 10,
//	AUT_RushTime                   = 11,
//	AUT_InventorySlotChange        = 12,
//	AUT_KilledLeveledUpPawn        = 13,
//	AUT_TokensSpent                = 14,
//	AUT_CustomizationsUnlocks      = 15,
//	AUT_SideMissionsCompleted      = 16,
//	AUT_PurchasedBlackMarketItem   = 17,
//	AUT_MAX                        = 18
//};


// Enum WillowGame.AchievementUtility.EWillowAchievementList
//enum class EWillowAchievementList : uint8_t
//{
//	WA_Invalid                     = 0,
//	WA_PlotMission1                = 1,
//	WA_PlotMission2                = 2,
//	WA_PlotMission3                = 3,
//	WA_PlotMission4                = 4,
//	WA_PlotMission5                = 5,
//	WA_PlotMission6                = 6,
//	WA_PlotMission7                = 7,
//	WA_PlotMission8                = 8,
//	WA_PlotMission9                = 9,
//	WA_PlotMission10               = 10,
//	WA_PlotMission11               = 11,
//	WA_PlotMission12               = 12,
//	WA_PlotMission13               = 13,
//	WA_PlotMission14               = 14,
//	WA_PlotMission15               = 15,
//	WA_PlotMission16               = 16,
//	WA_ChallengeAccepted           = 17,
//	WA_GoliathMeetDavid            = 18,
//	WA_WentFiveRounds              = 19,
//	WA_NotQuiteDead                = 20,
//	WA_BetterThanYouWere           = 21,
//	WA_AlwaysImproving             = 22,
//	WA_CappedOutForNow             = 23,
//	WA_ArcticExplorer              = 24,
//	WA_UrbanExplorer               = 25,
//	WA_HighlandsExplorer           = 26,
//	WA_BlightExplorer              = 27,
//	WA_WorldTraveler               = 28,
//	WA_SugarDaddy                  = 29,
//	WA_DeckedOut                   = 30,
//	WA_SabreRattler                = 31,
//	WA_PhasedAndConfused           = 32,
//	WA_SoMuchBlood                 = 33,
//	WA_CuteLoot                    = 34,
//	WA_TributeToAVaultHunter       = 35,
//	WA_DefinitelyAnItalianPlumber  = 36,
//	WA_HighFlyingHurler            = 37,
//	WA_TokenGesture                = 38,
//	WA_WhatDoesItMean              = 39,
//	WA_UnseenPredator              = 40,
//	WA_BuildBuster                 = 41,
//	WA_WellThatWasEasy             = 42,
//	WA_HowDoILook                  = 43,
//	WA_ThresherThrashed            = 44,
//	WA_FriendshipRules             = 45,
//	WA_BetterThanMoney             = 46,
//	WA_UpHighDownLow               = 47,
//	WA_BountyHunter                = 48,
//	WA_DidItAll                    = 49,
//	WA_FeelsLikeTheFirstTime       = 50,
//	WA_DLC1_Achievement1           = 51,
//	WA_DLC1_Achievement2           = 52,
//	WA_DLC1_Achievement3           = 53,
//	WA_Iris_CompleteMainCampaign   = 54,
//	WA_Iris_CompleteSideMissions   = 55,
//	WA_Iris_CollectItems           = 56,
//	WA_Sage_CompleteMainCampaign   = 57,
//	WA_Sage_CompleteSideMissions   = 58,
//	WA_Sage_DiscoverAllAreas       = 59,
//	WA_DLCReserved                 = 60,
//	WA_DLCReserved01               = 61,
//	WA_DLCReserved02               = 62,
//	WA_DLCReserved03               = 63,
//	WA_DLCReserved04               = 64,
//	WA_DLCReserved05               = 65,
//	WA_DLCReserved06               = 66,
//	WA_DLCReserved07               = 67,
//	WA_DLCReserved08               = 68,
//	WA_DLCReserved09               = 69,
//	WA_DLCReserved10               = 70,
//	WA_DLCReserved11               = 71,
//	WA_DLCReserved12               = 72,
//	WA_DLCReserved13               = 73,
//	WA_DLCReserved14               = 74,
//	WA_DLCReserved15               = 75,
//	WA_DLCReserved16               = 76,
//	WA_DLCReserved17               = 77,
//	WA_DLCReserved18               = 78,
//	WA_DLCReserved19               = 79,
//	WA_DLCReserved20               = 80,
//	WA_DLCReserved21               = 81,
//	WA_DLCReserved22               = 82,
//	WA_DLCReserved23               = 83,
//	WA_DLCReserved24               = 84,
//	WA_DLCReserved25               = 85,
//	WA_DLCReserved26               = 86,
//	WA_DLCReserved27               = 87,
//	WA_DLCReserved28               = 88,
//	WA_DLCReserved29               = 89,
//	WA_DLCReserved30               = 90,
//	WA_DLCReserved31               = 91,
//	WA_DLCReserved32               = 92,
//	WA_DLCReserved33               = 93,
//	WA_DLCReserved34               = 94,
//	WA_DLCReserved35               = 95,
//	WA_DLCReserved36               = 96,
//	WA_DLCReserved37               = 97,
//	WA_DLCReserved38               = 98,
//	WA_DLCReserved39               = 99,
//	WA_MAX                         = 100
//};


// Enum WillowGame.StanceTypeDefinition.EDefaultStance
//enum class EDefaultStance : uint8_t
//{
//	STANCE_Patrol                  = 0,
//	STANCE_Run                     = 1,
//	STANCE_Sprint                  = 2,
//	STANCE_Injured                 = 3,
//	STANCE_None                    = 4,
//	STANCE_Crouch                  = 5,
//	STANCE_MAX                     = 6
//};


// Enum WillowGame.StanceTypeDefinition.EMoveStyle
//enum class EMoveStyle : uint8_t
//{
//	MOVE_Strafe                    = 0,
//	MOVE_Forward                   = 1,
//	MOVE_MAX                       = 2
//};


// Enum WillowGame.WillowDamageTypeDefinition.EDamageType
//enum class EDamageType : uint8_t
//{
//	DAMAGE_TYPE_Unknown            = 0,
//	DAMAGE_TYPE_Incindiary         = 1,
//	DAMAGE_TYPE_Shock              = 2,
//	DAMAGE_TYPE_Explosive          = 3,
//	DAMAGE_TYPE_Corrosive          = 4,
//	DAMAGE_TYPE_Impact             = 5,
//	DAMAGE_TYPE_Healing            = 6,
//	DAMAGE_TYPE_Amp                = 7,
//	DAMAGE_TYPE_MAX                = 8
//};


// Enum WillowGame.BodyClassDefinition.ECloakStyle
//enum class ECloakStyle : uint8_t
//{
//	CLOAKSTYLE_None                = 0,
//	CLOAKSTYLE_Hide                = 1,
//	CLOAKSTYLE_Visible             = 2,
//	CLOAKSTYLE_VisibleHUD          = 3,
//	CLOAKSTYLE_MAX                 = 4
//};


// Enum WillowGame.BodyClassDefinition.ECloakType
//enum class ECloakType : uint8_t
//{
//	CLOAK_Spawn                    = 0,
//	CLOAK_AttackMove               = 1,
//	CLOAK_AttackAnim               = 2,
//	CLOAK_PatrolPath               = 3,
//	CLOAK_PatrolPerch              = 4,
//	CLOAK_PatrolRandom             = 5,
//	CLOAK_RunHome                  = 6,
//	CLOAK_Unprovoked               = 7,
//	CLOAK_ScriptedMove             = 8,
//	CLOAK_SpawnAnim                = 9,
//	CLOAK_PhysicsJump              = 10,
//	CLOAK_MAX                      = 11
//};


// Enum WillowGame.BodyClassDefinition.EFlinchSeverity
//enum class EFlinchSeverity : uint8_t
//{
//	EF_NoFlinch                    = 0,
//	EF_SmallFlinch                 = 1,
//	EF_MediumFlinch                = 2,
//	EF_LargeFlinch                 = 3,
//	EF_CriticalFlinch              = 4,
//	EF_MAX                         = 5
//};


// Enum WillowGame.AttackLocation_LineOfSight.ELineOfSight
//enum class ELineOfSight : uint8_t
//{
//	ELOS_Keep                      = 0,
//	ELOS_Avoid                     = 1,
//	ELOS_Arc                       = 2,
//	ELOS_MAX                       = 3
//};


// Enum WillowGame.Action_GenericAttack.EAttackValidity
//enum class EAttackValidity : uint8_t
//{
//	Validity_None                  = 0,
//	Validity_Partial               = 1,
//	Validity_Full                  = 2,
//	Validity_MAX                   = 3
//};


// Enum WillowGame.Action_GenericAttack.EAttackType
//enum class EAttackType : uint8_t
//{
//	Attack_Far                     = 0,
//	Attack_Close                   = 1,
//	Attack_InPlace                 = 2,
//	Attack_MAX                     = 3
//};


// Enum WillowGame.Action_AnimAttack.EAimType
//enum class EAimType : uint8_t
//{
//	AimType_HoldStill              = 0,
//	AimType_FollowTarget           = 1,
//	AimType_AlignToTarget          = 2,
//	AimType_MAX                    = 3
//};


// Enum WillowGame.Action_BasicAttack.ERangeType
//enum class ERangeType : uint8_t
//{
//	Range_None                     = 0,
//	Range_Zone                     = 1,
//	Range_Numbers                  = 2,
//	Range_MAX                      = 3
//};


// Enum WillowGame.WillowAIComponent.EThreatLevel
//enum class EThreatLevel : uint8_t
//{
//	ETL_NoThreat                   = 0,
//	ETL_InThreatRadius             = 1,
//	ETL_SeenInThreatRadius         = 2,
//	ETL_Provoked                   = 3,
//	ETL_MAX                        = 4
//};


// Enum WillowGame.WillowAIComponent.TargetExposure
//enum class ETargetExposure : uint8_t
//{
//	Exposure_None                  = 0,
//	Exposure_Half                  = 1,
//	Exposure_Full                  = 2,
//	Exposure_MAX                   = 3
//};


// Enum WillowGame.WillowAIComponent.ECombatPointLOS
//enum class ECombatPointLOS : uint8_t
//{
//	CPLOS_Ignore                   = 0,
//	CPLOS_UseLOS                   = 1,
//	CPLOS_AvoidLOS                 = 2,
//	CPLOS_MAX                      = 3
//};


// Enum WillowGame.Behavior_AICloak.ECloakOverride
//enum class ECloakOverride : uint8_t
//{
//	CLOAKOVERRIDE_None             = 0,
//	CLOAKOVERRIDE_Cloak            = 1,
//	CLOAKOVERRIDE_Uncloak          = 2,
//	CLOAKOVERRIDE_MAX              = 3
//};


// Enum WillowGame.Action_Idle.EFollowType
//enum class EFollowType : uint8_t
//{
//	Follow_None                    = 0,
//	Follow_Parent                  = 1,
//	Follow_Target                  = 2,
//	Follow_Master                  = 3,
//	Follow_MAX                     = 4
//};


// Enum WillowGame.Action_Drive_Pursuit.EPursuitState
//enum class EPursuitState : uint8_t
//{
//	PS_UnsetArea                   = 0,
//	PS_WeAreInSameArea             = 1,
//	PS_WeAreInDifferentAreas       = 2,
//	PS_IAmOutsideMyArea            = 3,
//	PS_TargetHasNoArea             = 4,
//	PS_MAX                         = 5
//};


// Enum WillowGame.WillowLightProjectileManager.EBeamSource
//enum class EBeamSource : uint8_t
//{
//	EBS_Weapon                     = 0,
//	EBS_Pawn                       = 1,
//	EBS_WorldBody                  = 2,
//	EBS_MAX                        = 3
//};


// Enum WillowGame.WillowLightProjectileManager.EBulletFromClip
//enum class EBulletFromClip : uint8_t
//{
//	BFC_Other                      = 0,
//	BFC_First                      = 1,
//	BFC_Last                       = 2,
//	BFC_MAX                        = 3
//};


// Enum WillowGame.Behavior_AISetFlight.EFlightMode
//enum class EBehavior_AISetFlight_EFlightMode : uint8_t
//{
//	Flight_Land                    = 0,
//	Flight_TakeOff                 = 1,
//	Flight_MAX                     = 2
//};


// Enum WillowGame.Action_SweepAttack.ESweepDirection
//enum class ESweepDirection : uint8_t
//{
//	Sweep_Left                     = 0,
//	Sweep_Right                    = 1,
//	Sweep_Random                   = 2,
//	Sweep_MAX                      = 3
//};


// Enum WillowGame.Action_SwoopAttack.ESwoopOffset
//enum class ESwoopOffset : uint8_t
//{
//	SwoopOffset_Left               = 0,
//	SwoopOffset_Right              = 1,
//	SwoopOffset_Random             = 2,
//	SwoopOffset_MAX                = 3
//};


// Enum WillowGame.WillowPlayerStats.EDamageCauserType
//enum class EDamageCauserType : uint8_t
//{
//	DAMAGE_CAUSER_TYPE_Unknown     = 0,
//	DAMAGE_CAUSER_TYPE_Pistol      = 1,
//	DAMAGE_CAUSER_TYPE_Shotgun     = 2,
//	DAMAGE_CAUSER_TYPE_AssaultRifle = 3,
//	DAMAGE_CAUSER_TYPE_SniperRifle = 4,
//	DAMAGE_CAUSER_TYPE_SMG         = 5,
//	DAMAGE_CAUSER_TYPE_Frag_Grenade = 6,
//	DAMAGE_CAUSER_TYPE_Protean_Grenade = 7,
//	DAMAGE_CAUSER_TYPE_Vehicle     = 8,
//	DAMAGE_CAUSER_TYPE_VehicleWeapon = 9,
//	DAMAGE_CAUSER_TYPE_Melee       = 10,
//	DAMAGE_CAUSER_TYPE_Turret      = 11,
//	DAMAGE_CAUSER_TYPE_Launcher    = 12,
//	DAMAGE_CAUSER_TYPE_ExtraWeapon1 = 13,
//	DAMAGE_CAUSER_TYPE_ExtraWeapon2 = 14,
//	DAMAGE_CAUSER_TYPE_ExtraWeapon3 = 15,
//	DAMAGE_CAUSER_TYPE_ExtraWeapon4 = 16,
//	DAMAGE_CAUSER_TYPE_MAX         = 17
//};


// Enum WillowGame.InteractiveObjectDefinition.EOnTouchEventOutputs
//enum class EOnTouchEventOutputs : uint8_t
//{
//	EONTOUCH_Player                = 0,
//	EONTOUCH_NotPlayer             = 1,
//	EONTOUCH_MAX                   = 2
//};


// Enum WillowGame.InteractiveObjectDefinition.ERelevanceDistance
//enum class ERelevanceDistance : uint8_t
//{
//	RELEVANCE_Lootable             = 0,
//	RELEVANCE_Outpost              = 1,
//	RELEVANCE_Huge                 = 2,
//	RELEVANCE_MAX                  = 3
//};


// Enum WillowGame.InteractionIconDefinition.EInteractionIcons
//enum class EInteractionIcons : uint8_t
//{
//	INTERACTION_ICON_None          = 0,
//	INTERACTION_ICON_Use           = 1,
//	INTERACTION_ICON_Talk          = 2,
//	INTERACTION_ICON_Heal          = 3,
//	INTERACTION_ICON_Shop          = 4,
//	INTERACTION_ICON_Computer      = 5,
//	INTERACTION_ICON_Driver        = 6,
//	INTERACTION_ICON_Gunner        = 7,
//	INTERACTION_ICON_Smash         = 8,
//	INTERACTION_ICON_CannotUse     = 9,
//	INTERACTION_ICON_FlipVehicle   = 10,
//	INTERACTION_ICON_VehicleMiddleLeftSeat = 11,
//	INTERACTION_ICON_VehicleMiddleRightSeat = 12,
//	INTERACTION_ICON_Open          = 13,
//	INTERACTION_ICON_Trade         = 14,
//	INTERACTION_ICON_Objective     = 15,
//	INTERACTION_ICON_PickUp        = 16,
//	INTERACTION_ICON_Full          = 17,
//	INTERACTION_ICON_FullFadeOut   = 18,
//	INTERACTION_ICON_MAX           = 19
//};


// Enum WillowGame.WillowRadarManager.ERadarIconType
//enum class ERadarIconType : uint8_t
//{
//	RadarIconType_None             = 0,
//	RadarIconType_Gunfire          = 1,
//	RadarIconType_Threat           = 2,
//	RadarIconType_BountyBoard      = 3,
//	RadarIconType_Shop             = 4,
//	RadarIconType_Health           = 5,
//	RadarIconType_NewU             = 6,
//	RadarIconType_CatchARide       = 7,
//	RadarIconType_Settlement       = 8,
//	RadarIconType_MissionNPC       = 9,
//	RadarIconType_NamedNPC         = 10,
//	RadarIconType_Loot             = 11,
//	RadarIconType_Objective        = 12,
//	RadarIconType_Checkpoint       = 13,
//	RadarIconType_TravelStation    = 14,
//	RadarIconType_CustomizationStation = 15,
//	RadarIconType_LevelTransition  = 16,
//	RadarIconType_MAX              = 17
//};


// Enum WillowGame.AIPawnBalanceDefinition.EAITransformed
//enum class EAITransformed : uint8_t
//{
//	EAIT_None                      = 0,
//	EAIT_Fire                      = 1,
//	EAIT_Shock                     = 2,
//	EAIT_Corrosive                 = 3,
//	EAIT_Custom                    = 4,
//	EAIT_Slagged                   = 5,
//	EAIT_MAX                       = 6
//};


// Enum WillowGame.AIPawnBalanceDefinition.EItemGameStageSource
//enum class EItemGameStageSource : uint8_t
//{
//	IGSS_ExpLevelOfBalancedActor   = 0,
//	IGSS_GameStageOfBalancedActor  = 1,
//	IGSS_MAX                       = 2
//};


// Enum WillowGame.IUpdatePostProcessOverride.EAttributeScalarParamOperand
//enum class EAttributeScalarParamOperand : uint8_t
//{
//	ASPO_None                      = 0,
//	ASPO_Add                       = 1,
//	ASPO_Subtract                  = 2,
//	ASPO_MAX                       = 3
//};


// Enum WillowGame.IScreenParticle.ScreenParticleScalingMode
//enum class EScreenParticleScalingMode : uint8_t
//{
//	ESPSM_FitToHorizontal          = 0,
//	ESPSM_FitToVertical            = 1,
//	ESPSM_FitToExterior            = 2,
//	ESPSM_FitToInterior            = 3,
//	ESPSM_FitToViewport            = 4,
//	ESPSM_MAX                      = 5
//};


// Enum WillowGame.IUpdatePostProcessOverride.EPostProcessOverrideUpdatePhase
//enum class EPostProcessOverrideUpdatePhase : uint8_t
//{
//	PPUPDATEPHASE_None             = 0,
//	PPUPDATEPHASE_TransitionIn     = 1,
//	PPUPDATEPHASE_TransitionHold   = 2,
//	PPUPDATEPHASE_TransitionOut    = 3,
//	PPUPDATEPHASE_MAX              = 4
//};


// Enum WillowGame.AnimNotify_UseBehavior.EUseBehaviorContext
//enum class EUseBehaviorContext : uint8_t
//{
//	EUBC_ActorSkelMeshIsAttachedTo = 0,
//	EUBC_ObjectSkelMeshWasCreatedBy = 1,
//	EUBC_MAX                       = 2
//};


// Enum WillowGame.WillowDeclarations.EStoragePanelBackground
//enum class EStoragePanelBackground : uint8_t
//{
//	ESPB_Inventory                 = 0,
//	ESPB_Health                    = 1,
//	ESPB_Weapons                   = 2,
//	ESPB_Ammo                      = 3,
//	ESPB_Bank                      = 4,
//	ESPB_Stash                     = 5,
//	EPSB_Blackmarket               = 6,
//	EPSB_Custom                    = 7,
//	EStoragePanelBackground_MAX    = 8
//};


// Enum WillowGame.WillowDeclarations.EQuickWeaponSlot
//enum class EQuickWeaponSlot : uint8_t
//{
//	QuickSelectNone                = 0,
//	QuickSelectUp                  = 1,
//	QuickSelectDown                = 2,
//	QuickSelectLeft                = 3,
//	QuickSelectRight               = 4,
//	EQuickWeaponSlot_MAX           = 5
//};


// Enum WillowGame.WillowDeclarations.EEquipmentLoc
//enum class EEquipmentLoc : uint8_t
//{
//	EQUIPLOC_Shield                = 0,
//	EQUIPLOC_GrenadeMod            = 1,
//	EQUIPLOC_ClassMod              = 2,
//	EQUIPLOC_Artifact              = 3,
//	EQUIPLOC_None                  = 4,
//	EQUIPLOC_MAX                   = 5
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponType
//enum class EWeaponType : uint8_t
//{
//	WT_Pistol                      = 0,
//	WT_Shotgun                     = 1,
//	WT_SMG                         = 2,
//	WT_SniperRifle                 = 3,
//	WT_AssaultRifle                = 4,
//	WT_RocketLauncher              = 5,
//	WT_MAX                         = 6
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponPartType
//enum class EWeaponPartType : uint8_t
//{
//	WP_Body                        = 0,
//	WP_Grip                        = 1,
//	WP_Barrel                      = 2,
//	WP_Sight                       = 3,
//	WP_Stock                       = 4,
//	WP_Elemental                   = 5,
//	WP_Accessory1                  = 6,
//	WP_Accessory2                  = 7,
//	WP_Material                    = 8,
//	WP_Prefix                      = 9,
//	WP_Title                       = 10,
//	WP_MAX                         = 11
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponPartVariation
//enum class EWeaponPartVariation : uint8_t
//{
//	WeaponPartVar_Default          = 0,
//	WeaponPartVar_One              = 1,
//	WeaponPartVar_Two              = 2,
//	WeaponPartVar_Three            = 3,
//	WeaponPartVar_MAX              = 4
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponEventType
//enum class EWeaponEventType : uint8_t
//{
//	WEAPONEVENT_Advance            = 0,
//	WEAPONEVENT_Stop               = 1,
//	WEAPONEVENT_Pause              = 2,
//	WEAPONEVENT_UnPause            = 3,
//	WEAPONEVENT_MAX                = 4
//};


// Enum WillowGame.WillowItemTypes.EItemPartType
//enum class EItemPartType : uint8_t
//{
//	IP_Alpha                       = 0,
//	IP_Beta                        = 1,
//	IP_Gamma                       = 2,
//	IP_Delta                       = 3,
//	IP_Epsilon                     = 4,
//	IP_Zeta                        = 5,
//	IP_Eta                         = 6,
//	IP_Theta                       = 7,
//	IP_Material                    = 8,
//	IP_Prefix                      = 9,
//	IP_Title                       = 10,
//	IP_MAX                         = 11
//};


// Enum WillowGame.WillowDeclarations.ERewardPopup
//enum class ERewardPopup : uint8_t
//{
//	ERP_BadassToken                = 0,
//	ERP_CharacterHead              = 1,
//	ERP_CharacterSkin              = 2,
//	ERP_VehicleSkin                = 3,
//	ERP_MAX                        = 4
//};


// Enum WillowGame.ArtifactPartDefinition.EArtifactPartType
//enum class EArtifactPartType : uint8_t
//{
//	ARTIFACT_PART_EnableFirstEffect = 0,
//	ARTIFACT_PART_EnableSecondEffect = 1,
//	ARTIFACT_PART_EnableThirdEffect = 2,
//	ARTIFACT_PART_EnableFourthEffect = 3,
//	ARTIFACT_PART_UpgradeEffect    = 4,
//	ARTIFACT_PART_Body             = 5,
//	ARTIFACT_PART_MAX              = 6
//};


// Enum WillowGame.AssetLibraryManager.EAssetLibrary
//enum class EAssetLibrary : uint8_t
//{
//	AL_WeaponTypes                 = 0,
//	AL_WeaponParts                 = 1,
//	AL_ItemTypes                   = 2,
//	AL_ItemParts                   = 3,
//	AL_Manufacturer                = 4,
//	AL_Balance                     = 5,
//	AL_MAX                         = 6
//};


// Enum WillowGame.AttackLocation_Height.EHeightRestriction
//enum class EHeightRestriction : uint8_t
//{
//	HeightRestriction_Within       = 0,
//	HeightRestriction_Above        = 1,
//	HeightRestriction_Below        = 2,
//	HeightRestriction_MAX          = 3
//};


// Enum WillowGame.AttackLocation_ParentDistance.EParentDistance
//enum class EParentDistance : uint8_t
//{
//	EParentDist_Closer             = 0,
//	EParentDist_Further            = 1,
//	EParentDist_MAX                = 2
//};


// Enum WillowGame.AttributePresentationDefinition.EAttributeValueSignStyle
//enum class EAttributeValueSignStyle : uint8_t
//{
//	SIGNSTYLE_AsIs                 = 0,
//	SIGNSTYLE_Positive             = 1,
//	SIGNSTYLE_Negative             = 2,
//	SIGNSTYLE_AsIsAnyStyle         = 3,
//	SIGNSTYLE_OppositeSign         = 4,
//	SIGNSTYLE_MAX                  = 5
//};


// Enum WillowGame.AttributeSlotEffectAttributeValueResolver.EAttributeSlotEffectProperty
//enum class EAttributeSlotEffectProperty : uint8_t
//{
//	ATTRSLOTEFFECTPROP_Grade       = 0,
//	ATTRSLOTEFFECTPROP_ComputedModifierValue = 1,
//	ATTRSLOTEFFECTPROP_MAX         = 2
//};


// Enum WillowGame.AvatarAwardUtility.EWillowAvatarAwards
//enum class EWillowAvatarAwards : uint8_t
//{
//	WAA_Invalid                    = 0,
//	WAA_One                        = 1,
//	WAA_Two                        = 2,
//	WAA_Three                      = 3,
//	WAA_MAX                        = 4
//};


// Enum WillowGame.WillowPhysicalMaterialProperty.EImpactUsage
//enum class EImpactUsage : uint8_t
//{
//	IU_None                        = 0,
//	IU_Footstep                    = 1,
//	IU_Bullet                      = 2,
//	IU_MAX                         = 3
//};


// Enum WillowGame.WillowPhysicalMaterialProperty.EDamageSurfaceType
//enum class EDamageSurfaceType : uint8_t
//{
//	DMGSURFACE_Generic             = 0,
//	DMGSURFACE_Flesh               = 1,
//	DMGSURFACE_Armor               = 2,
//	DMGSURFACE_Shield              = 3,
//	DMGSURFACE_MAX                 = 4
//};


// Enum WillowGame.StatusEffectDefinition.EStatusEffectType
//enum class EStatusEffectType : uint8_t
//{
//	STATUS_EFFECT_Unknown          = 0,
//	STATUS_EFFECT_Ignite           = 1,
//	STATUS_EFFECT_Corrosive        = 2,
//	STATUS_EFFECT_Shock            = 3,
//	STATUS_EFFECT_Amp              = 4,
//	STATUS_EFFECT_Slow             = 5,
//	STATUS_EFFECT_Healing          = 6,
//	STATUS_EFFECT_MAX              = 7
//};


// Enum WillowGame.GlobalsDefinition.EItemRarity
//enum class EItemRarity : uint8_t
//{
//	RARITY_Unknown                 = 0,
//	RARITY_Common                  = 1,
//	RARITY_Uncommon                = 2,
//	RARITY_Rare                    = 3,
//	RARITY_VeryRare                = 4,
//	RARITY_Legendary               = 5,
//	RARITY_Seraph                  = 6,
//	RARITY_Rainbow                 = 7,
//	RARITY_MAX                     = 8
//};


// Enum WillowGame.GlobalsDefinition.EDropLifeSpanType
//enum class EDropLifeSpanType : uint8_t
//{
//	DROP_VeryShortLived            = 0,
//	DROP_ShortLived                = 1,
//	DROP_LongLived                 = 2,
//	DROP_LiveForever               = 3,
//	DROP_LiveAsLongAsLevel         = 4,
//	DROP_MAX                       = 5
//};


// Enum WillowGame.GlobalsDefinition.ENumClassPlayers
//enum class ENumClassPlayers : uint8_t
//{
//	NCP_OnePlayer                  = 0,
//	NCP_TwoPlayers                 = 1,
//	NCP_ThreePlayers               = 2,
//	NCP_FourPlayers                = 3,
//	NCP_MAX                        = 4
//};


// Enum WillowGame.WillowGFxMovie.ERTTType
//enum class ERTTType : uint8_t
//{
//	RTTT_Cell                      = 0,
//	RTTT_HalfCell                  = 1,
//	RTTT_Card                      = 2,
//	RTTT_QuickSlot                 = 3,
//	RTTT_MAX                       = 4
//};


// Enum WillowGame.IMission.EMissionStatus
//enum class EMissionStatus : uint8_t
//{
//	MS_NotStarted                  = 0,
//	MS_Active                      = 1,
//	MS_RequiredObjectivesComplete  = 2,
//	MS_ReadyToTurnIn               = 3,
//	MS_Complete                    = 4,
//	MS_Failed                      = 5,
//	MS_MAX                         = 6
//};


// Enum WillowGame.IMission.EMissionEvent
//enum class EMissionEvent : uint8_t
//{
//	ME_LevelLoad                   = 0,
//	ME_StatusChanged               = 1,
//	ME_ObjectiveSetChanged         = 2,
//	ME_ObjectiveUpdated            = 3,
//	ME_ObjectiveCleared            = 4,
//	ME_ObjectiveComplete           = 5,
//	ME_ActiveMission               = 6,
//	ME_NoLongerActiveMission       = 7,
//	ME_MAX                         = 8
//};


// Enum WillowGame.IMissionDirector.EMissionBranchEnding
//enum class EMissionBranchEnding : uint8_t
//{
//	EMBE_None                      = 0,
//	EMBE_PathA                     = 1,
//	EMBE_PathB                     = 2,
//	EMBE_MAX                       = 3
//};


// Enum WillowGame.IMission.EObjectiveDependencyStatus
//enum class EObjectiveDependencyStatus : uint8_t
//{
//	EODS_Complete                  = 0,
//	EODS_Active                    = 1,
//	EODS_MAX                       = 2
//};


// Enum WillowGame.IMission.EMissionReaction
//enum class EMissionReaction : uint8_t
//{
//	MR_NotStarted                  = 0,
//	MR_Active                      = 1,
//	MR_ReadyToTurnIn               = 2,
//	MR_Complete                    = 3,
//	MR_MAX                         = 4
//};


// Enum WillowGame.FastTravelStationDefinition.EFastTravelAccessibilityTime
//enum class EFastTravelAccessibilityTime : uint8_t
//{
//	FTAT_Always                    = 0,
//	FTAT_Halloween                 = 1,
//	FTAT_Thanksgiving              = 2,
//	FTAT_Christmas                 = 3,
//	FTAT_MAX                       = 4
//};


// Enum WillowGame.WillowPlayerController.EWillowNetworkType
//enum class EWillowNetworkType : uint8_t
//{
//	WNT_Internet                   = 0,
//	WNT_SystemLink                 = 1,
//	WNT_Offline                    = 2,
//	WNT_MAX                        = 3
//};


// Enum WillowGame.WillowPlayerController.EOnlineMessageType
//enum class EOnlineMessageType : uint8_t
//{
//	OMT_None                       = 0,
//	OMT_Network                    = 1,
//	OMT_Dlc                        = 2,
//	OMT_Mission                    = 3,
//	OMT_Travel                     = 4,
//	OMT_Misc                       = 5,
//	OMT_MAX                        = 6
//};


// Enum WillowGame.WillowPlayerController.EBackButtonScreen
//enum class EBackButtonScreen : uint8_t
//{
//	CS_None                        = 0,
//	CS_MissionLog                  = 1,
//	CS_Map                         = 2,
//	CS_Inventory                   = 3,
//	CS_Skills                      = 4,
//	CS_Challenges                  = 5,
//	CS_MAX                         = 6
//};


// Enum WillowGame.WillowPlayerController.EQuickSelectSlotStatus
//enum class EQuickSelectSlotStatus : uint8_t
//{
//	QSSS_Available                 = 0,
//	QSSS_Locked                    = 1,
//	QSSS_Selected                  = 2,
//	QSSS_MAX                       = 3
//};


// Enum WillowGame.WillowPlayerController.ELoadGameResult
//enum class ELoadGameResult : uint8_t
//{
//	LGR_Failure                    = 0,
//	LGR_Success                    = 1,
//	LGR_Pending                    = 2,
//	LGR_CorruptedFailure           = 3,
//	LGR_UnloadedDLCFailure         = 4,
//	LGR_DuplicateFailure           = 5,
//	LGR_MAX                        = 6
//};


// Enum WillowGame.WillowPlayerController.EConnectionAttemptStatus
//enum class EConnectionAttemptStatus : uint8_t
//{
//	COAS_ServerFull                = 0,
//	COAS_ServerUnavailable         = 1,
//	COAS_DLCMismatch               = 2,
//	COAS_ClientOutdated            = 3,
//	COAS_ServerOutdated            = 4,
//	COAS_MAX                       = 5
//};


// Enum WillowGame.WillowTradeManager.PlayerTradingStance
//enum class EPlayerTradingStance : uint8_t
//{
//	PTS_Deciding                   = 0,
//	PTS_TradeReady                 = 1,
//	PTS_DuelReady                  = 2,
//	PTS_Disconnected               = 3,
//	PTS_MAX                        = 4
//};


// Enum WillowGame.WillowTradeManager.TradeManagerReason
//enum class ETradeManagerReason : uint8_t
//{
//	TMR_PlayerBusy                 = 0,
//	TMR_PlayerOutOfRange           = 1,
//	TMR_PlayerRequestRefusedSelf   = 2,
//	TMR_PlayerRequestRefusedPartner = 3,
//	TMR_PlayerRequestWithdrawnSelf = 4,
//	TMR_PlayerRequestWithdrawnPartner = 5,
//	TMR_RedundantRequest           = 6,
//	TMR_TradingDisabled            = 7,
//	TMR_CanceledBySelf             = 8,
//	TMR_CanceledByPartner          = 9,
//	TMR_TradeCompleteSuccessfully  = 10,
//	TMR_DuelWon                    = 11,
//	TMR_DuelLost                   = 12,
//	TMR_DuelDraw                   = 13,
//	TMR_TradeCanceled              = 14,
//	TMR_MAX                        = 15
//};


// Enum WillowGame.WillowLeviathanService.EDiagnosticEventType
//enum class EDiagnosticEventType : uint8_t
//{
//	EDET_DetectedLostProfile       = 0,
//	EDET_RestoredBadassPoints      = 1,
//	EDET_RestoredCustomizations    = 2,
//	EDET_ReattemptingProfileRead   = 3,
//	EDET_SuccessfulProfileReRead   = 4,
//	EDET_MAX                       = 5
//};


// Enum WillowGame.WillowLeviathanService.ECustomizationEventType
//enum class ECustomizationEventType : uint8_t
//{
//	ECET_CustomizationUnlocked     = 0,
//	ECET_CustomizationSelectNewCharacter = 1,
//	ECET_CustomizationSelectQuickChange = 2,
//	ECET_MAX                       = 3
//};


// Enum WillowGame.WillowLeviathanService.EPartnerJoinLeaveType
//enum class EPartnerJoinLeaveType : uint8_t
//{
//	PJLT_Host                      = 0,
//	PJLT_Client                    = 1,
//	PJLT_HostSplit                 = 2,
//	PJLT_ClientSplit               = 3,
//	PJLT_MAX                       = 4
//};


// Enum WillowGame.WillowLeviathanService.EPointType
//enum class EPointType : uint8_t
//{
//	POINTTYPE_Skill                = 0,
//	POINTTYPE_BadassToken          = 1,
//	POINTTYPE_UNUSED               = 2,
//	POINTTYPE_UNUSED01             = 3,
//	POINTTYPE_UNUSED02             = 4,
//	POINTTYPE_UNUSED03             = 5,
//	POINTTYPE_UNUSED04             = 6,
//	POINTTYPE_UNUSED05             = 7,
//	POINTTYPE_UNUSED06             = 8,
//	POINTTYPE_UNUSED07             = 9,
//	POINTTYPE_UNUSED08             = 10,
//	POINTTYPE_PTExtension          = 11,
//	POINTTYPE_PTExtension01        = 12,
//	POINTTYPE_PTExtension02        = 13,
//	POINTTYPE_PTExtension03        = 14,
//	POINTTYPE_PTExtension04        = 15,
//	POINTTYPE_MAX                  = 16
//};


// Enum WillowGame.WillowLeviathanService.EMissionFastForwardResult
//enum class EMissionFastForwardResult : uint8_t
//{
//	EMFFR_PlayerAccepted           = 0,
//	EMFFR_PlayerDeclined           = 1,
//	EMFFR_InvalidPrompt            = 2,
//	EMFFR_MAX                      = 3
//};


// Enum WillowGame.WillowLeviathanService.EDuelResult
//enum class EDuelResult : uint8_t
//{
//	DR_Won                         = 0,
//	DR_Lost                        = 1,
//	DR_Drew                        = 2,
//	DR_MAX                         = 3
//};


// Enum WillowGame.WillowLeviathanService.EReviveReason
//enum class EReviveReason : uint8_t
//{
//	REVIVE_KilledEnemy             = 0,
//	REVIVE_LeveledUp               = 1,
//	REVIVE_PartnerRevived          = 2,
//	REVIVE_Respawned               = 3,
//	REVIVE_OtherRevived            = 4,
//	REVIVE_AutoRevived             = 5,
//	REVIVE_UNUSED                  = 6,
//	REVIVE_UNUSED01                = 7,
//	REVIVE_UNUSED02                = 8,
//	REVIVE_UNUSED03                = 9,
//	REVIVE_UNUSED04                = 10,
//	REVIVE_RevReasonExtension      = 11,
//	REVIVE_RevReasonExtension01    = 12,
//	REVIVE_RevReasonExtension02    = 13,
//	REVIVE_RevReasonExtension03    = 14,
//	REVIVE_RevReasonExtension04    = 15,
//	REVIVE_MAX                     = 16
//};


// Enum WillowGame.WillowLeviathanService.ECharacterKilledReason
//enum class ECharacterKilledReason : uint8_t
//{
//	ECKR_BledOut                   = 0,
//	ECKR_GaveUp                    = 1,
//	ECKR_KillVolume                = 2,
//	ECKR_OutOfBounds               = 3,
//	ECKR_UNUSED                    = 4,
//	ECKR_UNUSED01                  = 5,
//	ECKR_UNUSED02                  = 6,
//	ECKR_UNUSED03                  = 7,
//	ECKR_UNUSED04                  = 8,
//	ECKR_UNUSED05                  = 9,
//	ECKR_UNUSED06                  = 10,
//	ECKR_CharKillExtension         = 11,
//	ECKR_CharKillExtension01       = 12,
//	ECKR_CharKillExtension02       = 13,
//	ECKR_CharKillExtension03       = 14,
//	ECKR_CharKillExtension04       = 15,
//	ECKR_MAX                       = 16
//};


// Enum WillowGame.WillowLeviathanService.EEventId
//enum class EEventId : uint8_t
//{
//	EI_PerformanceSample           = 0,
//	EI_AdjustResource              = 1,
//	EI_AdjustResourceLimit         = 2,
//	EI_EnemyKilled                 = 3,
//	EI_BulletFired                 = 4,
//	EI_LocationPulse               = 5,
//	EI_ExperienceGained            = 6,
//	EI_Attack                      = 7,
//	EI_CharacterCreated            = 8,
//	EI_CharacterLoaded             = 9,
//	EI_CharacterDeleted            = 10,
//	EI_GameplayStart               = 11,
//	EI_ExitedGameplay              = 12,
//	EI_ChangePlaythrough           = 13,
//	EI_NewExcursion                = 14,
//	EI_ItemSpawned                 = 15,
//	EI_ItemToInventory             = 16,
//	EI_ItemFromInventory           = 17,
//	EI_ItemMovedInInventory        = 18,
//	EI_BlackMarketUpgradePurchased = 19,
//	EI_PointsEarned                = 20,
//	EI_PointsSpent                 = 21,
//	EI_PointsReset                 = 22,
//	EI_PlayerCharacterGainedLevel  = 23,
//	EI_MinorAction                 = 24,
//	EI_RenameCharacter             = 25,
//	EI_PartnerJoinedGame           = 26,
//	EI_PartnerLeftGame             = 27,
//	EI_ResourceDepleted            = 28,
//	EI_CharacterDown               = 29,
//	EI_CharacterKilled             = 30,
//	EI_CharacterRevived            = 31,
//	EI_MissionStatusChanged        = 32,
//	EI_MissionObjectiveSetActivated = 33,
//	EI_MissionObjectiveChanged     = 34,
//	EI_DuelStarted                 = 35,
//	EI_DeclinedDuel                = 36,
//	EI_DuelEnded                   = 37,
//	EI_SpawnVehicle                = 38,
//	EI_DestroyVehicle              = 39,
//	EI_CustomizeCharacter          = 40,
//	EI_ChallengeLevelCompleted     = 41,
//	EI_DiscoverLocation            = 42,
//	EI_TeleportedToVehicle         = 43,
//	EI_WieldedWeaponChanged        = 44,
//	EI_BeginPlaySession            = 45,
//	EI_MissionFastForward          = 46,
//	EI_Diagnostic                  = 47,
//	EI_MAX                         = 48
//};


// Enum WillowGame.WillowLeviathanService.EVehicleDestructionReason
//enum class EVehicleDestructionReason : uint8_t
//{
//	EVDR_Damage                    = 0,
//	EVDR_VehDestOutOfBounds        = 1,
//	EVDR_VehDestRespawned          = 2,
//	EVDR_UNUSED                    = 3,
//	EVDR_UNUSED01                  = 4,
//	EVDR_UNUSED02                  = 5,
//	EVDR_UNUSED03                  = 6,
//	EVDR_UNUSED04                  = 7,
//	EVDR_UNUSED05                  = 8,
//	EVDR_UNUSED06                  = 9,
//	EVDR_UNUSED07                  = 10,
//	EVDR_VehDestExtension          = 11,
//	EVDR_VehDestExtension01        = 12,
//	EVDR_VehDestExtension02        = 13,
//	EVDR_VehDestExtension03        = 14,
//	EVDR_VehDestExtension04        = 15,
//	EVDR_MAX                       = 16
//};


// Enum WillowGame.WillowLeviathanService.EDeclineDuelReason
//enum class EDeclineDuelReason : uint8_t
//{
//	DDR_DuelingDisabled            = 0,
//	DDR_DuelTimedOut               = 1,
//	DDR_MAX                        = 2
//};


// Enum WillowGame.WillowLeviathanService.EMinorActionType
//enum class EMinorActionType : uint8_t
//{
//	EMAT_DisableTraining           = 0,
//	EMAT_UseMouseKeyboard          = 1,
//	EMAT_UseController             = 2,
//	EMAT_SplitScreenBegin          = 3,
//	EMAT_SplitScreenEnd            = 4,
//	EMAT_UseVending                = 5,
//	EMAT_StoreCompare              = 6,
//	EMAT_UNUSED                    = 7,
//	EMAT_UNUSED01                  = 8,
//	EMAT_UNUSED02                  = 9,
//	EMAT_UNUSED03                  = 10,
//	EMAT_MAExtension               = 11,
//	EMAT_MAExtension01             = 12,
//	EMAT_MAExtension02             = 13,
//	EMAT_MAExtension03             = 14,
//	EMAT_MAExtension04             = 15,
//	EMAT_MAExtension05             = 16,
//	EMAT_MAExtension06             = 17,
//	EMAT_MAExtension07             = 18,
//	EMAT_MAExtension08             = 19,
//	EMAT_MAExtension09             = 20,
//	EMAT_MAX                       = 21
//};


// Enum WillowGame.WillowLeviathanService.EReadiedWeaponState
//enum class EReadiedWeaponState : uint8_t
//{
//	ERWS_NotReadied                = 0,
//	ERWS_MainHand                  = 1,
//	ERWS_OffHand                   = 2,
//	ERWS_NotWielded                = 3,
//	ERWS_MAX                       = 4
//};


// Enum WillowGame.WillowLeviathanService.EItemLocation
//enum class EItemLocation : uint8_t
//{
//	EIL_ItemLocUnknown             = 0,
//	EIL_Store                      = 1,
//	EIL_Ground                     = 2,
//	EIL_Award                      = 3,
//	EIL_Consumed                   = 4,
//	EIL_PlayerDrop                 = 5,
//	EIL_Container                  = 6,
//	EIL_Bank                       = 7,
//	EIL_Stash                      = 8,
//	EIL_TradePartner               = 9,
//	EIL_Cheat                      = 10,
//	EIL_MarketingAward             = 11,
//	EIL_BackpackInventory          = 12,
//	EIL_Buyback                    = 13,
//	EIL_SaveGame                   = 14,
//	EIL_Destroyed                  = 15,
//	EIL_MAX                        = 16
//};


// Enum WillowGame.WillowLeviathanService.EInventorySlot
//enum class EInventorySlot : uint8_t
//{
//	EIS_EquippedItem               = 0,
//	EIS_QuickSelectUp              = 1,
//	EIS_QuickSelectDown            = 2,
//	EIS_QuickSelectLeft            = 3,
//	EIS_QuickSelectRight           = 4,
//	EIS_Backpack                   = 5,
//	EIS_UNUSED                     = 6,
//	EIS_UNUSED01                   = 7,
//	EIS_UNUSED02                   = 8,
//	EIS_UNUSED03                   = 9,
//	EIS_UNUSED04                   = 10,
//	EIS_InvSlotExtension           = 11,
//	EIS_InvSlotExtension01         = 12,
//	EIS_InvSlotExtension02         = 13,
//	EIS_InvSlotExtension03         = 14,
//	EIS_InvSlotExtension04         = 15,
//	EIS_MAX                        = 16
//};


// Enum WillowGame.WillowLeviathanService.EExperienceSource
//enum class EExperienceSource : uint8_t
//{
//	EES_XPUnknown                  = 0,
//	EES_XPCombat                   = 1,
//	EES_PlotMissionAward           = 2,
//	EES_Discovery                  = 3,
//	EES_SideMissionAward           = 4,
//	EES_UNUSED                     = 5,
//	EES_UNUSED01                   = 6,
//	EES_UNUSED02                   = 7,
//	EES_UNUSED03                   = 8,
//	EES_UNUSED04                   = 9,
//	EES_UNUSED05                   = 10,
//	EES_XPExtension                = 11,
//	EES_XPExtension01              = 12,
//	EES_XPExtension02              = 13,
//	EES_XPExtension03              = 14,
//	EES_XPExtension04              = 15,
//	EES_MAX                        = 16
//};


// Enum WillowGame.WillowLeviathanService.ESplitScreenConfiguration
//enum class ESplitScreenConfiguration : uint8_t
//{
//	SSC_Single1P                   = 0,
//	SSC_Vertical2P                 = 1,
//	SSC_Horizontal2P               = 2,
//	SSC_Vertical3P                 = 3,
//	SSC_Horizontal3P               = 4,
//	SSC_Quad4p                     = 5,
//	SSC_MAX                        = 6
//};


// Enum WillowGame.WillowTradeManager.TradeSlotStatus
//enum class ETradeSlotStatus : uint8_t
//{
//	TSS_Empty                      = 0,
//	TSS_Item                       = 1,
//	TSS_Weapon                     = 2,
//	TSS_MAX                        = 3
//};


// Enum WillowGame.WillowTradeManager.TradeManagerStatus
//enum class ETradeManagerStatus : uint8_t
//{
//	TMS_Uninitialized              = 0,
//	TMS_OutgoingRequestPending     = 1,
//	TMS_IncomingRequestPending     = 2,
//	TMS_Trading                    = 3,
//	TMS_Dueling                    = 4,
//	TMS_ResolvingTrade             = 5,
//	TMS_ResolvingDuelWon           = 6,
//	TMS_ResolvingDuelLost          = 7,
//	TMS_MAX                        = 8
//};


// Enum WillowGame.WillowPlayerController.EColiseumStatType
//enum class EColiseumStatType : uint8_t
//{
//	ECSTAT_Kills                   = 0,
//	ECSTAT_MAX                     = 1
//};


// Enum WillowGame.WillowPlayerController.EColiseumGameOver
//enum class EColiseumGameOver : uint8_t
//{
//	ECGM_TryAgain                  = 0,
//	ECGM_Lobby                     = 1,
//	ECGM_MAX                       = 2
//};


// Enum WillowGame.WillowHUD.ECountDownLength
//enum class ECountDownLength : uint8_t
//{
//	ECDL_Ten                       = 0,
//	ECDL_Five                      = 1,
//	ECDL_Four                      = 2,
//	ECDL_Three                     = 3,
//	ECDL_Two                       = 4,
//	ECDL_One                       = 5,
//	ECDL_None                      = 6,
//	ECDL_MAX                       = 7
//};


// Enum WillowGame.WillowHUD.EColiseumUpdateMode
//enum class EColiseumUpdateMode : uint8_t
//{
//	E_Toggle                       = 0,
//	E_TurnOff                      = 1,
//	E_TurnOn                       = 2,
//	E_MAX                          = 3
//};


// Enum WillowGame.WillowHUD.EHUDEquippedCardType
//enum class EHUDEquippedCardType : uint8_t
//{
//	HUDEquippedCard_Weapon         = 0,
//	HUDEquippedCard_Shield         = 1,
//	HUDEquippedCard_GrenadeMod     = 2,
//	HUDEquippedCard_ClassMod       = 3,
//	HUDEquippedCard_Artifact       = 4,
//	HUDEquippedCard_MAX            = 5
//};


// Enum WillowGame.WillowHUD.EColiseumNotifyType
//enum class EColiseumNotifyType : uint8_t
//{
//	ECNT_Resupply                  = 0,
//	ECNT_Refill                    = 1,
//	ECNT_WaveEnded                 = 2,
//	ECNT_MAX                       = 3
//};


// Enum WillowGame.WillowHUD.EHUDPickupCardType
//enum class EHUDPickupCardType : uint8_t
//{
//	HUDPickupCard_Weapon           = 0,
//	HUDPickupCard_Shield           = 1,
//	HUDPickupCard_GrenadeMod       = 2,
//	HUDPickupCard_ClassMod         = 3,
//	HUDPickupCard_Artifact         = 4,
//	HUDPickupCard_Item             = 5,
//	HUDPickupCard_MAX              = 6
//};


// Enum WillowGame.WillowProfileSettings.EDecalSettingOptions
//enum class EDecalSettingOptions : uint8_t
//{
//	DSO_Normal                     = 0,
//	DSO_High                       = 1,
//	DSO_MAX                        = 2
//};


// Enum WillowGame.WillowProfileSettings.EProfileViewDistanceOptions
//enum class EProfileViewDistanceOptions : uint8_t
//{
//	PVDO_Low                       = 0,
//	PVDO_Medium                    = 1,
//	PVDO_High                      = 2,
//	PVDO_UltraHigh                 = 3,
//	PVDO_MAX                       = 4
//};


// Enum WillowGame.WillowProfileSettings.ESplitDirectionOptions
//enum class ESplitDirectionOptions : uint8_t
//{
//	SDO_Horizontal                 = 0,
//	SDO_Vertical                   = 1,
//	SDO_MAX                        = 2
//};


// Enum WillowGame.WillowProfileSettings.EProfileColorBlindModeOptions
//enum class EProfileColorBlindModeOptions : uint8_t
//{
//	PCBMO_Invalid                  = 0,
//	PCBMO_Off                      = 1,
//	PCBMO_Deuteranopia             = 2,
//	PCBMO_Protanopia               = 3,
//	PCBMO_Tritanopia               = 4,
//	PCBMO_MAX                      = 5
//};


// Enum WillowGame.WillowPlayerController.EInstinctSkillActions
//enum class EInstinctSkillActions : uint8_t
//{
//	ISA_Targeting                  = 0,
//	ISA_Targeted                   = 1,
//	ISA_KilledEnemy                = 2,
//	ISA_AppliedStatusEffect        = 3,
//	ISA_CriticalHit                = 4,
//	ISA_TookPhysicalDamage         = 5,
//	ISA_GaveDamage                 = 6,
//	ISA_TookStatusEffectDamage     = 7,
//	ISA_ScoredHit                  = 8,
//	ISA_DealtExplosiveDamage       = 9,
//	ISA_FriendWentDown             = 10,
//	ISA_DealtStatusEffectDamage    = 11,
//	ISA_TookShieldDamage           = 12,
//	ISA_MAX                        = 13
//};


// Enum WillowGame.WillowSaveGameManager.ELoadPlayerBehavior
//enum class ELoadPlayerBehavior : uint8_t
//{
//	ELPB_LoadOnly                  = 0,
//	ELPB_LoadAndCache              = 1,
//	ELPB_MAX                       = 2
//};


// Enum WillowGame.WillowSaveGameManager.ESaveGameManagerState
//enum class ESaveGameManagerState : uint8_t
//{
//	ESGMS_Idle                     = 0,
//	ESGMS_Saving                   = 1,
//	ESGMS_Deleting                 = 2,
//	ESGMS_Loading                  = 3,
//	ESGMS_ListLoading              = 4,
//	ESGMS_LoadingWillowOneSave     = 5,
//	ESGMS_SavingProfile            = 6,
//	ESGMS_CountingCrossTitleSaveGames = 7,
//	ESGMS_MAX                      = 8
//};


// Enum WillowGame.WillowSaveGameManager.CPAsync
//enum class ECPAsync : uint8_t
//{
//	WORKRESULT_NONE                = 0,
//	WORKRESULT_PENDING             = 1,
//	WORKRESULT_SUCCESS             = 2,
//	WORKRESULT_FAIL                = 3,
//	WORKRESULT_FILENOTFOUND        = 4,
//	WORKRESULT_MAX                 = 5
//};


// Enum WillowGame.WillowSaveGameManager.ESaveVersionType
//enum class ESaveVersionType : uint8_t
//{
//	ESVT_File                      = 0,
//	ESVT_Player                    = 1,
//	ESVT_Graveyard                 = 2,
//	ESVT_MAX                       = 3
//};


// Enum WillowGame.BodyWeaponHoldDefinition.EBodyWeaponActionPosture
//enum class EBodyWeaponActionPosture : uint8_t
//{
//	BWAP_All                       = 0,
//	BWAP_Standing                  = 1,
//	BWAP_Crouched                  = 2,
//	BWAP_Injured                   = 3,
//	BWAP_MAX                       = 4
//};


// Enum WillowGame.BodyWeaponHoldDefinition.EBodyWeaponAction
//enum class EBodyWeaponAction : uint8_t
//{
//	BWA_Fire                       = 0,
//	BWA_FireRecoil                 = 1,
//	BWA_Melee                      = 2,
//	BWA_Reload                     = 3,
//	BWA_Equip                      = 4,
//	BWA_PutDown                    = 5,
//	BWA_PutDownSwap                = 6,
//	BWA_ThrowGrenade               = 7,
//	BWA_GrabEquip                  = 8,
//	BWA_MeleeSelf                  = 9,
//	BWA_MAX                        = 10
//};


// Enum WillowGame.PlayerEventProviderDefinition.EPlayerEventMessage
//enum class EPlayerEventMessage : uint8_t
//{
//	PEM_KilledChampion             = 0,
//	PEM_SkillKill                  = 1,
//	PEM_KilledEnemy                = 2,
//	PEM_KillStreak                 = 3,
//	PEM_ChallengeCompleted         = 4,
//	PEM_JoinedGame                 = 5,
//	PEM_SeatSwap                   = 6,
//	PEM_VehicleCatchAir            = 7,
//	PEM_KilledEnemyVehicle         = 8,
//	PEM_VehicleLowHealth           = 9,
//	PEM_VehicleFlipped             = 10,
//	PEM_RanOverEnemy               = 11,
//	PEM_VehicleSpawn               = 12,
//	PEM_CriticalHitKill            = 13,
//	PEM_CriticalHit                = 14,
//	PEM_OutOfAmmo                  = 15,
//	PEM_Reloading                  = 16,
//	PEM_RareWeaponEquipped         = 17,
//	PEM_PlayerIdle                 = 18,
//	PEM_PlayerDown                 = 19,
//	PEM_Death                      = 20,
//	PEM_DeathByFire                = 21,
//	PEM_DeathByShock               = 22,
//	PEM_EnemyDamaged               = 23,
//	PEM_EnemyDamagedCritical       = 24,
//	PEM_EnemyShieldDown            = 25,
//	PEM_AchievedSecondWind         = 26,
//	PEM_RevivingPlayer             = 27,
//	PEM_MissionTurnedIn            = 28,
//	PEM_IncomingChampion           = 29,
//	PEM_MapOpen                    = 30,
//	PEM_SkillPointToSpend          = 31,
//	PEM_CompareItems               = 32,
//	PEM_TravelBlocked              = 33,
//	PEM_MAX                        = 34
//};


// Enum WillowGame.GearLikenessMeshComponent.EGearLikenessSource
//enum class EGearLikenessSource : uint8_t
//{
//	LOOKLIKE_Source                = 0,
//	LOOKLIKE_MainWeapon            = 1,
//	LOOKLIKE_OffhandWeapon         = 2,
//	LOOKLIKE_EquippedShield        = 3,
//	LOOKLIKE_EquippedGrenadeMod    = 4,
//	LOOKLIKE_EquippedClassMod      = 5,
//	LOOKLIKE_HolsteredSmallWeapon  = 6,
//	LOOKLIKE_HolsteredMediumWeapon = 7,
//	LOOKLIKE_HolsteredLargeWeapon  = 8,
//	LOOKLIKE_HolsteredExtraLargeWeapon = 9,
//	LOOKLIKE_MAX                   = 10
//};


// Enum WillowGame.IUsable.EUsabilityType
//enum class EUsabilityType : uint8_t
//{
//	UT_Primary                     = 0,
//	UT_Secondary                   = 1,
//	UT_MAX                         = 2
//};


// Enum WillowGame.IShop.EShopType
//enum class EShopType : uint8_t
//{
//	SType_Weapons                  = 0,
//	SType_Items                    = 1,
//	SType_Health                   = 2,
//	SType_BlackMarket              = 3,
//	SType_MAX                      = 4
//};


// Enum WillowGame.IShop.EShopItemStatus
//enum class EShopItemStatus : uint8_t
//{
//	SIS_ItemCanBePurchased         = 0,
//	SIS_NotEnoughRoomForItem       = 1,
//	SIS_PlayerCannotAffordItem     = 2,
//	SIS_PlayerCannotUseItem        = 3,
//	SIS_InvalidItem                = 4,
//	SIS_MAX                        = 5
//};


// Enum WillowGame.IShop.ETransactionStatus
//enum class ETransactionStatus : uint8_t
//{
//	TS_TransactionInProgress       = 0,
//	TS_TransactionComplete         = 1,
//	TS_TransactionFailed           = 2,
//	TS_MAX                         = 3
//};


// Enum WillowGame.WillowPawn.ESecondWindReason
//enum class ESecondWindReason : uint8_t
//{
//	ESECONDWIND_None               = 0,
//	ESECONDWIND_KilledEnemy        = 1,
//	ESECONDWIND_LeveledUp          = 2,
//	ESECONDWIND_PartnerRevived     = 3,
//	ESECONDWIND_Skill_Res          = 4,
//	ESECONDWIND_AutoRevive         = 5,
//	ESECONDWIND_UNUSED             = 6,
//	ESECONDWIND_UNUSED01           = 7,
//	ESECONDWIND_UNUSED02           = 8,
//	ESECONDWIND_UNUSED03           = 9,
//	ESECONDWIND_UNUSED04           = 10,
//	ESECONDWIND_ReasonExtension    = 11,
//	ESECONDWIND_ReasonExtension01  = 12,
//	ESECONDWIND_ReasonExtension02  = 13,
//	ESECONDWIND_ReasonExtension03  = 14,
//	ESECONDWIND_ReasonExtension04  = 15,
//	ESECONDWIND_MAX                = 16
//};


// Enum WillowGame.WillowPawn.EResurrectReason
//enum class EResurrectReason : uint8_t
//{
//	ERR_Unknown                    = 0,
//	ERR_IDied                      = 1,
//	ERR_OtherDied                  = 2,
//	ERR_FellOutOfWorld             = 3,
//	ERR_LDRes                      = 4,
//	ERR_Gibbed                     = 5,
//	ERR_OutsideWorldBounds         = 6,
//	ERR_LevelTravel                = 7,
//	ERR_MAX                        = 8
//};


// Enum WillowGame.WillowPawn.EInjuredDeadState
//enum class EInjuredDeadState : uint8_t
//{
//	INJUREDDEAD_None               = 0,
//	INJUREDDEAD_Start              = 1,
//	INJUREDDEAD_StartCausePlayerDeath = 2,
//	INJUREDDEAD_StartKillVolume    = 3,
//	INJUREDDEAD_InitRagdoll        = 4,
//	INJUREDDEAD_MAX                = 5
//};


// Enum WillowGame.WillowPawn.EInjuredStage
//enum class EInjuredStage : uint8_t
//{
//	INJURED_Not                    = 0,
//	INJURED_Injured                = 1,
//	INJURED_Targeted               = 2,
//	INJURED_MostlyDead             = 3,
//	INJURED_MAX                    = 4
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponVisibleAmmoState
//enum class EWeaponVisibleAmmoState : uint8_t
//{
//	VISIBLE_AMMO_STATE_Default     = 0,
//	VISIBLE_AMMO_STATE_PendingReload = 1,
//	VISIBLE_AMMO_STATE_MAX         = 2
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponHand
//enum class EWeaponHand : uint8_t
//{
//	HAND_Right                     = 0,
//	HAND_Left                      = 1,
//	HAND_Centered                  = 2,
//	HAND_Hidden                    = 3,
//	HAND_MAX                       = 4
//};


// Enum WillowGame.WillowWeaponTypes.EWeaponBoneControllerType
//enum class EWeaponBoneControllerType : uint8_t
//{
//	WEAP_BONE_CONTROL_General      = 0,
//	WEAP_BONE_CONTROL_BarrelSpinner = 1,
//	WEAP_BONE_CONTROL_MagazineSpinner = 2,
//	WEAP_BONE_CONTROL_Flap         = 3,
//	WEAP_BONE_CONTROL_MAX          = 4
//};


// Enum WillowGame.WillowPawn.EInterpMode
//enum class EInterpMode : uint8_t
//{
//	EIM_None                       = 0,
//	EIM_Linear                     = 1,
//	EIM_NonLinear                  = 2,
//	EIM_MAX                        = 3
//};


// Enum WillowGame.BodyHitRegionDefinition.EGoreMode
//enum class EGoreMode : uint8_t
//{
//	GORE_Full                      = 0,
//	GORE_None                      = 1,
//	GORE_MAX                       = 2
//};


// Enum WillowGame.WillowPawn.EHolsteredGearState
//enum class EHolsteredGearState : uint8_t
//{
//	HGS_None                       = 0,
//	HGS_PendingFadeIn              = 1,
//	HGS_FadingIn                   = 2,
//	HGS_FadingOut                  = 3,
//	HGS_MAX                        = 4
//};


// Enum WillowGame.ExperienceResourcePool.EExperienceType
//enum class EExperienceType : uint8_t
//{
//	EXPERIENCE_Generic             = 0,
//	EXPERIENCE_Combat              = 1,
//	EXPERIENCE_Mission             = 2,
//	EXPERIENCE_MAX                 = 3
//};


// Enum WillowGame.SkillDefinition.ESkillKillEvents
//enum class ESkillKillEvents : uint8_t
//{
//	SKE_KilledEnemy                = 0,
//	SKE_KilledByEnemy              = 1,
//	SKE_MAX                        = 2
//};


// Enum WillowGame.SkillDefinition.ESkillKilledEventType
//enum class ESkillKilledEventType : uint8_t
//{
//	SKEVT_KilledEnemy              = 0,
//	SKEVT_KilledFriendly           = 1,
//	SKEVT_KilledNeutral            = 2,
//	SKEVT_KilledByEnemy            = 3,
//	SKEVT_KilledByFriendly         = 4,
//	SKEVT_KilledByNeutral          = 5,
//	SKEVT_MAX                      = 6
//};


// Enum WillowGame.SkillDefinition.ESkillDamageEvents
//enum class ESkillDamageEvents : uint8_t
//{
//	SDE_DamagedEnemy               = 0,
//	SDE_DamagedFriendly            = 1,
//	SDE_DamagedByEnemy             = 2,
//	SDE_DamagedByFriendly          = 3,
//	SDE_DamagedNeutral_Deprecated  = 4,
//	SDE_DamagedByNeutral_Deprecated = 5,
//	SDE_DamagedUnawareEnemy        = 6,
//	SDE_DamagedEnemyWithMeleeFromBehind = 7,
//	SDE_DamagedEnemyExposeDamageSurfaceType = 8,
//	SDE_MAX                        = 9
//};


// Enum WillowGame.SkillDefinition.ERequiredActionSkillState
//enum class ERequiredActionSkillState : uint8_t
//{
//	ERASS_Ignore                   = 0,
//	ERASS_MustBeRunning            = 1,
//	ERASS_MustNotBeRunning         = 2,
//	ERASS_MAX                      = 3
//};


// Enum WillowGame.SkillDefinition.ETrackedSkillType
//enum class ETrackedSkillType : uint8_t
//{
//	TRACKEDSKILL_Untracked         = 0,
//	TRACKEDSKILL_Kill              = 1,
//	TRACKEDSKILL_Triggered         = 2,
//	TRACKEDSKILL_Respond           = 3,
//	TRACKEDSKILL_ConsumableBuff    = 4,
//	TRACKEDSKILL_MeleeOverride     = 5,
//	TRACKEDSKILL_TriggeredNotSkillTree = 6,
//	TRACKEDSKILL_MAX               = 7
//};


// Enum WillowGame.SkillDefinition.ESkillEventType
//enum class ESkillEventType : uint8_t
//{
//	SEVT_SkillActivated            = 0,
//	SEVT_SkillDeactivated          = 1,
//	SEVT_SkillPaused               = 2,
//	SEVT_SkillResumed              = 3,
//	SEVT_DamagedEnemy              = 4,
//	SEVT_DamagedFriendly           = 5,
//	SEVT_DamagedNeutral            = 6,
//	SEVT_DamagedByEnemy            = 7,
//	SEVT_DamagedByFriendly         = 8,
//	SEVT_DamagedByNeutral          = 9,
//	SEVT_ShieldDepletedAfterBeingFull = 10,
//	SEVT_KilledEnemy               = 11,
//	SEVT_KilledFriendly            = 12,
//	SEVT_KilledNeutral             = 13,
//	SEVT_KilledByEnemy             = 14,
//	SEVT_KilledByFriendly          = 15,
//	SEVT_KilledByNeutral           = 16,
//	SEVT_WeaponZoomed              = 17,
//	SEVT_WeaponUnzoomed            = 18,
//	SEVT_WeaponShotMissed          = 19,
//	SEVT_WeaponFired               = 20,
//	SEVT_WeaponReloaded            = 21,
//	SEVT_PlayerDeathAverted        = 22,
//	SEVT_ActionSkillCooldownAbilityActivated = 23,
//	SEVT_ActionSkillActiveAbilityActivated = 24,
//	SEVT_DamagedUnawareEnemy       = 25,
//	SEVT_DamagedEnemyWithMeleeFromBehind = 26,
//	SEVT_MeleeOverrideSkillActivated = 27,
//	SEVT_ThrowGrenadeOverrideSkillActivated = 28,
//	SEVT_WeaponSwapped             = 29,
//	SEVT_PlayerRecoveredFromDownState = 30,
//	SEVT_ShieldDepleted            = 31,
//	SEVT_ShieldFull                = 32,
//	SEVT_WeaponStartReload         = 33,
//	SEVT_PlayerResurrected         = 34,
//	SEVT_WeaponManuallyReloaded    = 35,
//	SEVT_AppliedStatusEffectToEnemy = 36,
//	SEVT_DownStateBegin            = 37,
//	SEVT_DownStateEnd              = 38,
//	SEVT_BledOut                   = 39,
//	SEVT_OnStatusEffectTypeBegin   = 40,
//	SEVT_OnStatusEffectTypeEnd     = 41,
//	SEVT_MeleeAttack               = 42,
//	SEVT_MAX                       = 43
//};


// Enum WillowGame.SkillDefinition.ESkillEventGradeType
//enum class ESkillEventGradeType : uint8_t
//{
//	SEVG_PlayerSkillGrade          = 0,
//	SEVG_HardcodedGrade            = 1,
//	SEVG_SameAsThisSkillGrade      = 2,
//	SEVG_MAX                       = 3
//};


// Enum WillowGame.SkillDefinition.ESkillDamagedEventType
//enum class ESkillDamagedEventType : uint8_t
//{
//	SDEVT_DamagedEnemy             = 0,
//	SDEVT_DamagedFriendly          = 1,
//	SDEVT_DamagedNeutral           = 2,
//	SDEVT_DamagedByEnemy           = 3,
//	SDEVT_DamagedByFriendly        = 4,
//	SDEVT_DamagedByNeutral         = 5,
//	SDEVT_ShieldDepletedAfterBeingFull = 6,
//	SDEVT_MAX                      = 7
//};


// Enum WillowGame.SkillDefinition.ESkillState
//enum class ESkillState : uint8_t
//{
//	SKILL_Deactivated              = 0,
//	SKILL_Active                   = 1,
//	SKILL_Paused                   = 2,
//	SKILL_MAX                      = 3
//};


// Enum WillowGame.SkillDefinition.ETargetCriteria
//enum class ETargetCriteria : uint8_t
//{
//	CRITERIA_None                  = 0,
//	CRITERIA_Nearest               = 1,
//	CRITERIA_MAX                   = 2
//};


// Enum WillowGame.SkillDefinition.EEffectTarget
//enum class EEffectTarget : uint8_t
//{
//	TARGET_None                    = 0,
//	TARGET_Self                    = 1,
//	TARGET_Allies                  = 2,
//	TARGET_Enemies                 = 3,
//	TARGET_All                     = 4,
//	TARGET_Pets                    = 5,
//	TARGET_MAX                     = 6
//};


// Enum WillowGame.SkillDefinition.EEffectDurationType
//enum class EEffectDurationType : uint8_t
//{
//	DURATION_Infinite              = 0,
//	DURATION_Timed                 = 1,
//	DURATION_MAX                   = 2
//};


// Enum WillowGame.SkillDefinition.ESkillType
//enum class ESkillType : uint8_t
//{
//	SKILL_TYPE_Passive             = 0,
//	SKILL_TYPE_Action              = 1,
//	SKILL_TYPE_ActionAugment       = 2,
//	SKILL_TYPE_Kill                = 3,
//	SKILL_TYPE_Proficiency         = 4,
//	SKILL_TYPE_MAX                 = 5
//};


// Enum WillowGame.WillowGFxUIManagerDefinition.EUILayout
//enum class EUILayout : uint8_t
//{
//	UILAYOUT_16x9                  = 0,
//	UILAYOUT_16x901                = 1,
//	UILAYOUT_16x902                = 2,
//	UILAYOUT_4x3                   = 3,
//	UILAYOUT_4x301                 = 4,
//	UILAYOUT_4x302                 = 5,
//	UILAYOUT_MAX                   = 6
//};


// Enum WillowGame.PlayerClassDefinition.EPlayerClassAchievementUnlockType
//enum class EPlayerClassAchievementUnlockType : uint8_t
//{
//	PCAUT_PetKills                 = 0,
//	PCAUT_TimeSpentInActionSkill   = 1,
//	PCAUT_TargetedActionSkillImpacts = 2,
//	PCAUT_MAX                      = 3
//};


// Enum WillowGame.WillowPlayerController.EMissionFanfareType
//enum class EMissionFanfareType : uint8_t
//{
//	EMFT_NewMissionAccepted        = 0,
//	EMFT_NewMissionActive          = 1,
//	EMFT_NewPlotMissionActive      = 2,
//	EMFT_ObjectiveIncremented      = 3,
//	EMFT_ObjectiveComplete         = 4,
//	EMFT_ObjectiveCleared          = 5,
//	EMFT_MissionReadyToTurnIn      = 6,
//	EMFT_MissionCompleted          = 7,
//	EMFT_PingNonTrackedOnly        = 8,
//	EMFT_MAX                       = 9
//};


// Enum WillowGame.WillowPlayerController.EMissionSortType
//enum class EMissionSortType : uint8_t
//{
//	MSORT_Region                   = 0,
//	MSORT_Status                   = 1,
//	MSORT_Difficulty               = 2,
//	MSORT_Chronological            = 3,
//	MSORT_Expansion                = 4,
//	MSORT_MAX                      = 5
//};


// Enum WillowGame.WillowPlayerController.EPresenceModeContext
//enum class EPresenceModeContext : uint8_t
//{
//	EPMC_Any                       = 0,
//	EPMC_OnFoot                    = 1,
//	EPMC_Driving                   = 2,
//	EPMC_Dueling                   = 3,
//	EPMC_OpenSlots                 = 4,
//	EPMC_MAX                       = 5
//};


// Enum WillowGame.Skill.EAdjustModifierMode
//enum class EAdjustModifierMode : uint8_t
//{
//	WILLOW_ADJUST_InitialAddModifer = 0,
//	WILLOW_ADJUST_AddModifer       = 1,
//	WILLOW_ADJUST_RemoveModifer    = 2,
//	WILLOW_ADJUST_MAX              = 3
//};


// Enum WillowGame.Skill.PawnListSource
//enum class EPawnListSource : uint8_t
//{
//	PAWN_Teammate                  = 0,
//	PAWN_Enemy                     = 1,
//	PAWN_MAX                       = 2
//};


// Enum WillowGame.ChallengeDefinition.EChallengeType
//enum class EChallengeType : uint8_t
//{
//	ECT_Stat                       = 0,
//	ECT_LevelObject                = 1,
//	ECT_DesignerTriggered          = 2,
//	ECT_MAX                        = 3
//};


// Enum WillowGame.WillowPlayerController.EWillowInviteType
//enum class EWillowInviteType : uint8_t
//{
//	WIT_InviteRequired             = 0,
//	WIT_FriendsOnly                = 1,
//	WIT_Public                     = 2,
//	WIT_MAX                        = 3
//};


// Enum WillowGame.WillowDownloadableContentManager.EMarketplaceOfferType
//enum class EMarketplaceOfferType : uint8_t
//{
//	OFFER_CATEGORY_SeasonPass      = 0,
//	OFFER_CATEGORY_CompatibilityPack = 1,
//	OFFER_CATEGORY_AddOn           = 2,
//	OFFER_CATEGORY_Misc            = 3,
//	OFFER_CATEGORY_MAX             = 4
//};


// Enum WillowGame.WillowDownloadableContentManager.EDlcInstallState
//enum class EDlcInstallState : uint8_t
//{
//	DLC_INSTALL_None               = 0,
//	DLC_INSTALL_InstallingBundles  = 1,
//	DLC_INSTALL_LoadingAsyncPackages = 2,
//	DLC_INSTALL_InstallingContent  = 3,
//	DLC_INSTALL_InstallingOfferContent = 4,
//	DLC_INSTALL_InstallComplete    = 5,
//	DLC_INSTALL_MAX                = 6
//};


// Enum WillowGame.WillowGFxMovie3D.MovieFittingStyle
//enum class EMovieFittingStyle : uint8_t
//{
//	MFS_FitWithoutCropping         = 0,
//	MFS_FitWithCropping            = 1,
//	MFS_FitHorizontal              = 2,
//	MFS_FitVertical                = 3,
//	MFS_MAX                        = 4
//};


// Enum WillowGame.GFxTextListContainer.ETextListMoveDir
//enum class ETextListMoveDir : uint8_t
//{
//	TLMD_Up                        = 0,
//	TLMD_Down                      = 1,
//	TLMD_PageUp                    = 2,
//	TLMD_PageDown                  = 3,
//	TLMD_First                     = 4,
//	TLMD_Last                      = 5,
//	TLMD_PreviousCategory          = 6,
//	TLMD_NextCategory              = 7,
//	TLMD_MAX                       = 8
//};


// Enum WillowGame.GFxTextListContainer.EArrayKind
//enum class EArrayKind : uint8_t
//{
//	EAK_Source                     = 0,
//	EAK_Categories                 = 1,
//	EAK_InvalidEntry               = 2,
//	EAK_Unloadable                 = 3,
//	EAK_MAX                        = 4
//};


// Enum WillowGame.InventoryDataProviderGFxObject.ECategoryAssignmentType
//enum class ECategoryAssignmentType : uint8_t
//{
//	CAType_None                    = 0,
//	CAType_InventoryType           = 1,
//	CAType_Manufacturers           = 2,
//	CAType_WeaponType              = 3,
//	CAType_ClassRequirement        = 4,
//	CAType_PersonalOrShop          = 5,
//	CAType_Equipped                = 6,
//	CAType_MAX                     = 7
//};


// Enum WillowGame.InventoryDataProviderGFxObject.EInventorySortType
//enum class EInventorySortType : uint8_t
//{
//	IST_EquippedThenMajorTypeThenRarityThenSubtype = 0,
//	IST_MajorTypeThenSubtypeThenRarity = 1,
//	IST_MajorTypeThenRarityThenSubtype = 2,
//	IST_Manufacturer               = 3,
//	IST_ClassRequirementThenRarity = 4,
//	IST_Value                      = 5,
//	IST_MAX                        = 6
//};


// Enum WillowGame.InventoryDataProviderGFxObject.EInventoryFilterType
//enum class EInventoryFilterType : uint8_t
//{
//	IFT_NoFilter                   = 0,
//	IFT_FilterUncomparable         = 1,
//	IFT_FilterWeapons              = 2,
//	IFT_FilterNonWeapons           = 3,
//	IFT_FilterNonShields           = 4,
//	IFT_FilterNonGrenadeMods       = 5,
//	IFT_FilterNonClassMods         = 6,
//	IFT_FilterNonUpgrades          = 7,
//	IFT_FilterNonHealth            = 8,
//	IFT_FilterNonGenerics          = 9,
//	IFT_MAX                        = 10
//};


// Enum WillowGame.InventoryListPanelGFxObject.EInventoryListType
//enum class EInventoryListType : uint8_t
//{
//	ELT_Weapon                     = 0,
//	ELT_Shield                     = 1,
//	ELT_GrenadeMod                 = 2,
//	ELT_ClassMod                   = 3,
//	ELT_Artifact                   = 4,
//	ELT_None                       = 5,
//	ELT_MAX                        = 6
//};


// Enum WillowGame.BaseTopLevelPanelGFxObject.PanelPosition
//enum class EPanelPosition : uint8_t
//{
//	PP_Focused                     = 0,
//	PP_Unfocused                   = 1,
//	PP_Compare                     = 2,
//	PP_MAX                         = 3
//};


// Enum WillowGame.Behavior_AddInventoryToStorage.EStorageType
//enum class EStorageType : uint8_t
//{
//	ST_BankType                    = 0,
//	ST_StashType                   = 1,
//	ST_MAX                         = 2
//};


// Enum WillowGame.Behavior_AddInventoryToStorage.EInventoryType
//enum class EInventoryType : uint8_t
//{
//	IT_ItemType                    = 0,
//	IT_WeaponType                  = 1,
//	IT_MAX                         = 2
//};


// Enum WillowGame.Behavior_AIFollow.EFollowAction
//enum class EFollowAction : uint8_t
//{
//	Follow_StartFollow             = 0,
//	Follow_StopFollow              = 1,
//	Follow_MAX                     = 2
//};


// Enum WillowGame.Behavior_BoolMath.EBinaryBooleanOperation
//enum class EBinaryBooleanOperation : uint8_t
//{
//	BOOLMATH_NoChange              = 0,
//	BOOLMATH_And                   = 1,
//	BOOLMATH_Or                    = 2,
//	BOOLMATH_Xor                   = 3,
//	BOOLMATH_Not                   = 4,
//	BOOLMATH_MAX                   = 5
//};


// Enum WillowGame.Behavior_CauseDamage.EDamageTarget
//enum class EDamageTarget : uint8_t
//{
//	DT_BehaviorContext             = 0,
//	DT_OtherEventParticipant       = 1,
//	DT_CustomTarget                = 2,
//	DT_RadiusAroundContext         = 3,
//	DT_MAX                         = 4
//};


// Enum WillowGame.Behavior_ChangeEnvironmentTag.EEnvironmentTagAction
//enum class EEnvironmentTagAction : uint8_t
//{
//	EnviroTagAction_Add            = 0,
//	EnviroTagAction_Remove         = 1,
//	EnviroTagAction_MAX            = 2
//};


// Enum WillowGame.Behavior_Charm.ECharmAction
//enum class ECharmAction : uint8_t
//{
//	CharmAction_Charm              = 0,
//	CharmAction_Uncharm            = 1,
//	CharmAction_MAX                = 2
//};


// Enum WillowGame.Behavior_CombatPerch.ECombatPerchAction
//enum class ECombatPerchAction : uint8_t
//{
//	ECPA_Attach                    = 0,
//	ECPA_Detach                    = 1,
//	ECPA_MAX                       = 2
//};


// Enum WillowGame.Behavior_CompareObject.ECompareObjectOutputLinkIds
//enum class EBehavior_CompareObject_ECompareObjectOutputLinkIds : uint8_t
//{
//	OUTPUT_Same                    = 0,
//	OUTPUT_Different               = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum WillowGame.Behavior_Crane.ECraneAction
//enum class ECraneAction : uint8_t
//{
//	ECA_FindDummy                  = 0,
//	ECA_AttachDummy                = 1,
//	ECA_DetachDummy                = 2,
//	ECA_FollowDummy                = 3,
//	ECA_DontDoShit                 = 4,
//	ECA_MAX                        = 5
//};


// Enum WillowGame.Behavior_DamageArea.EDamageArea
//enum class EDamageArea : uint8_t
//{
//	EDA_Enable                     = 0,
//	EDA_Disable                    = 1,
//	EDA_Toggle                     = 2,
//	EDA_MAX                        = 3
//};


// Enum WillowGame.Behavior_DamageClassSwitch.EDamageClassSwitchValues
//enum class EDamageClassSwitchValues : uint8_t
//{
//	DCSV_Player                    = 0,
//	DCSV_Pawn                      = 1,
//	DCSV_Vehicle                   = 2,
//	DCSV_InteractiveObject         = 3,
//	DCSV_MAX                       = 4
//};


// Enum WillowGame.Behavior_DamageSourceSwitch.EDamageSourceSwitchValues
//enum class EDamageSourceSwitchValues : uint8_t
//{
//	DSSV_Bullet                    = 0,
//	DSSV_Grenade                   = 1,
//	DSSV_Melee                     = 2,
//	DSSV_Rocket                    = 3,
//	DSSV_Skill                     = 4,
//	DSSV_StatusEffect              = 5,
//	DSSV_VehicleRanInto            = 6,
//	DSSV_VehicleRanOver            = 7,
//	DSSV_Crushed                   = 8,
//	DSSV_Fell                      = 9,
//	DSSV_Pistol                    = 10,
//	DSSV_SubMachineGun             = 11,
//	DSSV_Shotgun                   = 12,
//	DSSV_MachineGun                = 13,
//	DSSV_Sniper                    = 14,
//	DSSV_DetonatedCrate            = 15,
//	DSSV_MAX                       = 16
//};


// Enum WillowGame.Behavior_DamageSurfaceTypeSwitch.EDamageSurfaceTypeSwitchValues
//enum class EDamageSurfaceTypeSwitchValues : uint8_t
//{
//	DSTSV_Generic                  = 0,
//	DSTSV_Flesh                    = 1,
//	DSTSV_Armor                    = 2,
//	DSTSV_Shield                   = 3,
//	DSTSV_MAX                      = 4
//};


// Enum WillowGame.Behavior_FireShot.EFireShotOutputLinks
//enum class EFireShotOutputLinks : uint8_t
//{
//	FSOL_Complete                  = 0,
//	FSOL_FiredShot                 = 1,
//	FSOL_MAX                       = 2
//};


// Enum WillowGame.Behavior_HasMissions.EHasMissionsOutputLinkIds
//enum class EHasMissionsOutputLinkIds : uint8_t
//{
//	OUTPUT_HasMissions             = 0,
//	OUTPUT_NoMissions              = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum WillowGame.Behavior_SimpleMath.EBinaryMathOperation
//enum class EBinaryMathOperation : uint8_t
//{
//	BINARYMATH_Add                 = 0,
//	BINARYMATH_Sub                 = 1,
//	BINARYMATH_Mul                 = 2,
//	BINARYMATH_Div                 = 3,
//	BINARYMATH_Pow                 = 4,
//	BINARYMATH_Rand                = 5,
//	BINARYMATH_Avg                 = 6,
//	BINARYMATH_Min                 = 7,
//	BINARYMATH_Maximum             = 8,
//	BINARYMATH_NoChange            = 9,
//	BINARYMATH_MAX                 = 10
//};


// Enum WillowGame.Behavior_IsObjectPlayer.ECompareObjectOutputLinkIds
//enum class EBehavior_IsObjectPlayer_ECompareObjectOutputLinkIds : uint8_t
//{
//	OUTPUT_IsPlayer                = 0,
//	OUTPUT_NotPlayer               = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum WillowGame.Behavior_IsObjectVehicle.ECompareObjectOutputLinkIds
//enum class EBehavior_IsObjectVehicle_ECompareObjectOutputLinkIds : uint8_t
//{
//	OUTPUT_IsVehicle               = 0,
//	OUTPUT_NotVehicle              = 1,
//	OUTPUT_MAX                     = 2
//};


// Enum WillowGame.Behavior_LeaderCommand.ELeaderType
//enum class ELeaderType : uint8_t
//{
//	ELT_Target                     = 0,
//	ELT_Formation                  = 1,
//	ELT_MAX                        = 2
//};


// Enum WillowGame.Behavior_LeaderCommand.ELeaderAction
//enum class ELeaderAction : uint8_t
//{
//	ELA_Set                        = 0,
//	ELA_Remove                     = 1,
//	ELA_MAX                        = 2
//};


// Enum WillowGame.Behavior_NetworkRoleSwitch.ENetworkRoleSwitchValues
//enum class ENetworkRoleSwitchValues : uint8_t
//{
//	NRS_Server                     = 0,
//	NRS_Client                     = 1,
//	NRS_MAX                        = 2
//};


// Enum WillowGame.Behavior_OpinionSwitch.EOpinionSwitchLinkIds
//enum class EOpinionSwitchLinkIds : uint8_t
//{
//	OUTPUT_Enemy                   = 0,
//	OUTPUT_Neutral                 = 1,
//	OUTPUT_Friendly                = 2,
//	OUTPUT_MAX                     = 3
//};


// Enum WillowGame.Behavior_PostProcessChain.EPostProcessChainAction
//enum class EPostProcessChainAction : uint8_t
//{
//	PPCA_PushChain                 = 0,
//	PPCA_PopChain                  = 1,
//	PPCA_MAX                       = 2
//};


// Enum WillowGame.Behavior_QueryDayNightCycle.EDayNightCycleValues
//enum class EDayNightCycleValues : uint8_t
//{
//	DNCV_Daytime                   = 0,
//	DNCV_Nighttime                 = 1,
//	DNCV_MAX                       = 2
//};


// Enum WillowGame.Behavior_RadarIcon.ERadarIconAction
//enum class ERadarIconAction : uint8_t
//{
//	RIA_Add                        = 0,
//	RIA_Remove                     = 1,
//	RIA_MAX                        = 2
//};


// Enum WillowGame.Behavior_ScreenParticle.EScreenParticleAction
//enum class EScreenParticleAction : uint8_t
//{
//	SPA_Show                       = 0,
//	SPA_ShowAndHideWhenFinished    = 1,
//	SPA_Hide                       = 2,
//	SPA_HideButAllowToFinishFirst  = 3,
//	SPA_MAX                        = 4
//};


// Enum WillowGame.Behavior_SetLookAtSpeed.ESetLookAtSpeedAction
//enum class ESetLookAtSpeedAction : uint8_t
//{
//	ESLASA_SetSpeed                = 0,
//	ESLASA_SetDefault              = 1,
//	ESLASA_MAX                     = 2
//};


// Enum WillowGame.Behavior_SetStance.EStanceSetType
//enum class EStanceSetType : uint8_t
//{
//	StanceSet_Set                  = 0,
//	StanceSet_Clear                = 1,
//	StanceSet_MAX                  = 2
//};


// Enum WillowGame.Behavior_SpawnFromPopulationSystem.SpawnLocationRotationInheritanceType
//enum class ESpawnLocationRotationInheritanceType : uint8_t
//{
//	SLRIT_Context                  = 0,
//	SLRIT_Attachment               = 1,
//	SLRIT_Self                     = 2,
//	SLRIT_MAX                      = 3
//};


// Enum WillowGame.Behavior_SpawnLootAroundPoint.ESpawnAroundPointBasis
//enum class ESpawnAroundPointBasis : uint8_t
//{
//	SPAWNAROUNDPOINTBASIS_SpawnPoint = 0,
//	SPAWNAROUNDPOINTBASIS_WorldSpace = 1,
//	SPAWNAROUNDPOINTBASIS_CustomLocation = 2,
//	SPAWNAROUNDPOINTBASIS_ContextActor = 3,
//	SPAWNAROUNDPOINTBASIS_MAX      = 4
//};


// Enum WillowGame.Behavior_SpawnLootAtPoints.ESpawnLootAtPointsBasis
//enum class ESpawnLootAtPointsBasis : uint8_t
//{
//	SPAWNATPOINTSBASIS_WorldSpace  = 0,
//	SPAWNATPOINTSBASIS_SpawnPoint  = 1,
//	SPAWNATPOINTSBASIS_ContextActor = 2,
//	SPAWNATPOINTSBASIS_MAX         = 3
//};


// Enum WillowGame.Behavior_SpawnProjectile.ESpawnProjectileOutputLinks
//enum class ESpawnProjectileOutputLinks : uint8_t
//{
//	SPOL_Complete                  = 0,
//	SPOL_SpawnedProjectile         = 1,
//	SPOL_MAX                       = 2
//};


// Enum WillowGame.Behavior_SpawnProjectile.ESpawnDistributionType
//enum class ESpawnDistributionType : uint8_t
//{
//	SPSDT_Cone                     = 0,
//	SPSDT_Arc                      = 1,
//	SPSDT_VerticalArc              = 2,
//	SPSDT_MAX                      = 3
//};


// Enum WillowGame.Behavior_SpawnProjectile.EProjectileSelectionBehavior
//enum class EProjectileSelectionBehavior : uint8_t
//{
//	PROJECTILESELECT_UseSpecified  = 0,
//	PROJECTILESELECT_UseCurrent    = 1,
//	PROJECTILESELECT_MAX           = 2
//};


// Enum WillowGame.Behavior_StatusEffectSwitch.EStatusEffectSwitchValues
//enum class EStatusEffectSwitchValues : uint8_t
//{
//	OUTPUT_None                    = 0,
//	OUTPUT_Ignite                  = 1,
//	OUTPUT_Corrosive               = 2,
//	OUTPUT_Shock                   = 3,
//	OUTPUT_Amp                     = 4,
//	OUTPUT_Slow                    = 5,
//	OUTPUT_Healing                 = 6,
//	OUTPUT_MAX                     = 7
//};


// Enum WillowGame.Behavior_ToggleObstacle.EObstacleToggle
//enum class EObstacleToggle : uint8_t
//{
//	ObstacleToggle_TurnOn          = 0,
//	ObstacleToggle_TurnOff         = 1,
//	ObstacleToggle_Toggle          = 2,
//	ObstacleToggle_MAX             = 3
//};


// Enum WillowGame.Behavior_VectorMath.EVectorMathOperation
//enum class EVectorMathOperation : uint8_t
//{
//	VECTORMATH_NoChange            = 0,
//	VECTORMATH_Add                 = 1,
//	VECTORMATH_Sub                 = 2,
//	VECTORMATH_Mul                 = 3,
//	VECTORMATH_Div                 = 4,
//	VECTORMATH_RandomNormal        = 5,
//	VECTORMATH_RandomCone          = 6,
//	VECTORMATH_Projection          = 7,
//	VECTORMATH_NormalizeA          = 8,
//	VECTORMATH_Cross               = 9,
//	VECTORMATH_ToRotator           = 10,
//	VECTORMATH_FromRotator         = 11,
//	VECTORMATH_Dot                 = 12,
//	VECTORMATH_AX                  = 13,
//	VECTORMATH_AY                  = 14,
//	VECTORMATH_AZ                  = 15,
//	VECTORMATH_MAX                 = 16
//};


// Enum WillowGame.Behavior_WeaponGlowEffect.EWeaponGlowEffectAction
//enum class EWeaponGlowEffectAction : uint8_t
//{
//	GLOW_ACTION_Play               = 0,
//	GLOW_ACTION_Stop               = 1,
//	GLOW_ACTION_StopAny            = 2,
//	GLOW_ACTION_MAX                = 3
//};


// Enum WillowGame.BehaviorVolume.EBehaviorVolumeAction
//enum class EBehaviorVolumeAction : uint8_t
//{
//	EBVA_Entry                     = 0,
//	EBVA_Exit                      = 1,
//	EBVA_Shoot                     = 2,
//	EBVA_MAX                       = 3
//};


// Enum WillowGame.WeaponTypeDefinition.EGbxWeaponLock
//enum class EGbxWeaponLock : uint8_t
//{
//	GBXWEAPLOCK_None               = 0,
//	GBXWEAPLOCK_PaintAndHold       = 1,
//	GBXWEAPLOCK_MAX                = 2
//};


// Enum WillowGame.WeaponTypeDefinition.EBarrelSpinMode
//enum class EBarrelSpinMode : uint8_t
//{
//	BSM_None                       = 0,
//	BSM_SpinUpToFullFireRate       = 1,
//	BSM_SpinBarrelWithEachShot     = 2,
//	BSM_MAX                        = 3
//};


// Enum WillowGame.ChallengeFeedbackMessage.EChallengeFeedback
//enum class EChallengeFeedback : uint8_t
//{
//	CHAL_FEEDBACK_Completed        = 0,
//	CHAL_FEEDBACK_Received         = 1,
//	CHAL_FEEDBACK_MAX              = 2
//};


// Enum WillowGame.ChallengesPanelGFxObject.EChallengePanelSortMode
//enum class EChallengePanelSortMode : uint8_t
//{
//	ECPSM_Category                 = 0,
//	ECPSM_LevelCompletion          = 1,
//	ECPSM_Max                      = 2
//};


// Enum WillowGame.ChallengesScreenGFxObject.EChallengePanel
//enum class EChallengePanel : uint8_t
//{
//	ECP_Badass                     = 0,
//	ECP_Challenges                 = 1,
//	ECP_MAX                        = 2
//};


// Enum WillowGame.ChassisDefinition.EAIVehicleSeatPosition
//enum class EAIVehicleSeatPosition : uint8_t
//{
//	VSEAT_None                     = 0,
//	VSEAT_Front                    = 1,
//	VSEAT_Rear                     = 2,
//	VSEAT_Right                    = 3,
//	VSEAT_Left                     = 4,
//	VSEAT_MAX                      = 5
//};


// Enum WillowGame.ChassisDefinition.EVehicleSide
//enum class EVehicleSide : uint8_t
//{
//	VSIDE_Left                     = 0,
//	VSIDE_Right                    = 1,
//	VSIDE_Front                    = 2,
//	VSIDE_Back                     = 3,
//	VSIDE_MAX                      = 4
//};


// Enum WillowGame.ChassisDefinition.EOccupantDamageTransfer
//enum class EOccupantDamageTransfer : uint8_t
//{
//	VEHDMGTRANS_None               = 0,
//	VEHDMGTRANS_Transfer           = 1,
//	VEHDMGTRANS_MAX                = 2
//};


// Enum WillowGame.ChassisDefinition.ESeatDamageRules
//enum class ESeatDamageRules : uint8_t
//{
//	SDRULES_OccupantInvincible     = 0,
//	SDRULES_PlayerOccupantInvincible = 1,
//	SDRULES_AIOccupantInvincible   = 2,
//	SDRULES_OccupantTakesDamage    = 3,
//	SDRULES_MAX                    = 4
//};


// Enum WillowGame.InventoryPartListCollectionDefinition.EPartReplacementMode
//enum class EPartReplacementMode : uint8_t
//{
//	EPRM_Additive                  = 0,
//	EPRM_Selective                 = 1,
//	EPRM_Complete                  = 2,
//	EPRM_MAX                       = 3
//};


// Enum WillowGame.ClassModPartDefinition.EClassModPartType
//enum class EClassModPartType : uint8_t
//{
//	CLASSMOD_PART_Body             = 0,
//	CLASSMOD_PART_LeftSide         = 1,
//	CLASSMOD_PART_RightSide        = 2,
//	CLASSMOD_PART_Material         = 3,
//	CLASSMOD_PART_Prefix           = 4,
//	CLASSMOD_PART_Title            = 5,
//	CLASSMOD_PART_MAX              = 6
//};


// Enum WillowGame.CombatMusicManager.ECombatMusicManagerState
//enum class ECombatMusicManagerState : uint8_t
//{
//	CMMS_Playing                   = 0,
//	CMMS_VolumeFading              = 1,
//	CMMS_Idle                      = 2,
//	CMMS_MAX                       = 3
//};


// Enum WillowGame.CoordinatedEffectDefinition.ECoordinatedParticleScaleMode
//enum class ECoordinatedParticleScaleMode : uint8_t
//{
//	CPSM_None                      = 0,
//	CPSM_LargestAxis               = 1,
//	CPSM_SmallestAxis              = 2,
//	CPSM_HorizontalAxis            = 3,
//	CPSM_VerticalAxis              = 4,
//	CPSM_EachAxis                  = 5,
//	CPSM_MAX                       = 6
//};


// Enum WillowGame.DeathtrapActionSkill.EMedicBeamState
//enum class EMedicBeamState : uint8_t
//{
//	MedicBeam_Inactive             = 0,
//	MedicBeam_Active               = 1,
//	MedicBeam_Blocked              = 2,
//	MedicBeam_MAX                  = 3
//};


// Enum WillowGame.WillowAIPawn.EDenStat
//enum class EDenStat : uint8_t
//{
//	DenStat_None                   = 0,
//	DenStat_Injured                = 1,
//	DenStat_OnFire                 = 2,
//	DenStat_Corrosive              = 3,
//	DenStat_Shocked                = 4,
//	DenStat_Slagged                = 5,
//	DenStat_Slowed                 = 6,
//	DenStat_Healing                = 7,
//	DenStat_MAX                    = 8
//};


// Enum WillowGame.WillowAIPawn.EStaggerState
//enum class EStaggerState : uint8_t
//{
//	ESTAGGER_Staggered             = 0,
//	ESTAGGER_Unstaggering          = 1,
//	ESTAGGER_BlendAnimStart        = 2,
//	ESTAGGER_BlendAnimEnd          = 3,
//	ESTAGGER_MAX                   = 4
//};


// Enum WillowGame.DesignerAttributeDefinition.EDesignerAtttributeScope
//enum class EDesignerAtttributeScope : uint8_t
//{
//	DASCOPE_Global                 = 0,
//	DASCOPE_Local                  = 1,
//	DASCOPE_MAX                    = 2
//};


// Enum WillowGame.DeveloperPerksDefinition.EGamerPic
//enum class EGamerPic : uint8_t
//{
//	GAMERPIC_Min                   = 0,
//	GAMERPIC_MAX                   = 1
//};


// Enum WillowGame.DeveloperPerksDefinition.EDeveloperPerksPlatforms
//enum class EDeveloperPerksPlatforms : uint8_t
//{
//	DPP_PC                         = 0,
//	DPP                            = 1,
//	DPP_PS3                        = 2,
//	DPP_Any                        = 3,
//	DPP_MAX                        = 4
//};


// Enum WillowGame.FastTravelStationGFxMovie.ELocationMissionStatus
//enum class ELocationMissionStatus : uint8_t
//{
//	LMS_ReadyToTurnIn              = 0,
//	LMS_New                        = 1,
//	LMS_InProgress                 = 2,
//	LMS_InProgressStory            = 3,
//	LMS_AndMuchMore                = 4,
//	LMS_Invalid                    = 5,
//	LMS_MAX                        = 6
//};


// Enum WillowGame.FiringModeDefinition.EWillowWeaponFireType
//enum class EWillowWeaponFireType : uint8_t
//{
//	EWWFT_Bullet                   = 0,
//	EWWFT_Beam                     = 1,
//	EWWFT_Rocket                   = 2,
//	EWWFT_HitScan                  = 3,
//	EWWFT_MAX                      = 4
//};


// Enum WillowGame.FiringModeDefinition.ELightBeamLock
//enum class ELightBeamLock : uint8_t
//{
//	LBL_Never                      = 0,
//	LBL_Always                     = 1,
//	LBL_LockOn                     = 2,
//	LBL_MAX                        = 3
//};


// Enum WillowGame.WillowGameReplicationInfo.EMatchmakingState
//enum class EMatchmakingState : uint8_t
//{
//	MMS_Inactive                   = 0,
//	MMS_Searching1                 = 1,
//	MMS_Searching2                 = 2,
//	MMS_Searching3                 = 3,
//	MMS_MatchFound                 = 4,
//	MMS_NoMatchFound               = 5,
//	MMS_MAX                        = 6
//};


// Enum WillowGame.WillowGameInfo.EStartGameState
//enum class EStartGameState : uint8_t
//{
//	SGS_None                       = 0,
//	SGS_IntroMovie                 = 1,
//	SGS_CharacterSelect            = 2,
//	SGS_WaitingForPlayerPawns      = 3,
//	SGS_Started                    = 4,
//	SGS_MAX                        = 5
//};


// Enum WillowGame.GlobalAttributeValueResolver.EGlobalAttributes
//enum class EGlobalAttributes : uint8_t
//{
//	GATTR_ExperiencePointTestLevel = 0,
//	GATTR_BadassTokenTestRank      = 1,
//	GATTR_MAX                      = 2
//};


// Enum WillowGame.GrenadeModPartDefinition.EGrenadeModPartType
//enum class EGrenadeModPartType : uint8_t
//{
//	GRENADEMOD_PART_Body           = 0,
//	GRENADEMOD_PART_Delivery       = 1,
//	GRENADEMOD_PART_Trigger        = 2,
//	GRENADEMOD_PART_Accessory      = 3,
//	GRENADEMOD_PART_Material       = 4,
//	GRENADEMOD_PART_Prefix         = 5,
//	GRENADEMOD_PART_Title          = 6,
//	GRENADEMOD_PART_Property1      = 7,
//	GRENADEMOD_PART_Property2      = 8,
//	GRENADEMOD_PART_Property3      = 9,
//	GRENADEMOD_PART_Property4      = 10,
//	GRENADEMOD_PART_MAX            = 11
//};


// Enum WillowGame.HUDWidget_Crosshairs.ECrosshairColor
//enum class ECrosshairColor : uint8_t
//{
//	ECC_None                       = 0,
//	ECC_White                      = 1,
//	ECC_Red                        = 2,
//	ECC_Green                      = 3,
//	ECC_MAX                        = 4
//};


// Enum WillowGame.HUDWidget_Missions.EMissionWidgetMessageType
//enum class EMissionWidgetMessageType : uint8_t
//{
//	EMWT_None                      = 0,
//	EMWT_Init                      = 1,
//	EMWT_SetMission                = 2,
//	EMWT_AddObjective              = 3,
//	EMWT_RemoveObjective           = 4,
//	EMWT_SwapInObjective           = 5,
//	EMWT_SwapOutObjective          = 6,
//	EMWT_CompleteObjective         = 7,
//	EMWT_ClearObjective            = 8,
//	EMWT_UpdateObjectiveCount      = 9,
//	EMWT_EnableTurnIn              = 10,
//	EMWT_EnableOr                  = 11,
//	EMWT_EnableFailed              = 12,
//	EMWT_EnableTimer               = 13,
//	EMWT_TickTimer                 = 14,
//	EMWT_EnableDefense             = 15,
//	EMWT_TickDefense               = 16,
//	EMWT_FlyingCheckmark           = 17,
//	EMWT_MAX                       = 18
//};


// Enum WillowGame.HUDWidget_Missions.EMissionWidgetMessageCategory
//enum class EMissionWidgetMessageCategory : uint8_t
//{
//	EMWC_None                      = 0,
//	EMWC_Init                      = 1,
//	EMWC_PreComplete               = 2,
//	EMWC_Complete                  = 3,
//	EMWC_Remove                    = 4,
//	EMWC_Add                       = 5,
//	EMWC_MAX                       = 6
//};


// Enum WillowGame.HUDWidget_WorldSpace.EPlayerIconState
//enum class EPlayerIconState : uint8_t
//{
//	EPIS_Normal                    = 0,
//	EPIS_Injured                   = 1,
//	EPIS_Reviving                  = 2,
//	EPIS_MAX                       = 3
//};


// Enum WillowGame.InventoryCardGFx.ETopStatArrow
//enum class ETopStatArrow : uint8_t
//{
//	ETSA_Blank                     = 0,
//	ETSA_Up                        = 1,
//	ETSA_Down                      = 2,
//	ETSA_Same                      = 3,
//	ETSA_MAX                       = 4
//};


// Enum WillowGame.InputActionDefinition.EInputActionEvent
//enum class EInputActionEvent : uint8_t
//{
//	INPUT_ACTION_Begin             = 0,
//	INPUT_ACTION_End               = 1,
//	INPUT_ACTION_MAX               = 2
//};


// Enum WillowGame.InputDeviceDefinition.EAxisParameter
//enum class EAxisParameter : uint8_t
//{
//	AXIS_PARAM_aBaseX              = 0,
//	AXIS_PARAM_aBaseY              = 1,
//	AXIS_PARAM_aBaseZ              = 2,
//	AXIS_PARAM_aMouseX             = 3,
//	AXIS_PARAM_aMouseY             = 4,
//	AXIS_PARAM_aForward            = 5,
//	AXIS_PARAM_aTurn               = 6,
//	AXIS_PARAM_aStrafe             = 7,
//	AXIS_PARAM_aUp                 = 8,
//	AXIS_PARAM_aLookUp             = 9,
//	AXIS_PARAM_aPS3AccelX          = 10,
//	AXIS_PARAM_aPS3AccelY          = 11,
//	AXIS_PARAM_aPS3AccelZ          = 12,
//	AXIS_PARAM_aPS3Gyro            = 13,
//	AXIS_PARAM_MAX                 = 14
//};


// Enum WillowGame.IProjectileBehavior.EProjectilePayloadType
//enum class EProjectilePayloadType : uint8_t
//{
//	PPT_Standard                   = 0,
//	PPT_AreaEffect                 = 1,
//	PPT_BouncingBetty              = 2,
//	PPT_MIRV                       = 3,
//	PPT_Singularity                = 4,
//	PPT_TedioreReload              = 5,
//	PPT_Transfusion                = 6,
//	PPT_MAX                        = 7
//};


// Enum WillowGame.IProjectileBehavior.EHomingTargetType
//enum class EHomingTargetType : uint8_t
//{
//	HTARGET_None                   = 0,
//	HTARGET_Instigator             = 1,
//	HTARGET_ViewGuidePawn          = 2,
//	HTARGET_ViewGuideLocation      = 3,
//	HTARGET_NearestActor           = 4,
//	HTARGET_NearestFriend          = 5,
//	HTARGET_NearestFoe             = 6,
//	HTARGET_NearestFriendNotInstigator = 7,
//	HTARGET_MAX                    = 8
//};


// Enum WillowGame.LANServerBrowserGFxMovie.ESortType
//enum class ESortType : uint8_t
//{
//	SORT_PlayerCount               = 0,
//	SORT_Name                      = 1,
//	SORT_Level                     = 2,
//	SORT_Mission                   = 3,
//	SORT_Ping                      = 4,
//	SORT_MAX                       = 5
//};


// Enum WillowGame.LANServerBrowserGFxMovie.ESortDirection
//enum class ESortDirection : uint8_t
//{
//	SORTDIR_Ascending              = 0,
//	SORTDIR_Descending             = 1,
//	SORTDIR_MAX                    = 2
//};


// Enum WillowGame.LiftActionSkill.EPhaselockState
//enum class EPhaselockState : uint8_t
//{
//	EPLS_None                      = 0,
//	EPLS_Intro                     = 1,
//	EPLS_Outro                     = 2,
//	EPLS_Locked                    = 3,
//	EPLS_Ruin                      = 4,
//	EPLS_Subsequence               = 5,
//	EPLS_MAX                       = 6
//};


// Enum WillowGame.LocalMapChangeMessage.EMapChangeMessages
//enum class EMapChangeMessages : uint8_t
//{
//	MAPCHANGE_None                 = 0,
//	MAPCHANGE_PlayerDown           = 1,
//	MAPCHANGE_CanceledPlayerDown   = 2,
//	MAPCHANGE_PlayerInMenu         = 3,
//	MAPCHANGE_CanceledPlayerMenu   = 4,
//	MAPCHANGE_PlayerIsSaving       = 5,
//	MAPCHANGE_CanceledPlayerIsSaving = 6,
//	MAPCHANGE_MissingDLC           = 7,
//	MAPCHANGE_Initiated            = 8,
//	MAPCHANGE_PlayerJoining        = 9,
//	MAPCHANGE_CanceledPlayerJoining = 10,
//	MAPCHANGE_PlayerDueling        = 11,
//	MAPCHANGE_CanceledPlayerDueling = 12,
//	MAPCHANGE_PlayerRespawn        = 13,
//	MAPCHANGE_CanceledPlayerRespawn = 14,
//	MAPCHANGE_CountdownTimer       = 15,
//	MAPCHANGE_MAX                  = 16
//};


// Enum WillowGame.LockoutDefinition.ELockoutStyle
//enum class ELockoutStyle : uint8_t
//{
//	LOCKOUT_Relative               = 0,
//	LOCKOUT_NextDay                = 1,
//	LOCKOUT_NextWeek               = 2,
//	LOCKOUT_MAX                    = 3
//};


// Enum WillowGame.MissionDefinition.EDefendMission
//enum class EDefendMission : uint8_t
//{
//	EDM_None                       = 0,
//	EDM_NoFail                     = 1,
//	EDM_Failable                   = 2,
//	EDM_MAX                        = 3
//};


// Enum WillowGame.MissionPopulationAspect.EPopulationWaypointActorSetting
//enum class EPopulationWaypointActorSetting : uint8_t
//{
//	PWAS_ALL                       = 0,
//	PWAS_SpawnedActors             = 1,
//	PWAS_Opportunity               = 2,
//	PWAS_OpportunityIfNoActors     = 3,
//	PWAS_MAX                       = 4
//};


// Enum WillowGame.MissionPopulationAspect.EPopulationWaypointSetting
//enum class EPopulationWaypointSetting : uint8_t
//{
//	PWS_None                       = 0,
//	PWS_MissionObjective           = 1,
//	PWS_KillOverride               = 2,
//	PWS_All                        = 3,
//	PWS_MAX                        = 4
//};


// Enum WillowGame.MissionPopulationAspect.EObjectivePopulationActivation
//enum class EObjectivePopulationActivation : uint8_t
//{
//	OPA_External                   = 0,
//	OPA_AlwaysActive               = 1,
//	OPA_ActiveWhenObjectiveActive  = 2,
//	OPA_ActiveWhenObjectiveNotComplete = 3,
//	OPA_ActiveWhenObjectiveNotInactive = 4,
//	OPA_ActiveWhenObjectiveComplete = 5,
//	OPA_MAX                        = 6
//};


// Enum WillowGame.MissionPopulationAspect.EObjectiveUpdateSetting
//enum class EObjectiveUpdateSetting : uint8_t
//{
//	OUS_None                       = 0,
//	OUS_MissionObjectiveOnDeath    = 1,
//	OUS_OverrideObjectiveOnDeath   = 2,
//	OUS_MissionAndOverrideObjectiveOnDeath = 3,
//	OUS_MissionObjectiveOnStatAdd  = 4,
//	OUS_MissionObjectiveOnStatAddRemove = 5,
//	OUS_OverrideObjectiveOnStatAdd = 6,
//	OUS_OverrideObjectiveOnStatAddRemove = 7,
//	OUS_MissionObjectiveOnAllDead  = 8,
//	OUS_OverrideObjectiveOnAllDead = 9,
//	OUS_MissionAndOverrideObjectiveOnAllDead = 10,
//	OUS_MAX                        = 11
//};


// Enum WillowGame.MissionTracker.EAdvanceTrackedMissionResult
//enum class EAdvanceTrackedMissionResult : uint8_t
//{
//	ATMR_Success                   = 0,
//	ATMR_NothingToDo               = 1,
//	ATMR_Error                     = 2,
//	ATMR_DidNotAdvanceObjectiveSet = 3,
//	ATMR_MAX                       = 4
//};


// Enum WillowGame.PassengerCameraDefinition.ECameraTargetForPassenger
//enum class ECameraTargetForPassenger : uint8_t
//{
//	PASSENGERCAMTARG_SeatAnchor    = 0,
//	PASSENGERCAMTARG_PawnHead      = 1,
//	PASSENGERCAMTARG_PrevSeatAnchor = 2,
//	PASSENGERCAMTARG_MAX           = 3
//};


// Enum WillowGame.PassengerCameraDefinition.ECameraInitialRotation
//enum class ECameraInitialRotation : uint8_t
//{
//	CAMROT_UseControllerRot        = 0,
//	CAMROT_UseFrameZeroRot         = 1,
//	CAMROT_MAX                     = 2
//};


// Enum WillowGame.PassengerCameraDefinition.ECameraRotationThisFrame
//enum class ECameraRotationThisFrame : uint8_t
//{
//	CAMROTTHISFRAME_FreeLook       = 0,
//	CAMROTTHISFRAME_FixedView      = 1,
//	CAMROTTHISFRAME_LerpView       = 2,
//	CAMROTTHISFRAME_MAX            = 3
//};


// Enum WillowGame.PassengerCameraDefinition.EVehicleCameraLerpStyle
//enum class EVehicleCameraLerpStyle : uint8_t
//{
//	VCAMLERP_Linear                = 0,
//	VCAMLERP_Squared               = 1,
//	VCAMLERP_Cubed                 = 2,
//	VCAMLERP_Sine                  = 3,
//	VCAMLERP_MAX                   = 4
//};


// Enum WillowGame.WillowAIMoveNode.EVehicleNodeType
//enum class EVehicleNodeType : uint8_t
//{
//	VEHNODE_Patrol                 = 0,
//	VEHNODE_ScriptedPath           = 1,
//	VEHNODE_MAX                    = 2
//};


// Enum WillowGame.Perch.EPerchAnimType
//enum class EPerchAnimType : uint8_t
//{
//	PAT_Start                      = 0,
//	PAT_Idle                       = 1,
//	PAT_Stop                       = 2,
//	PAT_MAX                        = 3
//};


// Enum WillowGame.WillowPreviewComponent.EPreviewStyle
//enum class EPreviewStyle : uint8_t
//{
//	EPS_None                       = 0,
//	EPS_Still                      = 1,
//	EPS_Playing                    = 2,
//	EPS_MAX                        = 3
//};


// Enum WillowGame.PhysicsJumpPreviewComponent.EPhysicsJumpPreview
//enum class EPhysicsJumpPreview : uint8_t
//{
//	JumpPreview_Launch             = 0,
//	JumpPreview_Idle               = 1,
//	JumpPreview_Land               = 2,
//	JumpPreview_MAX                = 3
//};


// Enum WillowGame.PlayerActionExpressionEvaluator.EPlayerEvalAction
//enum class EPlayerEvalAction : uint8_t
//{
//	EVAL_ACTION_Melee              = 0,
//	EVAL_ACTION_Reload             = 1,
//	EVAL_ACTION_WeaponFire         = 2,
//	EVAL_ACTION_Grenade            = 3,
//	EVAL_ACTION_WeaponZoom         = 4,
//	EVAL_ACTION_Sprint             = 5,
//	EVAL_ACTION_Duck               = 6,
//	EVAL_ACTION_WeaponZoomIn       = 7,
//	EVAL_ACTION_MAX                = 8
//};


// Enum WillowGame.PopulationFactoryWillowVehicle.WillowVehicleRoles
//enum class EWillowVehicleRoles : uint8_t
//{
//	WILLOWVEHICLEROLE_Driver       = 0,
//	WILLOWVEHICLEROLE_Gunner       = 1,
//	WILLOWVEHICLEROLE_SideClinger  = 2,
//	WILLOWVEHICLEROLE_MAX          = 3
//};


// Enum WillowGame.PopulationFactoryWillowVehicle.EVehicleBalanceOption
//enum class EVehicleBalanceOption : uint8_t
//{
//	VEHICLEBALANCE_ForPlayers      = 0,
//	VEHICLEBALANCE_ForEnemyAI      = 1,
//	VEHICLEBALANCE_MAX             = 2
//};


// Enum WillowGame.ProjectileBehavior_Detonate.ETargetAllegiance
//enum class ETargetAllegiance : uint8_t
//{
//	TARGET_ALLEG_Friendly          = 0,
//	TARGET_ALLEG_Enemy             = 1,
//	TARGET_ALLEG_Any               = 2,
//	TARGET_ALLEG_MAX               = 3
//};


// Enum WillowGame.ProjectileDefinition.EHomingTargetChangeType
//enum class EHomingTargetChangeType : uint8_t
//{
//	HTC_AnyTarget                  = 0,
//	HTC_NewTarget                  = 1,
//	HTC_LostTarget                 = 2,
//	HTC_MAX                        = 3
//};


// Enum WillowGame.ProjectileDefinition.EProjectileType
//enum class EProjectileType : uint8_t
//{
//	PROJECTILE_TYPE_Unknown        = 0,
//	PROJECTILE_TYPE_Frag_Grenade   = 1,
//	PROJECTILE_TYPE_Protean_Grenade = 2,
//	PROJECTILE_TYPE_Rocket         = 3,
//	PROJECTILE_TYPE_MAX            = 4
//};


// Enum WillowGame.ProjectileDefinition.EProjectileOnHitOutputs
//enum class EProjectileOnHitOutputs : uint8_t
//{
//	ProjectileOnHit_All            = 0,
//	ProjectileOnHit_Enemy          = 1,
//	ProjectileOnHit_Friendly       = 2,
//	ProjectileOnHit_Neutral        = 3,
//	ProjectileOnHit_MAX            = 4
//};


// Enum WillowGame.ReceivedAmmoMessage.EAmmoMessageSwitch
//enum class EAmmoMessageSwitch : uint8_t
//{
//	RECEIVEDAMMO_CombatRifle       = 0,
//	RECEIVEDAMMO_SMG               = 1,
//	RECEIVEDAMMO_Revolver          = 2,
//	RECEIVEDAMMO_Repeater          = 3,
//	RECEIVEDAMMO_Shotgun           = 4,
//	RECEIVEDAMMO_SniperRifle       = 5,
//	RECEIVEDAMMO_Rocket            = 6,
//	RECEIVEDAMMO_Grenade           = 7,
//	RECEIVEDAMMO_MAX               = 8
//};


// Enum WillowGame.SeqAct_ExecuteSkill.EExecuteSkillSequenceInput
//enum class EExecuteSkillSequenceInput : uint8_t
//{
//	SEQUENCE_ActivateSkill         = 0,
//	SEQUENCE_DeactivateSkill       = 1,
//	SEQUENCE_ToggleSkill           = 2,
//	SEQUENCE_MAX                   = 3
//};


// Enum WillowGame.SeqAct_MathBase.ESeqAct_MathOperation
//enum class ESeqAct_MathOperation : uint8_t
//{
//	SQAMO_Add                      = 0,
//	SQAMO_Subtract                 = 1,
//	SQAMO_Multiply                 = 2,
//	SQAMO_Divide                   = 3,
//	SQAMO_Modulus                  = 4,
//	SQAMO_MAX                      = 5
//};


// Enum WillowGame.SeqAct_ModifyHUDElement.EHUDElement
//enum class EHUDElement : uint8_t
//{
//	HUD_ResourcePool               = 0,
//	HUD_Ammo                       = 1,
//	HUD_Compass                    = 2,
//	HUD_Skills                     = 3,
//	HUD_XP                         = 4,
//	HUD_MAX                        = 5
//};


// Enum WillowGame.SeqAct_ProceduralSwitch.EChoiceProbability
//enum class EChoiceProbability : uint8_t
//{
//	PROBABILITY_NoBias             = 0,
//	PROBABILITY_Rare               = 1,
//	PROBABILITY_Common             = 2,
//	PROBABILITY_MAX                = 3
//};


// Enum WillowGame.SeqAct_SetNameList.EListDefinitionSetType
//enum class EListDefinitionSetType : uint8_t
//{
//	ListDefSet_Set                 = 0,
//	ListDefSet_Clear               = 1,
//	ListDefSet_MAX                 = 2
//};


// Enum WillowGame.ShieldDefinition.EShieldType
//enum class EShieldType : uint8_t
//{
//	SHT_Absorption                 = 0,
//	SHT_Booster                    = 1,
//	SHT_Chimera                    = 2,
//	SHT_Impact                     = 3,
//	SHT_Juggernaut                 = 4,
//	SHT_Nova                       = 5,
//	SHT_Roid                       = 6,
//	SHT_Spike                      = 7,
//	SHT_Standard                   = 8,
//	SHT_Custom1                    = 9,
//	SHT_Custom2                    = 10,
//	SHT_Custom3                    = 11,
//	SHT_Custom4                    = 12,
//	SHT_Custom5                    = 13,
//	SHT_MAX                        = 14
//};


// Enum WillowGame.ShieldDefinition.EShieldPrimeMechanism
//enum class EShieldPrimeMechanism : uint8_t
//{
//	SPM_NoPrime                    = 0,
//	SPM_PrimeOnFull                = 1,
//	SPM_PrimeOnEmptyAfterFullRecharge = 2,
//	SPM_PrimeOnEmpty               = 3,
//	SPM_AlwaysPrimed               = 4,
//	SPM_PrimedWhenNotEmpty         = 5,
//	SPM_PrimedWhenNotEmptyAfterFullRecharge = 6,
//	SPM_MAX                        = 7
//};


// Enum WillowGame.ShieldPartDefinition.EShieldPartType
//enum class EShieldPartType : uint8_t
//{
//	SHIELD_PART_Body               = 0,
//	SHIELD_PART_Battery            = 1,
//	SHIELD_PART_Capacitor          = 2,
//	SHIELD_PART_Property1          = 3,
//	SHIELD_PART_Property2          = 4,
//	SHIELD_PART_Property3          = 5,
//	SHIELD_PART_Property4          = 6,
//	SHIELD_PART_Accessory          = 7,
//	SHIELD_PART_Material           = 8,
//	SHIELD_PART_Prefix             = 9,
//	SHIELD_PART_Title              = 10,
//	SHIELD_PART_MAX                = 11
//};


// Enum WillowGame.SkillExpressionEvaluator.ESkillRunState
//enum class ESkillRunState : uint8_t
//{
//	ESS_Running                    = 0,
//	ESS_NotRunning                 = 1,
//	ESS_MAX                        = 2
//};


// Enum WillowGame.SkillTreeGFxObject.ESkillTreeFailureReason
//enum class ESkillTreeFailureReason : uint8_t
//{
//	eFR_NoSkillPoints              = 0,
//	eFR_SkillLocked                = 1,
//	eFR_SkillMaxed                 = 2,
//	eFR_DataIssue                  = 3,
//	eFR_NoFailure                  = 4,
//	eFR_MAX                        = 5
//};


// Enum WillowGame.SkillTreeGFxObject.ESkillIconState
//enum class ESkillIconState : uint8_t
//{
//	eSIS_Disabled                  = 0,
//	eSIS_Enabled                   = 1,
//	eSIS_Partial                   = 2,
//	eSIS_Maxed                     = 3,
//	eSIS_MAX                       = 4
//};


// Enum WillowGame.SkillTreeGFxObject.ENavDirection
//enum class ENavDirection : uint8_t
//{
//	EN_Up                          = 0,
//	EN_Down                        = 1,
//	EN_Left                        = 2,
//	EN_Right                       = 3,
//	EN_None                        = 4,
//	EN_MAX                         = 5
//};


// Enum WillowGame.SpecialMove_Vehicle.EVehicleTransitionType
//enum class EVehicleTransitionType : uint8_t
//{
//	EVEHTRANS_Undefined            = 0,
//	EVEHTRANS_SeatEntry            = 1,
//	EVEHTRANS_SeatExit             = 2,
//	EVEHTRANS_SeatSwitch           = 3,
//	EVEHTRANS_SeatIdle             = 4,
//	EVEHTRANS_MAX                  = 5
//};


// Enum WillowGame.StanceExpressionEvaluator.EStanceOption
//enum class EStanceOption : uint8_t
//{
//	StanceOption_Active            = 0,
//	StanceOption_NotActive         = 1,
//	StanceOption_MAX               = 2
//};


// Enum WillowGame.StatusEffectExpressionEvaluator.EStatusEffectState
//enum class EStatusEffectState : uint8_t
//{
//	SEC_Active                     = 0,
//	SEC_NotActive                  = 1,
//	SEC_MAX                        = 2
//};


// Enum WillowGame.StatusMenuExGFxMovie.ECellState
//enum class ECellState : uint8_t
//{
//	CELL_Selected                  = 0,
//	CELL_Both                      = 1,
//	CELL_Normal                    = 2,
//	CELL_Highlight                 = 3,
//	CELL_Locked                    = 4,
//	CELL_MAX                       = 5
//};


// Enum WillowGame.StatusMenuInventoryPanelGFxObject.EInventoryPanel
//enum class EInventoryPanel : uint8_t
//{
//	EIP_Backpack                   = 0,
//	EIP_Equipped                   = 1,
//	EIP_MAX                        = 2
//};


// Enum WillowGame.TargetableAttributeValueResolver.ETargetableValue
//enum class ETargetableValue : uint8_t
//{
//	TARGETABLE_IsChampion          = 0,
//	TARGETABLE_MAX                 = 1
//};


// Enum WillowGame.TradingPanelGFxObject.ETradingPanel
//enum class ETradingPanel : uint8_t
//{
//	ETP_Backpack                   = 0,
//	ETP_Offers                     = 1,
//	ETP_MAX                        = 2
//};


// Enum WillowGame.VehicleSpawnStationTerminal.EVSSVehicleState
//enum class EVSSVehicleState : uint8_t
//{
//	EVSSVS_Ready                   = 0,
//	EVSSVS_Deployed                = 1,
//	EVSSVS_Occupied                = 2,
//	EVSSVS_MAX                     = 3
//};


// Enum WillowGame.WillowPopulationMaster.EVehicleSpawnStationSlot
//enum class EVehicleSpawnStationSlot : uint8_t
//{
//	VSS_Slot1                      = 0,
//	VSS_Slot2                      = 1,
//	VSS_MAX                        = 2
//};


// Enum WillowGame.VehicleClassDefinition.EVehicleCollisionType
//enum class EVehicleCollisionType : uint8_t
//{
//	VEHICLE_COLLIDE_World          = 0,
//	VEHICLE_COLLIDE_Enemy          = 1,
//	VEHICLE_COLLIDE_Friendly       = 2,
//	VEHICLE_COLLIDE_Neutral        = 3,
//	VEHICLE_COLLIDE_MAX            = 4
//};


// Enum WillowGame.VSSUIDefinition.EVehicleSpawnStationAvailability
//enum class EVehicleSpawnStationAvailability : uint8_t
//{
//	EVSSAVAIL_Land                 = 0,
//	EVSSAVAIL_Desert               = 1,
//	EVSSAVAIL_Ice                  = 2,
//	EVSSAVAIL_Water                = 3,
//	EVSSAVAIL_Wheeled              = 4,
//	EVSSAVAIL_Hovercraft           = 5,
//	EVSSAVAIL_Aircraft             = 6,
//	EVSSAVAIL_Watercraft           = 7,
//	EVSSAVAIL_Sleds                = 8,
//	EVSSAVAIL_Reserved10           = 9,
//	EVSSAVAIL_Reserved11           = 10,
//	EVSSAVAIL_Reserved12           = 11,
//	EVSSAVAIL_Reserved13           = 12,
//	EVSSAVAIL_Reserved14           = 13,
//	EVSSAVAIL_Reserved15           = 14,
//	EVSSAVAIL_Reserved16           = 15,
//	EVSSAVAIL_Reserved17           = 16,
//	EVSSAVAIL_Reserved18           = 17,
//	EVSSAVAIL_Reserved19           = 18,
//	EVSSAVAIL_Reserved20           = 19,
//	EVSSAVAIL_BL2Main              = 20,
//	EVSSAVAIL_DLCOrchid            = 21,
//	EVSSAVAIL_DLC2                 = 22,
//	EVSSAVAIL_DLCSage              = 23,
//	EVSSAVAIL_DLC4                 = 24,
//	EVSSAVAIL_DLC5                 = 25,
//	EVSSAVAIL_DLC6                 = 26,
//	EVSSAVAIL_Reserved28           = 27,
//	EVSSAVAIL_Reserved29           = 28,
//	EVSSAVAIL_Reserved30           = 29,
//	EVSSAVAIL_MAX                  = 30
//};


// Enum WillowGame.VehicleSeatSwap_PlayerInteractionServer.VehicleSeatSwapMessages
//enum class EVehicleSeatSwapMessages : uint8_t
//{
//	VSSM_StartAsInstigator         = 0,
//	VSSM_StartAsTarget             = 1,
//	VSSM_TargetAccepted            = 2,
//	VSSM_TargetDeclined            = 3,
//	VSSM_InstigatorCanceled        = 4,
//	VSSM_MAX                       = 5
//};


// Enum WillowGame.VehicleSpawnStationGFxMovie.EVSSStage
//enum class EVSSStage : uint8_t
//{
//	VSSSTAGE_Start                 = 0,
//	VSSSTAGE_WaitingOnReplicatedData = 1,
//	VSSSTAGE_VehicleFamilySelection = 2,
//	VSSSTAGE_MainLogicLoop         = 3,
//	VSSSTAGE_ForcedExit            = 4,
//	VSSSTAGE_MAX                   = 5
//};


// Enum WillowGame.VendingMachineExGFxMovie.EShopMode
//enum class EShopMode : uint8_t
//{
//	SHOPMODE_Sell                  = 0,
//	SHOPMODE_Buy                   = 1,
//	SHOPMODE_BuyBack               = 2,
//	SHOPMODE_MAX                   = 3
//};


// Enum WillowGame.WillowAnimNode_AimState.EAimAnimState
//enum class EAimAnimState : uint8_t
//{
//	AimAnimState_Idle              = 0,
//	AimAnimState_IronSights        = 1,
//	AimAnimState_MAX               = 2
//};


// Enum WillowGame.WillowAnimNode_MovementTransition.EMoveTransChannel
//enum class EMoveTransChannel : uint8_t
//{
//	EMTC_Idle                      = 0,
//	EMTC_Movement                  = 1,
//	EMTC_Transition                = 2,
//	EMTC_MAX                       = 3
//};


// Enum WillowGame.WillowAnimNode_MovementTransition.EMoveState
//enum class EMoveState : uint8_t
//{
//	MOVESTATE_Idle                 = 0,
//	MOVESTATE_LaunchDelay          = 1,
//	MOVESTATE_Launching            = 2,
//	MOVESTATE_Cycling              = 3,
//	MOVESTATE_Stopping             = 4,
//	MOVESTATE_MAX                  = 5
//};


// Enum WillowGame.WillowItemTypes.EFlashCardIndex
//enum class EFlashCardIndex : uint8_t
//{
//	FCI_None                       = 0,
//	FCI_Weapon                     = 1,
//	FCI_Shield                     = 2,
//	FCI_GrenadeMod                 = 3,
//	FCI_ClassMod                   = 4,
//	FCI_Item                       = 5,
//	FCI_Blank                      = 6,
//	FCI_Artifact                   = 7,
//	FCI_MissionItem                = 8,
//	FCI_MAX                        = 9
//};


// Enum WillowGame.WillowAutoTestManager.BACK_MENU_TYPE
//enum class EBACK_MENU_TYPE : uint8_t
//{
//	BACK_LOGS                      = 0,
//	BACK_MAP                       = 1,
//	BACK_INVENTORY                 = 2,
//	BACK_SKILLS                    = 3,
//	BACK_CHALLENGES                = 4,
//	BACK_MENU                      = 5,
//	BACK_MAX                       = 6
//};


// Enum WillowGame.WillowAwarenessZoneDefinition.EProvocationState
//enum class EProvocationState : uint8_t
//{
//	PROVOC_Normal                  = 0,
//	PROVOC_Warning                 = 1,
//	PROVOC_ImminentThreat          = 2,
//	PROVOC_MAX                     = 3
//};


// Enum WillowGame.WillowWeapon.EWeaponAnimation
//enum class EWeaponAnimation : uint8_t
//{
//	WEAPON_ANIM_Weapon             = 0,
//	WEAPON_ANIM_Arm                = 1,
//	WEAPON_ANIM_MAX                = 2
//};


// Enum WillowGame.WillowWeapon.EWeaponSpinState
//enum class EWeaponSpinState : uint8_t
//{
//	SPIN_STATE_None                = 0,
//	SPIN_STATE_SpinningUp          = 1,
//	SPIN_STATE_FullySpunUp         = 2,
//	SPIN_STATE_MAX                 = 3
//};


// Enum WillowGame.WillowWeapon.EWeaponReloadState
//enum class EWeaponReloadState : uint8_t
//{
//	RELOADSTATE_None               = 0,
//	RELOADSTATE_Reloading          = 1,
//	RELOADSTATE_Aborted            = 2,
//	RELOADSTATE_MAX                = 3
//};


// Enum WillowGame.WillowWeapon.EZoomState
//enum class EZoomState : uint8_t
//{
//	ZST_NotZoomed                  = 0,
//	ZST_ZoomingIn                  = 1,
//	ZST_Zoomed                     = 2,
//	ZST_ZoomingOut                 = 3,
//	ZST_MAX                        = 4
//};


// Enum WillowGame.WillowWeapon.EWeaponAnimPutDownState
//enum class EWeaponAnimPutDownState : uint8_t
//{
//	WAPDS_None                     = 0,
//	WAPDS_PutDown                  = 1,
//	WAPDS_PutDownSwap              = 2,
//	WAPDS_PutDownInterrupted       = 3,
//	WAPDS_MAX                      = 4
//};


// Enum WillowGame.WillowNavigationHandle.EFlightMode
//enum class EWillowNavigationHandle_EFlightMode : uint8_t
//{
//	FlightMode_None                = 0,
//	FlightMode_Flying              = 1,
//	FlightMode_Stuck               = 2,
//	FlightMode_Landing             = 3,
//	FlightMode_Walking             = 4,
//	FlightMode_MAX                 = 5
//};


// Enum WillowGame.WillowNavigationHandle.PathFixMode
//enum class EPathFixMode : uint8_t
//{
//	PathFix_None                   = 0,
//	PathFix_Waiting                = 1,
//	PathFix_Moving                 = 2,
//	PathFix_Lerping                = 3,
//	PathFix_Failed                 = 4,
//	PathFix_MAX                    = 5
//};


// Enum WillowGame.WillowDamageArea.ECollisionPrimitive
//enum class ECollisionPrimitive : uint8_t
//{
//	CP_StaticMesh                  = 0,
//	CP_Cylinder                    = 1,
//	CP_Sphere                      = 2,
//	CP_MAX                         = 3
//};


// Enum WillowGame.WillowDialogAct_MissionSwitch.EMissionTrackedState
//enum class EMissionTrackedState : uint8_t
//{
//	MISSION_TRACKED_Either         = 0,
//	MISSION_TRACKED_Tracked        = 1,
//	MISSION_TRACKED_Untracked      = 2,
//	MISSION_TRACKED_MAX            = 3
//};


// Enum WillowGame.WillowDialogAct_RandomBranch.ERandSeqType
//enum class ERandSeqType : uint8_t
//{
//	RST_Random                     = 0,
//	RST_Sequential                 = 1,
//	RST_Shuffle                    = 2,
//	RST_MAX                        = 3
//};


// Enum WillowGame.WillowDialogNameTag.EchoPortraitType
//enum class EchoPortraitType : uint8_t
//{
//	ECHO_PORTRAIT_Scaleform        = 0,
//	ECHO_PORTRAIT_Video            = 1,
//	ECHO_PORTRAIT_MAX              = 2
//};


// Enum WillowGame.WillowElevator.ElevatorButtonUsage
//enum class ElevatorButtonUsage : uint8_t
//{
//	EBU_Cycle                      = 0,
//	EBU_Call                       = 1,
//	EBU_Previous                   = 2,
//	EBU_Next                       = 3,
//	EBU_MAX                        = 4
//};


// Enum WillowGame.WillowElevatorButton.EElevButtonState
//enum class EElevButtonState : uint8_t
//{
//	BS_Enabled                     = 0,
//	BS_Disabled                    = 1,
//	BS_InUse                       = 2,
//	BS_MAX                         = 3
//};


// Enum WillowGame.WillowGameEngine.ELevelChangeState
//enum class ELevelChangeState : uint8_t
//{
//	LCS_None                       = 0,
//	LCS_SyncingCommit              = 1,
//	LCS_SyncingUnPause             = 2,
//	LCS_MAX                        = 3
//};


// Enum WillowGame.WillowGameMessage.EWillowGameMessage
//enum class EWillowGameMessage : uint8_t
//{
//	WGM_PlayerEnteredGame          = 0,
//	WGM_PlayerLeftGame             = 1,
//	WGM_CreaturesGrowStronger      = 2,
//	WGM_CreaturesWeaken            = 3,
//	WGM_MAX                        = 4
//};


// Enum WillowGame.WillowGameViewportClient.EDeviceSelectionState
//enum class EDeviceSelectionState : uint8_t
//{
//	EDSS_None                      = 0,
//	EDSS_Pending                   = 1,
//	EDSS_Succeeded                 = 2,
//	EDSS_Failed                    = 3,
//	EDSS_MAX                       = 4
//};


// Enum WillowGame.WillowGFxColiseumOverlayMovie.EColiseumLatentScreen
//enum class EColiseumLatentScreen : uint8_t
//{
//	ECLS_RoundDefeated             = 0,
//	ECLS_RoundSurvived             = 1,
//	ECLS_Certificate               = 2,
//	ECLS_MAX                       = 3
//};


// Enum WillowGame.WillowGFxMoviePressStart.EEggCodeKey
//enum class EEggCodeKey : uint8_t
//{
//	EGG_None                       = 0,
//	EGG_Up                         = 1,
//	EGG_Down                       = 2,
//	EGG_Left                       = 3,
//	EGG_Right                      = 4,
//	EGG_B                          = 5,
//	EGG_A                          = 6,
//	EGG_MAX                        = 7
//};


// Enum WillowGame.WillowGFxMoviePressStart.EStartupStep
//enum class EStartupStep : uint8_t
//{
//	STARTUP_NotStarted             = 0,
//	STARTUP_DlcEnumeration         = 1,
//	STARTUP_PatcherDownload        = 2,
//	STARTUP_SparkAuthentication    = 3,
//	STARTUP_DeviceSelection        = 4,
//	STARTUP_CreateSession          = 5,
//	STARTUP_Complete               = 6,
//	STARTUP_MAX                    = 7
//};


// Enum WillowGame.WillowHUDGFxMovie.EAmmoBar
//enum class EAmmoBar : uint8_t
//{
//	EAB_Default                    = 0,
//	EAB_DualWieldLeft              = 1,
//	EAB_DualWieldRight             = 2,
//	EAB_MAX                        = 3
//};


// Enum WillowGame.WillowMind.AIWeaponState
//enum class EAIWeaponState : uint8_t
//{
//	AIWeaponState_Firing           = 0,
//	AIWeaponState_NotFiring        = 1,
//	AIWeaponState_FiringPaused     = 2,
//	AIWeaponState_MAX              = 3
//};


// Enum WillowGame.WillowMind.EScriptFocus
//enum class EScriptFocus : uint8_t
//{
//	ESF_Path                       = 0,
//	ESF_Target                     = 1,
//	ESF_MAX                        = 2
//};


// Enum WillowGame.WillowPlayerInput.EButtonState
//enum class EButtonState : uint8_t
//{
//	BUTTON_STATE_Pressed           = 0,
//	BUTTON_STATE_Held              = 1,
//	BUTTON_STATE_Released          = 2,
//	BUTTON_STATE_Cleared           = 3,
//	BUTTON_STATE_MAX               = 4
//};


// Enum WillowGame.WillowPlayerPawn.ERegionList
//enum class ERegionList : uint8_t
//{
//	ERL_Firestone                  = 0,
//	ERL_NewHaven                   = 1,
//	ERL_MAX                        = 2
//};


// Enum WillowGame.WillowPlayerPawn.EInjuredPreDeathState
//enum class EInjuredPreDeathState : uint8_t
//{
//	INJUREDPREDEATH_None           = 0,
//	INJUREDPREDEATH_Start          = 1,
//	INJUREDPREDEATH_Stop           = 2,
//	INJUREDPREDEATH_MAX            = 3
//};


// Enum WillowGame.WillowPlayerPawnDataManager.DataRequestType
//enum class EDataRequestType : uint8_t
//{
//	DRT_PlayerPawn                 = 0,
//	DRT_SkillTreeDef               = 1,
//	DRT_VehicleDef                 = 2,
//	DRT_MAX                        = 3
//};


// Enum WillowGame.WillowPopulationPoint.EStretchyType
//enum class EStretchyType : uint8_t
//{
//	Stretchy_Linear                = 0,
//	Stretchy_Parabola              = 1,
//	Stretchy_MAX                   = 2
//};


// Enum WillowGame.WillowSeqAct_AICombatVolume.ECombatVolumeOption
//enum class ECombatVolumeOption : uint8_t
//{
//	ECVO_Set                       = 0,
//	ECVO_Clear                     = 1,
//	ECVO_MAX                       = 2
//};


// Enum WillowGame.WillowSeqAct_AIScriptedHold.EScriptedHoldOption
//enum class EScriptedHoldOption : uint8_t
//{
//	ScriptedHold_Hold              = 0,
//	ScriptedHold_Release           = 1,
//	ScriptedHold_MAX               = 2
//};


// Enum WillowGame.WillowSeqAct_KillPawnBasedOnAllegiance.EAllegianceRelationship
//enum class EAllegianceRelationship : uint8_t
//{
//	ALLEG_Enemy                    = 0,
//	ALLEG_Friendly                 = 1,
//	ALLEG_JustThisAllegiance       = 2,
//	ALLEG_MAX                      = 3
//};


// Enum WillowGame.WillowSeqAct_PlayArmAnimation.EAnimationType
//enum class EAnimationType : uint8_t
//{
//	AT_Equip                       = 0,
//	AT_PutDown                     = 1,
//	AT_MAX                         = 2
//};


// Enum WillowGame.WillowSkelControl_RotationRateBySpeed.ESpeedComponent
//enum class ESpeedComponent : uint8_t
//{
//	ESC_Forward                    = 0,
//	ESC_Strafe                     = 1,
//	ESC_Horizontal                 = 2,
//	ESC_Vertical                   = 3,
//	ESC_Full                       = 4,
//	ESC_MAX                        = 5
//};


// Enum WillowGame.WillowStaggerAnimNodeBlend.EReferencePointType
//enum class EReferencePointType : uint8_t
//{
//	REFPOINT_TYPE_Bone             = 0,
//	REFPOINT_TYPE_Socket           = 1,
//	REFPOINT_TYPE_MAX              = 2
//};


// Enum WillowGame.WillowTI_PrioritizeHealth.EHealthPriority
//enum class EHealthPriority : uint8_t
//{
//	HealthPriority_PrioritizeWeak  = 0,
//	HealthPriority_PrioritizeHealthy = 1,
//	HealthPriority_MAX             = 2
//};


// Enum WillowGame.WillowUIInteraction.EAttributeDebugSort
//enum class EAttributeDebugSort : uint8_t
//{
//	ATTDEBUGSORT_NameUp            = 0,
//	ATTDEBUGSORT_NameDn            = 1,
//	ATTDEBUGSORT_MAX               = 2
//};


// Enum WillowGame.WillowUIInteraction.EFontSize
//enum class EFontSize : uint8_t
//{
//	FONT_Medium                    = 0,
//	FONT_Tiny                      = 1,
//	FONT_Small                     = 2,
//	FONT_Large                     = 3,
//	FONT_MAX                       = 4
//};


// Enum WillowGame.WillowUIInteraction.ETextHAlignment
//enum class ETextHAlignment : uint8_t
//{
//	HALIGN_FixedPos                = 0,
//	HALIGN_Left                    = 1,
//	HALIGN_Center                  = 2,
//	HALIGN_MAX                     = 3
//};


// Enum WillowGame.WillowUIInteraction.EItemTypeForUI
//enum class EItemTypeForUI : uint8_t
//{
//	ITEMUI_Armor                   = 0,
//	ITEMUI_Item                    = 1,
//	ITEMUI_Ammo                    = 2,
//	ITEMUI_MAX                     = 3
//};


// Enum WillowGame.WillowUIInteraction.ETextVAlignment
//enum class ETextVAlignment : uint8_t
//{
//	VALIGN_FixedPos                = 0,
//	VALIGN_Center                  = 1,
//	VALIGN_Bottom                  = 2,
//	VALIGN_MAX                     = 3
//};


// Enum WillowGame.WillowUIInteraction.EMemoryDetailsSortStyle
//enum class EMemoryDetailsSortStyle : uint8_t
//{
//	MEMDETAILSORT_ResourceNameAToZ = 0,
//	MEMDETAILSORT_ResourceNameZToA = 1,
//	MEMDETAILSORT_SizeSmallToLarge = 2,
//	MEMDETAILSORT_SizeLargeToSmall = 3,
//	MEMDETAILSORT_CountHighToLow   = 4,
//	MEMDETAILSORT_MAX              = 5
//};


// Enum WillowGame.WillowUIInteraction.ENetworkActorChannelSortStyle
//enum class ENetworkActorChannelSortStyle : uint8_t
//{
//	NETACTORSORT_ActorNameAToZ     = 0,
//	NETACTORSORT_ActornameZToA     = 1,
//	NETACTORSORT_CountHighToLow    = 2,
//	NETACTORSORT_CountLowToHigh    = 3,
//	NETACTORSORT_MAX               = 4
//};


// Enum WillowGame.WillowUIInteraction.EGearBuilderSortMode
//enum class EGearBuilderSortMode : uint8_t
//{
//	GBSM_None                      = 0,
//	GBSM_WeightHighToLow           = 1,
//	GBSM_WeightLowToHigh           = 2,
//	GBSM_Invalid                   = 3,
//	GBSM_MAX                       = 4
//};


// Enum WillowGame.WillowVehicleBase.SightOriginOption
//enum class ESightOriginOption : uint8_t
//{
//	SIGHTORIGIN_LocationPlusOffset = 0,
//	SIGHTORIGIN_Socket             = 1,
//	SIGHTORIGIN_MAX                = 2
//};


// Enum WillowGame.WillowVehicleControlDefinition.EVehCamera
//enum class EVehCamera : uint8_t
//{
//	EVC_Free                       = 0,
//	EVC_Constrained                = 1,
//	EVC_FollowsSteering            = 2,
//	EVC_MAX                        = 3
//};


// Enum WillowGame.WillowVehicleControlDefinition.EVehSteering
//enum class EVehSteering : uint8_t
//{
//	EVS_VehicleRelative            = 0,
//	EVS_CameraRelative             = 1,
//	EVS_FollowsCamera              = 2,
//	EVS_MAX                        = 3
//};


// Enum WillowGame.WillowVehicle.EVehicleDeathStatus
//enum class EVehicleDeathStatus : uint8_t
//{
//	VEHDEATH_Alive                 = 0,
//	VEHDEATH_Instant               = 1,
//	VEHDEATH_Explode               = 2,
//	VEHDEATH_DeRez                 = 3,
//	VEHDEATH_MAX                   = 4
//};


// Enum WillowGame.WillowVehicle.EVehicleFOVState
//enum class EVehicleFOVState : uint8_t
//{
//	VEHICLE_FOV_Default            = 0,
//	VEHICLE_FOV_AfterburnerOn      = 1,
//	VEHICLE_FOV_AfterburnerOff     = 2,
//	VEHICLE_FOV_MAX                = 3
//};


// Enum WillowGame.WillowVehicle_Tank.TankSensorType
//enum class ETankSensorType : uint8_t
//{
//	TST_Front                      = 0,
//	TST_Right                      = 1,
//	TST_Left                       = 2,
//	TST_Back                       = 3,
//	TST_MAX                        = 4
//};


// Enum WillowGame.WillowVersusDuelGlobals.EDuelMsg
//enum class EDuelMsg : uint8_t
//{
//	DMSG_DUELINGDISABLED           = 0,
//	DMSG_ALREADYDUELING            = 1,
//	DMSG_ALREADYCHALLENGED         = 2,
//	DMSG_DUELTIMEOUT               = 3,
//	DMSG_ISSUEDCHALLENGE           = 4,
//	DMSG_RECEIVEDCHALLENGE         = 5,
//	DMSG_ACCEPTEDCHALLENGE         = 6,
//	DMSG_DUELSTART                 = 7,
//	DMSG_ARENAWARNING              = 8,
//	DMSG_DUELDRAW                  = 9,
//	DMSG_DUELWIN                   = 10,
//	DMSG_NOTRIGHTNOW               = 11,
//	DMSG_MAX                       = 12
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WillowGame.ActionSkill.ActionSkillCustomEventReplicationData
// 0x000C
struct FActionSkillCustomEventReplicationData
{
	unsigned char                                      EventCountForReplication;                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0004(0x0008)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.MaterialEffectModifier
// 0x001C
struct FMaterialEffectModifier
{
	struct FName                                       EffectName;                                               // 0x0000(0x0008) (Edit)
	TArray<struct FAttributeScalarParam>               ScalarParams;                                             // 0x0008(0x000C) (Edit, NeedCtorLink)
	float                                              CachedValue;                                              // 0x0014(0x0004) (Edit)
	class UMaterialInstanceConstant*                   MaterialInstance;                                         // 0x0018(0x0004)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectModifierData
// 0x000C
struct FDOFEffectModifierData
{
	unsigned long                                      AutoRelcalculateFocusDistance : 1;                        // 0x0000(0x0004) (Edit)
	float                                              RecalculateFocusDistanceRate;                             // 0x0004(0x0004) (Edit)
	float                                              FocusDistanceLerpRate;                                    // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainOptions
// 0x0018
struct FPostProcessChainOptions
{
	TArray<struct FMaterialEffectModifier>             MaterialEffectModifiers;                                  // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FDOFEffectModifierData                      DOFEffectModifier;                                        // 0x000C(0x000C) (Edit)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessOverlay
// 0x010C
struct FPostProcessOverlay
{
	struct FName                                       OverlayName;                                              // 0x0000(0x0008) (Edit, Const)
	struct FPostProcessSettings                        DestPostProcessOverlay;                                   // 0x0008(0x00E8) (Edit, Const, NeedCtorLink)
	float                                              MinTransitionInDuration;                                  // 0x00F0(0x0004) (Edit, Const)
	float                                              MinTransitionHoldDuration;                                // 0x00F4(0x0004) (Edit, Const)
	float                                              MinTransitionOutDuration;                                 // 0x00F8(0x0004) (Edit, Const)
	float                                              MaxTransitionInDuration;                                  // 0x00FC(0x0004) (Edit, Const)
	float                                              MaxTransitionHoldDuration;                                // 0x0100(0x0004) (Edit, Const)
	float                                              MaxTransitionOutDuration;                                 // 0x0104(0x0004) (Edit, Const)
	unsigned long                                      ClearOverlayQueueAfterTransition : 1;                     // 0x0108(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeDefinitionDefault
// 0x0008
struct FAttributeDefinitionDefault
{
	class UAttributeDefinition*                        Attribute;                                                // 0x0000(0x0004) (Edit)
	float                                              DefaultValue;                                             // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeScalarParam
// 0x003C
struct FAttributeScalarParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	unsigned long                                      bVectorParam : 1;                                         // 0x0008(0x0004) (Edit)
	unsigned long                                      bClampInput : 1;                                          // 0x0008(0x0004) (Edit)
	struct FAttributeDefinitionDefault                 Input;                                                    // 0x000C(0x0008) (Edit)
	struct FAttributeDefinitionDefault                 MinInput;                                                 // 0x0014(0x0008) (Edit)
	struct FAttributeDefinitionDefault                 MaxInput;                                                 // 0x001C(0x0008) (Edit)
	struct FAttributeDefinitionDefault                 MinOutput;                                                // 0x0024(0x0008) (Edit)
	struct FAttributeDefinitionDefault                 MaxOutput;                                                // 0x002C(0x0008) (Edit)
	unsigned char                                      ScalarParamOperand;                                       // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              CurrentValue;                                             // 0x0038(0x0004)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleModifier
// 0x0010
struct FScreenParticleModifier
{
	TArray<struct FAttributeScalarParam>               ScalarParams;                                             // 0x0000(0x000C) (Edit, NeedCtorLink)
	float                                              CachedValue;                                              // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleScalarParamOverTime
// 0x0018
struct FScreenParticleScalarParamOverTime
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	float                                              TotalTime;                                                // 0x0008(0x0004) (Edit)
	float                                              StartValue;                                               // 0x000C(0x0004) (Edit)
	float                                              EndValue;                                                 // 0x0010(0x0004) (Edit)
	float                                              LastValue;                                                // 0x0014(0x0004) (Transient)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleVectorParamOverTime
// 0x0030
struct FScreenParticleVectorParamOverTime
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	float                                              TotalTime;                                                // 0x0008(0x0004) (Edit)
	struct FVector                                     VectorStartValue;                                         // 0x000C(0x000C) (Edit)
	struct FVector                                     VectorEndValue;                                           // 0x0018(0x000C) (Edit)
	struct FVector                                     LastValue;                                                // 0x0024(0x000C) (Transient)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleParamOverTime
// 0x0018
struct FScreenParticleParamOverTime
{
	TArray<struct FScreenParticleScalarParamOverTime>  ScalarParams;                                             // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FScreenParticleVectorParamOverTime>  VectorParams;                                             // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleInitParams
// 0x0054
struct FScreenParticleInitParams
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0004) (Edit)
	TArray<struct FScreenParticleModifier>             ScreenParticleModifiers;                                  // 0x0004(0x000C) (Edit, NeedCtorLink)
	class UMaterialInterface*                          TemplateScreenParticleMaterial;                           // 0x0010(0x0004) (Edit)
	struct FName                                       MatParamName;                                             // 0x0014(0x0008) (Edit)
	unsigned long                                      bHideWhenFinished : 1;                                    // 0x001C(0x0004) (Edit)
	struct FName                                       ParticleTag;                                              // 0x0020(0x0008) (Edit)
	struct FVector2D                                   ContentDims;                                              // 0x0028(0x0008) (Edit)
	float                                              ParticleDepth;                                            // 0x0030(0x0004) (Edit)
	unsigned char                                      ScalingMode;                                              // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FScreenParticleParamOverTime                StopParamsOT;                                             // 0x0038(0x0018) (Edit, NeedCtorLink)
	unsigned long                                      bOnlyOwnerSee : 1;                                        // 0x0050(0x0004)
};

// ScriptStruct WillowGame.AnemoneInfectionState.FDisplayTimer
// 0x0010
struct FFDisplayTimer
{
	unsigned long                                      bShowing : 1;                                             // 0x0000(0x0004)
	float                                              Timer;                                                    // 0x0004(0x0004)
	float                                              Speed;                                                    // 0x0008(0x0004)
	float                                              Value;                                                    // 0x000C(0x0004)
};

// ScriptStruct WillowGame.AssetLibraryManager.AssetLibConfig
// 0x0018
struct FAssetLibConfig
{
	int                                                SublibraryBits;                                           // 0x0000(0x0004)
	int                                                AssetBits;                                                // 0x0004(0x0004)
	struct FString                                     Desc;                                                     // 0x0008(0x000C) (NeedCtorLink)
	class UClass*                                      LibraryType;                                              // 0x0014(0x0004)
};

// ScriptStruct WillowGame.AssetLibraryManager.SKULibrarySet
// 0x0020
struct FSKULibrarySet
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     NameID;                                                   // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     LibrarySetPackage;                                        // 0x0010(0x000C) (NeedCtorLink)
	class UObject*                                     CachedDlcALDefRef;                                        // 0x001C(0x0004)
};

// ScriptStruct WillowGame.AssetLibraryManager.SKURuntimeLibrarySet
// 0x001C
struct FSKURuntimeLibrarySet
{
	int                                                Id;                                                       // 0x0000(0x0004)
	class UPackageAssetLibrary*                        Libraries[0x6];                                           // 0x0004(0x0004)
};

// ScriptStruct WillowGame.AttributePresentationDefinition.ModifierValuePresentationData
// 0x0010
struct FModifierValuePresentationData
{
	class UAttributePresentationDefinition*            AttributePresentation;                                    // 0x0000(0x0004) (AlwaysInit)
	class UAttributePresentationDefinition*            OptionalConstraintPresentation;                           // 0x0004(0x0004) (AlwaysInit)
	float                                              ModifierValue;                                            // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bShouldDisplay : 1;                                       // 0x000C(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.AttributePresentationDefinition.AttributePresentationValueRemappingData
// 0x0044
struct FAttributePresentationValueRemappingData
{
	unsigned long                                      bUseContextOverride : 1;                                  // 0x0000(0x0004) (Edit, Const)
	struct FAttributeInitializationData                InputValueMn;                                             // 0x0004(0x0010) (Edit, Const)
	struct FAttributeInitializationData                InputValueMx;                                             // 0x0014(0x0010) (Edit, Const)
	struct FAttributeInitializationData                OutputValueMn;                                            // 0x0024(0x0010) (Edit, Const)
	struct FAttributeInitializationData                OutputValueMx;                                            // 0x0034(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.WeaponStatusEffectAttributePresentationDefinition.AttributePresentationDamageTypeMapping
// 0x0008
struct FAttributePresentationDamageTypeMapping
{
	class UAttributePresentationDefinition*            Presentation;                                             // 0x0000(0x0004) (Edit, Const)
	class UDamageTypeDefinition*                       DamageType;                                               // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.GlobalsDefinition.StatusEffectTypeCommonProperties
// 0x000C
struct FStatusEffectTypeCommonProperties
{
	unsigned char                                      StatusEffectType;                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UAkEvent*                                    EffectStartAkEvent;                                       // 0x0004(0x0004) (Edit)
	class UAkEvent*                                    EffectStopAkEvent;                                        // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.KillSkillDuration
// 0x0008
struct FKillSkillDuration
{
	int                                                Players;                                                  // 0x0000(0x0004) (Edit, Const, EditConst)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowExperiencePipeline.DamageTypeExpModifier
// 0x000C
struct FDamageTypeExpModifier
{
	class UClass*                                      DamageSource;                                             // 0x0000(0x0004) (Edit)
	class UDamageTypeDefinition*                       TypeDefinition;                                           // 0x0004(0x0004) (Edit)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedExpScale
// 0x000C
struct FLevelBasedExpScale
{
	int                                                LevelDifference;                                          // 0x0000(0x0004) (Edit, Const, EditConst)
	float                                              HigherLevelEnemyExpScale;                                 // 0x0004(0x0004) (Edit)
	float                                              LowerLevelEnemyExpScale;                                  // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.ExpAwardWeight
// 0x000C
struct FExpAwardWeight
{
	int                                                Players;                                                  // 0x0000(0x0004) (Edit, Const, EditConst)
	float                                              KillerExpBonus;                                           // 0x0004(0x0004) (Edit, Const)
	float                                              ExpWeight;                                                // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.GlobalsDefinition.RarityLevelColor
// 0x000E
struct FRarityLevelColor
{
	int                                                MinLevel;                                                 // 0x0000(0x0004) (Edit)
	int                                                MaxLevel;                                                 // 0x0004(0x0004) (Edit)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (Edit)
	unsigned char                                      DropLifeSpanType;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      RarityRating;                                             // 0x000D(0x0001) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.PlayThroughData
// 0x0010
struct FPlayThroughData
{
	int                                                PlayThroughNumber;                                        // 0x0000(0x0004) (Edit, Const, EditConst)
	TArray<class UGameBalanceDefinition*>              BalanceDefinitions;                                       // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedDamageScale
// 0x000C
struct FLevelBasedDamageScale
{
	int                                                LevelDifference;                                          // 0x0000(0x0004) (Edit, Const, EditConst)
	float                                              HigherLevelAttackerDmgScale;                              // 0x0004(0x0004) (Edit)
	float                                              LowerLevelAttackerDmgScale;                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.AchievementUtility.AchievementUnlockData
// 0x0014
struct FAchievementUnlockData
{
	unsigned char                                      UnlockType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      Achievement;                                              // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FString                                     StringData;                                               // 0x0004(0x000C) (Edit, NeedCtorLink)
	int                                                IntData;                                                  // 0x0010(0x0004) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.SlaughterMissionChain
// 0x000C
struct FSlaughterMissionChain
{
	TArray<class UMissionDefinition*>                  SlaughterMissions;                                        // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.GlobalsDefinition.InputContextData
// 0x000C
struct FInputContextData
{
	struct FName                                       ContextName;                                              // 0x0000(0x0008) (Edit)
	class UInputContextDefinition*                     Definition;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedStatusEffectChanceScale
// 0x000C
struct FLevelBasedStatusEffectChanceScale
{
	int                                                LevelDifference;                                          // 0x0000(0x0004) (Edit, Const, EditConst)
	float                                              HigherLevelChanceScale;                                   // 0x0004(0x0004) (Edit)
	float                                              LowerLevelChanceScale;                                    // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.BalanceModifierDefinition.BalanceModification
// 0x0090
struct FBalanceModification
{
	unsigned char                                      MinEffectiveLevel;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EnemyHealthMultiplier;                                    // 0x0004(0x0004) (Edit)
	float                                              BadassEnemyHealthMultiplier;                              // 0x0008(0x0004) (Edit)
	float                                              EnemyShieldStrengthMultiplier;                            // 0x000C(0x0004) (Edit)
	float                                              BadassEnemyShieldStrengthMultiplier;                      // 0x0010(0x0004) (Edit)
	float                                              EnemyDamageMultiplier;                                    // 0x0014(0x0004) (Edit)
	float                                              BadassEnemyDamageMultiplier;                              // 0x0018(0x0004) (Edit)
	float                                              XPGainedFromCombatMultiplier;                             // 0x001C(0x0004) (Edit)
	float                                              XPGainedFromQuestsMultiplier;                             // 0x0020(0x0004) (Edit)
	float                                              BadassRankGainMultiplier;                                 // 0x0024(0x0004) (Edit)
	float                                              AmplifiedDamageMultiplier;                                // 0x0028(0x0004) (Edit)
	float                                              PlayerVehicleWeaponDamageMultiplier;                      // 0x002C(0x0004) (Edit)
	TArray<struct FAttributeEffectData>                AttributeEffectsForSpawnedEnemies;                        // 0x0030(0x000C) (Edit, NeedCtorLink)
	TArray<struct FAttributeEffectData>                AttributeEffectsForPlayers;                               // 0x003C(0x000C) (Edit, NeedCtorLink)
	struct FAttributeInitializationData                AmmoDropsPerPlayerMultiplier;                             // 0x0048(0x0010) (Edit)
	struct FAttributeInitializationData                GearDrops_CommonWeightModifier_PT3_BaseValueOverride;     // 0x0058(0x0010) (Edit)
	struct FAttributeInitializationData                ChestItemPool_Weight_2_Uncommon_PT3_Multiplier;           // 0x0068(0x0010) (Edit, Const)
	TArray<struct FLevelBasedStatusEffectChanceScale>  StatusEffectChanceScales;                                 // 0x0078(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FLevelBasedDamageScale>              AIDamageScaleByLevelDifference;                           // 0x0084(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.BalanceModifierDefinition.BlackMarketPostLaunchUpgradeData
// 0x0004
struct FBlackMarketPostLaunchUpgradeData
{
	int                                                EridiumCostForUpgrade;                                    // 0x0000(0x0004) (Edit)
};

// ScriptStruct WillowGame.BalanceModifierDefinition.MapSpecificBalanceModificationList
// 0x0014
struct FMapSpecificBalanceModificationList
{
	struct FName                                       MapName;                                                  // 0x0000(0x0008) (Edit)
	TArray<class UAIPawnBalanceModifierDefinition*>    AIPawnBalanceModifiers;                                   // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.IMissionDirector.MissionDirectorData
// 0x0009
struct FMissionDirectorData
{
	class UMissionDefinition*                          MissionDefinition;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bBeginsMission : 1;                                       // 0x0004(0x0004) (Edit)
	unsigned long                                      bEndsMission : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned char                                      BranchEnding;                                             // 0x0008(0x0001) (Edit)
};

// ScriptStruct WillowGame.Behavior_AIThrowProjectileAtTarget.AIThrowProjectileBehaviorSequenceStateData
// 0x000C
struct FAIThrowProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.Behavior_AIThrowProjectileAtTarget.TrajectoryData
// 0x0020
struct FTrajectoryData
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit)
	float                                              AnglePct;                                                 // 0x0004(0x0004) (Edit)
	float                                              Angle;                                                    // 0x0008(0x0004)
	float                                              Error;                                                    // 0x000C(0x0004) (Edit)
	struct FVector                                     Offset;                                                   // 0x0010(0x000C) (Edit)
	float                                              PredictDistMax;                                           // 0x001C(0x0004) (Edit)
};

// ScriptStruct WillowGame.Behavior_Conditional.BehaviorCondition
// 0x0014
struct FBehaviorCondition
{
	int                                                ConditionId;                                              // 0x0000(0x0004) (Const)
	class UExpressionEvaluator*                        Condition;                                                // 0x0004(0x0004) (Edit, Const, EditInline)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0008(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.Behavior_RandomlySelectBehaviors.BehaviorsSelectionData
// 0x001C
struct FBehaviorsSelectionData
{
	struct FAttributeInitializationData                Weight;                                                   // 0x0000(0x0010) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0010(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.Behavior_SpawnProjectile.ProjectileBehaviorSequenceStateData
// 0x000C
struct UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.BehaviorSequenceEnableByMission.MissionStateSelectionData
// 0x0004
struct FMissionStateSelectionData
{
	unsigned long                                      bNotStarted : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bRequiredObjectivesComplete : 1;                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bReadyToTurnIn : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned long                                      bComplete : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      bFailed : 1;                                              // 0x0000(0x0004) (Edit)
};

// ScriptStruct WillowGame.BehaviorSequenceEnableByMission.MissionObjectiveStateSelectionData
// 0x0004
struct FMissionObjectiveStateSelectionData
{
	unsigned long                                      bNotStarted : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bComplete : 1;                                            // 0x0000(0x0004) (Edit)
};

// ScriptStruct WillowGame.BlackMarketDefinition.BlackMarketUpgradeLevelData
// 0x0008
struct FBlackMarketUpgradeLevelData
{
	class UBlackMarketUpgradeDefinition*               UpgradeDefinition;                                        // 0x0000(0x0004) (Edit)
	int                                                MaxUpgradeLevel;                                          // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.BodyClassDeathDefinition.TechDeathData
// 0x0010 (0x0008 - 0x0018)
struct FTechDeathData : public FSpecializedBehaviorEvent
{
	TArray<class UDamageTypeDefinition*>               DamageTypeTriggers;                                       // 0x0008(0x000C) (Edit, Const, NeedCtorLink)
	class USpecialMoveDefinition*                      DeathAnimation;                                           // 0x0014(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.RtpcParameterValue
// 0x0008
struct FRtpcParameterValue
{
	class UAkRtpc*                                     AkRtpc;                                                   // 0x0000(0x0004) (Edit)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseParameters
// 0x004C
struct FImpactResponseParameters
{
	TArray<struct FParticleSysParam>                   ParticleParameters;                                       // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FFontParameterValue>                 FontParameterValues;                                      // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FScalarParameterValue>               ScalarParameterValues;                                    // 0x0018(0x000C) (Edit, NeedCtorLink)
	TArray<struct FTextureParameterValue>              TextureParameterValues;                                   // 0x0024(0x000C) (Edit, NeedCtorLink)
	TArray<struct FVectorParameterValue>               VectorParameterValues;                                    // 0x0030(0x000C) (Edit, NeedCtorLink)
	TArray<struct FRtpcParameterValue>                 RtpcParameterValues;                                      // 0x003C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bNoSound : 1;                                             // 0x0048(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseEffect
// 0x0094
struct FImpactResponseEffect
{
	unsigned long                                      bCensorThisEffect : 1;                                    // 0x0000(0x0004) (Edit, Const)
	class UWillowImpactDefinition*                     CensoredEffectAlternative;                                // 0x0004(0x0004) (Edit, Const)
	float                                              DamageModifierPercent;                                    // 0x0008(0x0004) (Edit, Const)
	class UAkEvent*                                    ImpactEvent;                                              // 0x000C(0x0004) (Edit, Const)
	float                                              AINoiseLevel;                                             // 0x0010(0x0004) (Edit, Const)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x0014(0x0004) (Edit, Const)
	unsigned long                                      bAttachParticleToHitActor : 1;                            // 0x0018(0x0004) (Edit, Const)
	unsigned long                                      bHideEffectFromHitActor : 1;                              // 0x0018(0x0004) (Edit)
	float                                              MaxEffectDistance;                                        // 0x001C(0x0004) (Edit, Const)
	TArray<class UMaterialInterface*>                  DecalMaterials;                                           // 0x0020(0x000C) (Edit, Const, NeedCtorLink)
	float                                              DecalWidth;                                               // 0x002C(0x0004) (Edit, Const)
	float                                              DecalHeight;                                              // 0x0030(0x0004) (Edit, Const)
	float                                              DecalMinScale;                                            // 0x0034(0x0004) (Edit, Const)
	float                                              DecalMaxScale;                                            // 0x0038(0x0004) (Edit, Const)
	float                                              DecalDepth;                                               // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      DecalRandomRotation : 1;                                  // 0x0040(0x0004) (Edit, Const)
	unsigned long                                      DecalCreateNewMaterialInstanceConstant : 1;               // 0x0040(0x0004) (Edit, Const)
	class UClass*                                      ImpactFlashLightClass;                                    // 0x0044(0x0004) (Edit, Const)
	struct FImpactResponseParameters                   EffectParameters;                                         // 0x0048(0x004C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseData
// 0x0098
struct FImpactResponseData
{
	class UWillowImpactDefinition*                     ImpactType;                                               // 0x0000(0x0004) (Edit, Const)
	struct FImpactResponseEffect                       ResponseEffect;                                           // 0x0004(0x0094) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.WheelSlipModifierData
// 0x0008
struct FWheelSlipModifierData
{
	float                                              LongSlipFactor;                                           // 0x0000(0x0004) (Edit, Const)
	float                                              LatSlipFactor;                                            // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.DamageReactionData
// 0x0024 (0x0008 - 0x002C)
struct FDamageReactionData : public FSpecializedBehaviorEvent
{
	TArray<struct FGoreTriggerData>                    DamageTriggers;                                           // 0x0008(0x000C) (Edit, NeedCtorLink)
	float                                              PercentOfHealthTrigger;                                   // 0x0014(0x0004) (Edit)
	class USpecialMoveDefinition*                      DamageSpecialMove;                                        // 0x0018(0x0004) (Edit)
	TArray<class UBehaviorBase*>                       ReactionBehaviors;                                        // 0x001C(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	unsigned long                                      bDamageThreshold : 1;                                     // 0x0028(0x0004) (Edit)
	unsigned long                                      bRepeatableEvent : 1;                                     // 0x0028(0x0004) (Edit)
	unsigned long                                      bCensored : 1;                                            // 0x0028(0x0004) (Edit)
	unsigned long                                      bOnlyTriggeredOnOwnerDeath : 1;                           // 0x0028(0x0004) (Edit)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.GoreTriggerData
// 0x000C
struct FGoreTriggerData
{
	class UDamageTypeDefinition*                       DamageTypeTrigger;                                        // 0x0000(0x0004) (Edit)
	class UClass*                                      DamageSourceTrigger;                                      // 0x0004(0x0004) (Edit)
	float                                              HealthPctDamageThreshold;                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.BodyClassDefinition.ExtraWeaponSlot
// 0x0024
struct FExtraWeaponSlot
{
	struct FName                                       Socket;                                                   // 0x0000(0x0008) (Edit)
	unsigned long                                      bShowWeaponMesh : 1;                                      // 0x0008(0x0004) (Edit)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x000C(0x0004) (ExportObject, Transient, Component, EditInline)
	class UParticleSystemComponent*                    MuzzleFlash;                                              // 0x0010(0x0004) (ExportObject, Transient, Component, EditInline)
	TArray<class UParticleSystemComponent*>            AltMuzzleFlashes;                                         // 0x0014(0x000C) (ExportObject, Transient, Component, NeedCtorLink, EditInline)
	class UWillowPointLight*                           MuzzleFlashLight;                                         // 0x0020(0x0004) (ExportObject, Transient, Component, EditInline)
};

// ScriptStruct WillowGame.BodyClassDefinition.PainDialogLine
// 0x0028
struct FPainDialogLine
{
	class UGearboxDialogEventTag*                      DET_Pain;                                                 // 0x0000(0x0004) (Edit, Const)
	float                                              DamageThresholdPct;                                       // 0x0004(0x0004) (Edit, Const)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, Const)
	class UAkEvent*                                    AkEvent;                                                  // 0x000C(0x0004) (Edit, Const)
	unsigned long                                      bDeathSound : 1;                                          // 0x0010(0x0004) (Edit, Const)
	unsigned long                                      bCriticalHitSound : 1;                                    // 0x0010(0x0004) (Edit, Const)
	unsigned long                                      bRanOverSound : 1;                                        // 0x0010(0x0004) (Edit, Const)
	unsigned long                                      bGoreTechDeathSound : 1;                                  // 0x0010(0x0004) (Edit, Const)
	unsigned char                                      FlinchAnimType;                                           // 0x0014(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              FlinchImpulseStrength;                                    // 0x0018(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       PainBehaviors;                                            // 0x001C(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.BodyClassDefinition.CustomCringeData
// 0x0014
struct FCustomCringeData
{
	unsigned long                                      bDOT : 1;                                                 // 0x0000(0x0004) (Edit, Const)
	unsigned char                                      DamageType;                                               // 0x0004(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class USpecialMove_Cringe*>                 Cringes;                                                  // 0x0008(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.BodyClassDefinition.BreathingLoopInfo
// 0x000C
struct FBreathingLoopInfo
{
	class UExpressionEvaluator*                        Condition;                                                // 0x0000(0x0004) (Edit, Const, EditInline)
	class UAkEvent*                                    StartAkEvent;                                             // 0x0004(0x0004) (Edit, Const)
	class UAkEvent*                                    StopAkEvent;                                              // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.InjuredLoopOverride
// 0x0008
struct FInjuredLoopOverride
{
	class UWillowDialogNameTag*                        NameTag;                                                  // 0x0000(0x0004) (Edit, Const)
	class UAkEvent*                                    StartAkEvent;                                             // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.VehicleCrewMappingStruct
// 0x000C
struct FVehicleCrewMappingStruct
{
	struct FName                                       VehicleArchetypeName;                                     // 0x0000(0x0008) (Edit, Const)
	class UAnimSet*                                    AnimSet;                                                  // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.ConditionalAnimData
// 0x0008
struct FConditionalAnimData
{
	class UExpressionEvaluator*                        Expression;                                               // 0x0000(0x0004) (Edit, Const, EditInline)
	class USpecialMoveDefinition*                      SpecialMove;                                              // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionData
// 0x0014
struct FBodyWeaponActionData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UExpressionEvaluator*                        Expression;                                               // 0x0004(0x0004) (Edit, Const, EditInline)
	TArray<struct FConditionalAnimData>                Animations;                                               // 0x0008(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionPostureData
// 0x0010
struct FBodyWeaponActionPostureData
{
	unsigned char                                      Posture;                                                  // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FBodyWeaponActionData>               Actions;                                                  // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyHandIKHoldData
// 0x0024
struct FBodyHandIKHoldData
{
	struct FVector                                     JointLocation;                                            // 0x0000(0x000C) (Edit, Const)
	struct FVector                                     HandLocation;                                             // 0x000C(0x000C) (Edit, Const)
	struct FRotator                                    HandRotation;                                             // 0x0018(0x000C) (Edit, Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.CustomBodyHandIKHoldData
// 0x002C
struct FCustomBodyHandIKHoldData
{
	struct FName                                       HoldName;                                                 // 0x0000(0x0008) (Edit, Const)
	struct FBodyHandIKHoldData                         IKData;                                                   // 0x0008(0x0024) (Edit, Const)
};

// ScriptStruct WillowGame.WillowDeclarations.CellInfo
// 0x0020
struct FCellInfo
{
	struct FVector                                     AbsolutePosition;                                         // 0x0000(0x000C)
	float                                              Width;                                                    // 0x000C(0x0004)
	float                                              Height;                                                   // 0x0010(0x0004)
	struct FString                                     CellName;                                                 // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.CellsNavigator.MoveToCellData
// 0x000C
struct FMoveToCellData
{
	int                                                IndexInCellsList;                                         // 0x0000(0x0004)
	float                                              DistanceFromCurrentCell;                                  // 0x0004(0x0004)
	float                                              CosAngle;                                                 // 0x0008(0x0004)
};

// ScriptStruct WillowGame.ChallengeDefinition.ConditionLevel
// 0x0040
struct FConditionLevel
{
	TArray<class UChallengeConditionDefinition*>       ConditionDefinitions;                                     // 0x0000(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	TArray<float>                                      ProgressNotificationOverride;                             // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FAttributeEffectData>                CompletedAttributeEffects;                                // 0x0018(0x000C) (Edit, Const, NeedCtorLink)
	struct FAttributeInitializationData                BadassPointReward;                                        // 0x0024(0x0010) (Edit, Const)
	class UItemPoolDefinition*                         RewardItemPool;                                           // 0x0034(0x0004) (Edit, Const)
	struct FName                                       RewardTextKey;                                            // 0x0038(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.ChallengeDefinition.ChallengeData
// 0x0008
struct FChallengeData
{
	class AWillowPlayerController*                     PCOwner;                                                  // 0x0000(0x0004)
	class UChallengeDefinition*                        ChallengeDefinition;                                      // 0x0004(0x0004)
};

// ScriptStruct WillowGame.CombatMusicManager.TargetedPlayerState
// 0x0014
struct FTargetedPlayerState
{
	class AWillowMind*                                 Enemy;                                                    // 0x0000(0x0004)
	class AActor*                                      Player;                                                   // 0x0004(0x0004)
	float                                              InitialThreat;                                            // 0x0008(0x0004)
	float                                              StoppedTargetingPlayerTime;                               // 0x000C(0x0004)
	unsigned long                                      bIsPlayerPet : 1;                                         // 0x0010(0x0004)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedScalarParameter
// 0x0020
struct FCoordinatedScalarParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	struct FInterpCurveFloat                           ParamValueOverTime;                                       // 0x0008(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      BoundsScale;                                              // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bConvertAxisToWorldSpace : 1;                             // 0x001C(0x0004) (Edit)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedVectorParameter
// 0x0018
struct FCoordinatedVectorParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	struct FInterpCurveVector                          ParamValueOverTime;                                       // 0x0008(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedParticleSystemDefinition
// 0x003D
struct FCoordinatedParticleSystemDefinition
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0004) (Edit)
	struct FVector                                     LocationOffset;                                           // 0x0004(0x000C) (Edit)
	struct FRotator                                    RotationOffset;                                           // 0x0010(0x000C) (Edit)
	float                                              TriggerTime;                                              // 0x001C(0x0004) (Edit)
	float                                              ParticleScale;                                            // 0x0020(0x0004) (Edit)
	TArray<struct FCoordinatedScalarParameter>         Parameters;                                               // 0x0024(0x000C) (Edit, NeedCtorLink)
	TArray<struct FCoordinatedVectorParameter>         VectorParameters;                                         // 0x0030(0x000C) (Edit, NeedCtorLink)
	unsigned char                                      ScaleByObjectSize;                                        // 0x003C(0x0001) (Edit)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedAudioDefinition
// 0x001C
struct FCoordinatedAudioDefinition
{
	class UAkEvent*                                    TriggerEvent;                                             // 0x0000(0x0004) (Edit)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (Edit)
	class UAkRtpc*                                     RTPC;                                                     // 0x0008(0x0004) (Edit)
	struct FInterpCurveFloat                           RTPCOverTime;                                             // 0x000C(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.CurrencyListDefinition.CurrencyPresentation
// 0x0014
struct FCurrencyPresentation
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     WidgetFrame;                                              // 0x0004(0x000C) (Edit, NeedCtorLink)
	class USwfMovie*                                   WidgetClip;                                               // 0x0010(0x0004) (Edit)
};

// ScriptStruct WillowGame.DamageOverTimeManager.SourceObjectData
// 0x0068
struct FSourceObjectData
{
	int                                                UniqueId;                                                 // 0x0000(0x0004)
	class UObject*                                     SourceObject;                                             // 0x0004(0x0004)
	struct FVector                                     SourceLocation;                                           // 0x0008(0x000C)
	class AController*                                 InstigatedByController;                                   // 0x0014(0x0004)
	FScriptInterface                                   DamageContext;                                            // 0x0018(0x0008)
	float                                              StartDamageTime;                                          // 0x0020(0x0004)
	float                                              TimeElapsedSinceLastDamage;                               // 0x0024(0x0004)
	class UExplosionDefinition*                        ExplosionDef;                                             // 0x0028(0x0004)
	int                                                ExplosionScaleIndex;                                      // 0x002C(0x0004)
	float                                              InitialDamageRadius;                                      // 0x0030(0x0004)
	float                                              Damage;                                                   // 0x0034(0x0004)
	unsigned long                                      bFullDamage : 1;                                          // 0x0038(0x0004)
	float                                              Momentum;                                                 // 0x003C(0x0004)
	class UClass*                                      DamageSource;                                             // 0x0040(0x0004)
	class UDamageTypeDefinition*                       DamageTypeDef;                                            // 0x0044(0x0004)
	class UImpactDefinition*                           ImpactDefinition;                                         // 0x0048(0x0004)
	unsigned long                                      bCanDamageFriendlies : 1;                                 // 0x004C(0x0004)
	FScriptInterface                                   DamageCauser;                                             // 0x0050(0x0008)
	unsigned long                                      bSkipTraceTest : 1;                                       // 0x0058(0x0004)
	class UObject*                                     HitObject;                                                // 0x005C(0x0004)
	float                                              BarrelSourceTime;                                         // 0x0060(0x0004)
	float                                              PlantSourceTime;                                          // 0x0064(0x0004)
};

// ScriptStruct WillowGame.DamageOverTimeManager.DamageOnlyOnceData
// 0x0008
struct FDamageOnlyOnceData
{
	int                                                UniqueId;                                                 // 0x0000(0x0004)
	class AActor*                                      HurtActor;                                                // 0x0004(0x0004)
};

// ScriptStruct WillowGame.DamageTypeAttributeValueResolver.DamageTypeSelectorData
// 0x0018
struct FDamageTypeSelectorData
{
	struct FName                                       AssociatedDamageTypeName;                                 // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                           // 0x0008(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.DefinitionGlobalsDefinition.DefinitionIconDatum
// 0x000C
struct FDefinitionIconDatum
{
	struct FColor                                      DefColor;                                                 // 0x0000(0x0004) (Edit)
	class UTexture2D*                                  DefIcon;                                                  // 0x0004(0x0004) (Edit)
	class UClass*                                      DefClass;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.DLCLegacyPlayerClassIdentifierDefinition.LegacyCustomizationItemData
// 0x0014
struct FLegacyCustomizationItemData
{
	struct FString                                     ItemPoolDefPath;                                          // 0x0000(0x000C) (Edit, EditConst, NeedCtorLink)
	int                                                ItemPoolKey;                                              // 0x000C(0x0004) (Edit, EditConst)
	class UItemPoolDefinition*                         CustomizationItemPool;                                    // 0x0010(0x0004) (Edit, EditConst)
};

// ScriptStruct WillowGame.DlcTmsHolder.PremiumCustomizationInfo
// 0x0018
struct FPremiumCustomizationInfo
{
	int                                                OfferId;                                                  // 0x0000(0x0004)
	int                                                PackageId;                                                // 0x0004(0x0004)
	int                                                ContentId;                                                // 0x0008(0x0004)
	struct FString                                     PS3TitleId;                                               // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.DownloadableExpansionDefinition.DlcLevelTravelPair
// 0x0008
struct FDlcLevelTravelPair
{
	class ULevelTravelStationDefinition*               NonDlcStationDef;                                         // 0x0000(0x0004) (Edit)
	class ULevelTravelStationDefinition*               DlcStationDef;                                            // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.EffectCollectionDefinition.ConditionalParticleEffectData
// 0x0008
struct FConditionalParticleEffectData
{
	class UExpressionEvaluator*                        Expression;                                               // 0x0000(0x0004) (Edit, Const, EditInline)
	class UParticleSystem*                             ParticleEffect;                                           // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.ExplosionCollectionDefinition.ConditionalExplosionData
// 0x0008
struct FConditionalExplosionData
{
	class UExpressionEvaluator*                        Expression;                                               // 0x0000(0x0004) (Edit, Const, EditInline)
	class UExplosionDefinition*                        Explosion;                                                // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.ExplosionDefinition.ExplosionScaleData
// 0x003C
struct FExplosionScaleData
{
	class UParticleSystem*                             ExplosionPSTemplate;                                      // 0x0000(0x0004) (Edit, Const)
	int                                                MinRadius;                                                // 0x0004(0x0004) (Edit, Const)
	int                                                MaxRadius;                                                // 0x0008(0x0004) (Edit, Const)
	float                                              MinParticleScale;                                         // 0x000C(0x0004) (Edit, Const)
	float                                              MaxParticleScale;                                         // 0x0010(0x0004) (Edit, Const)
	class UAkEvent*                                    ExplosionAkEvent;                                         // 0x0014(0x0004) (Edit, Const)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0018(0x0004) (Edit, Const)
	float                                              MinCameraEffectDistance;                                  // 0x001C(0x0004) (Edit, Const)
	float                                              MaxCameraEffectDistance;                                  // 0x0020(0x0004) (Edit, Const)
	class UForceFeedbackWaveform*                      FFWaveform;                                               // 0x0024(0x0004) (Edit, Const, EditInline)
	class UWillowExplosionImpactDefinition*            ImpactEffect;                                             // 0x0028(0x0004) (Edit, Const)
	unsigned long                                      bDamageOverPeriodOfTime : 1;                              // 0x002C(0x0004) (Edit)
	float                                              MaxDamageDuration;                                        // 0x0030(0x0004) (Edit)
	float                                              DamageInterval;                                           // 0x0034(0x0004) (Edit)
	unsigned long                                      bDamageEachTargetOnlyOnce : 1;                            // 0x0038(0x0004) (Edit)
	unsigned long                                      bExpandRadiusOverTime : 1;                                // 0x0038(0x0004) (Edit)
};

// ScriptStruct WillowGame.ExplosionDefinition.RecentExplosion
// 0x0018
struct FRecentExplosion
{
	struct FName                                       ExplosionInstigatorName;                                  // 0x0000(0x0008)
	struct FVector                                     ExplosionLocation;                                        // 0x0008(0x000C)
	float                                              ExpirationTime;                                           // 0x0014(0x0004)
};

// ScriptStruct WillowGame.FiringModeDefinition.WaveMotionData
// 0x0028
struct FWaveMotionData
{
	unsigned long                                      bUseCustomWaveMotion : 1;                                 // 0x0000(0x0004) (Edit)
	struct FVector                                     WaveFreq;                                                 // 0x0004(0x000C) (Edit)
	struct FVector                                     WaveAmp;                                                  // 0x0010(0x000C) (Edit)
	struct FVector                                     WavePhase;                                                // 0x001C(0x000C) (Edit)
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletImpactEventData
// 0x0014
struct FBulletImpactEventData
{
	unsigned char                                      DamageSurfaceType;                                        // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bDisableRegularBulletDamage : 1;                          // 0x0004(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0008(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletEventResponse
// 0x0028
struct FBulletEventResponse
{
	int                                                SplitNum;                                                 // 0x0000(0x0004) (Edit, Const)
	float                                              SplitAngle;                                               // 0x0004(0x0004) (Edit, Const)
	float                                              SplitAngleOffset;                                         // 0x0008(0x0004) (Edit, Const)
	float                                              SplitDistance;                                            // 0x000C(0x0004) (Edit, Const)
	class UFiringModeDefinition*                       SplitFire;                                                // 0x0010(0x0004) (Edit, Const)
	float                                              NewSpeed;                                                 // 0x0014(0x0004) (Edit, Const)
	unsigned long                                      bDetonate : 1;                                            // 0x0018(0x0004) (Edit, Const)
	unsigned long                                      bRespawnTracer : 1;                                       // 0x0018(0x0004) (Edit, Const)
	unsigned long                                      bUpdateBeamSourceLocation : 1;                            // 0x0018(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x001C(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletTimerEvent
// 0x002C
struct FBulletTimerEvent
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	struct FBulletEventResponse                        Response;                                                 // 0x0004(0x0028) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.FiringModeDefinition.FiringPatternLine
// 0x0044
struct FFiringPatternLine
{
	struct FRotator                                    StartPoint;                                               // 0x0000(0x000C) (Edit)
	struct FRotator                                    EndPoint;                                                 // 0x000C(0x000C) (Edit)
	unsigned long                                      bUseStartPointOnly : 1;                                   // 0x0018(0x0004) (Edit)
	struct FWaveMotionData                             CustomWaveMotion;                                         // 0x001C(0x0028) (Edit)
};

// ScriptStruct WillowGame.GameBalanceDefinition.MissionStateBalanceAdjustment
// 0x0034
struct FMissionStateBalanceAdjustment
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004) (Edit, Const)
	struct FAttributeInitializationData                MinGameStage;                                             // 0x0004(0x0010) (Edit, Const)
	struct FAttributeInitializationData                MaxGameStage;                                             // 0x0014(0x0010) (Edit, Const)
	struct FAttributeInitializationData                AwesomeLevel;                                             // 0x0024(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.GameBalanceDefinition.RegionBalanceData
// 0x0054
struct FRegionBalanceData
{
	class URegionDefinition*                           Region;                                                   // 0x0000(0x0004) (Edit, Const)
	struct FAttributeInitializationData                MinDefaultGameStage;                                      // 0x0004(0x0010) (Edit, Const)
	struct FAttributeInitializationData                MaxDefaultGameStage;                                      // 0x0014(0x0010) (Edit, Const)
	struct FAttributeInitializationData                DefaultAwesomeLevel;                                      // 0x0024(0x0010) (Edit, Const)
	unsigned long                                      bSpecifyBoostAbovePlayer : 1;                             // 0x0034(0x0004) (Edit, Const)
	struct FAttributeInitializationData                GameStageIncreaseAbovePlayer;                             // 0x0038(0x0010) (Edit, Const)
	TArray<struct FMissionStateBalanceAdjustment>      MissionOverrides;                                         // 0x0048(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.HitRegionHelper.HitRegionDamage
// 0x0028
struct FHitRegionDamage
{
	class UBodyHitRegionDefinition*                    BodyHitRegion;                                            // 0x0000(0x0004)
	float                                              Damage;                                                   // 0x0004(0x0004)
	float                                              RecentDamage;                                             // 0x0008(0x0004)
	unsigned long                                      bHasGored : 1;                                            // 0x000C(0x0004)
	TArray<float>                                      LastPctHealthForRunDamageTriggeredBehaviors;              // 0x0010(0x000C) (NeedCtorLink)
	TArray<float>                                      LastPctHealthForRunHealingTriggeredBehaviors;             // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.IDynamicObstacle.ObstacleData
// 0x004C
struct FObstacleData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	class AActor*                                      Leader;                                                   // 0x0004(0x0004)
	float                                              Radius;                                                   // 0x0008(0x0004)
	float                                              HalfHeight;                                               // 0x000C(0x0004)
	float                                              MaxSpeed;                                                 // 0x0010(0x0004)
	struct FVector                                     Location;                                                 // 0x0014(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0020(0x000C)
	struct FVector                                     OldVelocity;                                              // 0x002C(0x000C)
	struct FVector2D                                   LastOffset;                                               // 0x0038(0x0008)
	FScriptInterface                                   IDO;                                                      // 0x0040(0x0008)
	unsigned long                                      bWasAvoiding : 1;                                         // 0x0048(0x0004)
};

// ScriptStruct WillowGame.WillowDeclarations.CellContentData
// 0x0010
struct FCellContentData
{
	class UTexture*                                    Tex;                                                      // 0x0000(0x0004)
	class UMeshComponent*                              Mesh;                                                     // 0x0004(0x0004) (ExportObject, Component, EditInline)
	class AWillowInventory*                            Inv;                                                      // 0x0008(0x0004)
	int                                                ExtArrayIndex;                                            // 0x000C(0x0004)
};

// ScriptStruct WillowGame.InventoryCardGFx.TopStatData
// 0x0034
struct FTopStatData
{
	struct FString                                     LabelText;                                                // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ValueText;                                                // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     AuxText;                                                  // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      Arrow;                                                    // 0x0024(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     IconName;                                                 // 0x0028(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.ILootable.SpawnedDroppedLootData
// 0x0008
struct FSpawnedDroppedLootData
{
	class AWillowInventory*                            Inv;                                                      // 0x0000(0x0004) (AlwaysInit)
	unsigned long                                      bDisableRigidBodyPhysics : 1;                             // 0x0004(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.ILootable.SpawnedAttachedLootData
// 0x000C
struct FSpawnedAttachedLootData
{
	class AWillowInventory*                            Inv;                                                      // 0x0000(0x0004) (AlwaysInit)
	struct FName                                       AttachmentPointName;                                      // 0x0004(0x0008) (AlwaysInit)
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceAxisData
// 0x0038
struct FInputDeviceAxisData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, Const)
	unsigned char                                      AxisParameter;                                            // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              DeadZone;                                                 // 0x000C(0x0004) (Edit, Const)
	float                                              Speed;                                                    // 0x0010(0x0004) (Edit, Const)
	float                                              AbsoluteAxis;                                             // 0x0014(0x0004) (Edit, Const)
	int                                                InvertMultiplier;                                         // 0x0018(0x0004) (Edit, Const)
	struct FName                                       ActionName;                                               // 0x001C(0x0008) (Edit, Const)
	struct FString                                     Caption;                                                  // 0x0024(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FName                                       KeyBindGroup;                                             // 0x0030(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.InputDeviceDefinition.LookAxisDefinitionData
// 0x0008
struct FLookAxisDefinitionData
{
	class ULookAxisDefinition*                         Horizontal;                                               // 0x0000(0x0004) (Edit, Const)
	class ULookAxisDefinition*                         Vertical;                                                 // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceButtonData
// 0x0044
struct FInputDeviceButtonData
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (Edit, Const)
	TArray<class UInputActionDefinition*>              PressActions;                                             // 0x0008(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UInputActionDefinition*>              TapActions;                                               // 0x0014(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UInputActionDefinition*>              HoldActions;                                              // 0x0020(0x000C) (Edit, Const, NeedCtorLink)
	struct FString                                     Caption;                                                  // 0x002C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FName                                       KeyBindGroup;                                             // 0x0038(0x0008) (Edit, Const)
	class UInputActionDefinition*                      RemapToDefaultLayoutInputAction;                          // 0x0040(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingAxisData
// 0x0024
struct FInputRemappingAxisData
{
	struct FName                                       DefaultAxisName;                                          // 0x0000(0x0008) (Edit, Const)
	struct FName                                       RemappedAxisName;                                         // 0x0008(0x0008) (Edit, Const)
	unsigned char                                      RemappedAxisParameter;                                    // 0x0010(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bInvertInput : 1;                                         // 0x0014(0x0004) (Edit, Const)
	struct FString                                     Caption;                                                  // 0x0018(0x000C) (Edit, Const, Localized, NeedCtorLink)
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingButtonData
// 0x0040
struct FInputRemappingButtonData
{
	struct FName                                       DefaultKeyName;                                           // 0x0000(0x0008) (Edit, Const)
	struct FName                                       RemappedKeyName;                                          // 0x0008(0x0008) (Edit, Const)
	TArray<class UInputActionDefinition*>              RemappedPressActions;                                     // 0x0010(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UInputActionDefinition*>              RemappedTapActions;                                       // 0x001C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UInputActionDefinition*>              RemappedHoldActions;                                      // 0x0028(0x000C) (Edit, Const, NeedCtorLink)
	struct FString                                     Caption;                                                  // 0x0034(0x000C) (Edit, Const, Localized, NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootAttachmentData
// 0x001C
struct FLootAttachmentData
{
	class UItemPoolDefinition*                         ItemPool;                                                 // 0x0000(0x0004) (Edit)
	struct FAttributeInitializationData                PoolProbability;                                          // 0x0004(0x0010) (Edit)
	struct FName                                       AttachmentPointName;                                      // 0x0014(0x0008) (Edit)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootConfigurationData
// 0x0028
struct FLootConfigurationData
{
	struct FName                                       ConfigurationName;                                        // 0x0000(0x0008) (Edit)
	class UAttributeInitializationDefinition*          LootGameStageVarianceFormula;                             // 0x0008(0x0004) (Edit, Const)
	struct FAttributeInitializationData                Weight;                                                   // 0x000C(0x0010) (Edit)
	TArray<struct FLootAttachmentData>                 ItemAttachments;                                          // 0x001C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGradeModifierData
// 0x0038
struct FInteractiveObjectGradeModifierData
{
	class UInteractiveObjectDefinition*                CustomInteractiveObject;                                  // 0x0000(0x0004) (Edit, Const)
	struct FString                                     DisplayName;                                              // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FAttributeInitializationData                ExpLevel;                                                 // 0x0010(0x0010) (Edit, Const)
	TArray<class UInteractiveObjectLootListDefinition*> IncludedCustomLootLists;                                  // 0x0020(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FLootConfigurationData>              CustomLoot;                                               // 0x002C(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGameStageGradeWeightData
// 0x0038 (0x0028 - 0x0060)
struct FInteractiveObjectGameStageGradeWeightData : public FGameStageGradeWeightData
{
	struct FInteractiveObjectGradeModifierData         GradeModifiers;                                           // 0x0028(0x0038) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.InterpTrackBehaviors.BehaviorKeyFrameEventData
// 0x0004 (0x0008 - 0x000C)
struct FBehaviorKeyFrameEventData : public FSpecializedBehaviorEvent
{
	float                                              KeyTime;                                                  // 0x0008(0x0004)
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGradeModifierData
// 0x0008
struct FInventoryGradeModifierData
{
	int                                                ExpLevel;                                                 // 0x0000(0x0004) (Edit, Const)
	class UWillowInventoryDefinition*                  CustomInventoryDefinition;                                // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGameStageGradeWeightData
// 0x0008 (0x0028 - 0x0030)
struct FInventoryGameStageGradeWeightData : public FGameStageGradeWeightData
{
	struct FInventoryGradeModifierData                 GradeModifiers;                                           // 0x0028(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryManufacturerBalanceData
// 0x0010
struct FInventoryManufacturerBalanceData
{
	class UManufacturerDefinition*                     Manufacturer;                                             // 0x0000(0x0004) (Edit, Const)
	TArray<struct FInventoryGameStageGradeWeightData>  Grades;                                                   // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.ItemPartListDefinition.ItemPartGradeWeightData
// 0x0013
struct FItemPartGradeWeightData
{
	class UItemPartDefinition*                         Part;                                                     // 0x0000(0x0004) (Edit, Const)
	TArray<struct FManufacturerCustomGradeWeightData>  Manufacturers;                                            // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
	unsigned char                                      MinGameStageIndex;                                        // 0x0010(0x0001) (Const, EditConst)
	unsigned char                                      MaxGameStageIndex;                                        // 0x0011(0x0001) (Const, EditConst)
	unsigned char                                      DefaultWeightIndex;                                       // 0x0012(0x0001) (Const, EditConst)
};

// ScriptStruct WillowGame.ItemPartListCollectionDefinition.ItemCustomPartTypeData
// 0x0010
struct FItemCustomPartTypeData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (Const)
	TArray<struct FItemPartGradeWeightData>            WeightedParts;                                            // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponPartListDefinition.PartGradeWeightData
// 0x0013
struct FPartGradeWeightData
{
	class UWeaponPartDefinition*                       Part;                                                     // 0x0000(0x0004) (Edit, Const)
	TArray<struct FManufacturerCustomGradeWeightData>  Manufacturers;                                            // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
	unsigned char                                      MinGameStageIndex;                                        // 0x0010(0x0001) (Const, EditConst)
	unsigned char                                      MaxGameStageIndex;                                        // 0x0011(0x0001) (Const, EditConst)
	unsigned char                                      DefaultWeightIndex;                                       // 0x0012(0x0001) (Const, EditConst)
};

// ScriptStruct WillowGame.WeaponPartListCollectionDefinition.WeaponCustomPartTypeData
// 0x0010
struct FWeaponCustomPartTypeData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (Const)
	TArray<struct FPartGradeWeightData>                WeightedParts;                                            // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.IShop.ShopItemData
// 0x0009
struct FShopItemData
{
	class AWillowInventory*                            Item;                                                     // 0x0000(0x0004)
	int                                                Price;                                                    // 0x0004(0x0004)
	unsigned char                                      ItemStatus;                                               // 0x0008(0x0001)
};

// ScriptStruct WillowGame.ItemDefinition.ItemBehaviorSet
// 0x000C
struct FItemBehaviorSet
{
	TArray<class UBehaviorBase*>                       OnUsed;                                                   // 0x0000(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.GrenadeModDefinition.GrenadeModBehaviorSequenceStateData
// 0x000C
struct FGrenadeModBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.GrenadeModPartDefinition.GrenadeModPartBehaviorSequenceStateData
// 0x000C
struct FGrenadeModPartBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.ItemPoolDefinition.BalancedInventoryData
// 0x001C
struct FBalancedInventoryData
{
	class UItemPoolDefinition*                         ItmPoolDefinition;                                        // 0x0000(0x0004) (Edit, Const)
	class UInventoryBalanceDefinition*                 InvBalanceDefinition;                                     // 0x0004(0x0004) (Edit, Const)
	struct FAttributeInitializationData                Probability;                                              // 0x0008(0x0010) (Edit, Const)
	unsigned long                                      bDropOnDeath : 1;                                         // 0x0018(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.CrossDLCItemPoolDefinition.BalancedInventoryDataMirror
// 0x0018
struct FBalancedInventoryDataMirror
{
	unsigned long                                      bIsItemPool : 1;                                          // 0x0000(0x0004) (Edit)
	struct FName                                       ObjectName;                                               // 0x0004(0x0008) (Edit)
	struct FString                                     ObjectPath;                                               // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.ItemPool.ItemPoolInfo
// 0x0014
struct FItemPoolInfo
{
	class UItemPoolDefinition*                         ItemPool;                                                 // 0x0000(0x0004) (Edit, Const)
	struct FAttributeInitializationData                PoolProbability;                                          // 0x0004(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.LevelDependencyList.PersistentMapDependencies
// 0x003C
struct FPersistentMapDependencies
{
	struct FName                                       PersistentMap;                                            // 0x0000(0x0008) (Edit)
	TArray<struct FName>                               SecondaryMaps;                                            // 0x0008(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               ConnectedPersistents;                                     // 0x0014(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LevelName;                                                // 0x0020(0x000C) (Edit, Const, Localized, NeedCtorLink)
	class UGameReleaseDefinition*                      GameReleaseDef;                                           // 0x002C(0x0004) (Edit)
	TArray<unsigned char>                              DiscoveryAchievements;                                    // 0x0030(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.LootConfigurationDefinition.LootData
// 0x001C
struct FLootData
{
	struct FAttributeInitializationData                Weight;                                                   // 0x0000(0x0010) (Edit)
	TArray<class UItemPoolDefinition*>                 ItemPools;                                                // 0x0010(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.ManufacturerAttributeValueResolver.ManufacturerSelectorData
// 0x0018
struct FManufacturerSelectorData
{
	struct FName                                       AssociatedManufacturerName;                               // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                           // 0x0008(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.IMission.MissionRewardPresentationData
// 0x0005
struct FMissionRewardPresentationData
{
	class UInventoryCardPresentationDefinition*        PresentationDefinition;                                   // 0x0000(0x0004)
	unsigned char                                      Rarity;                                                   // 0x0004(0x0001)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponDefinitionData
// 0x0044
struct FWeaponDefinitionData
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                                     // 0x0000(0x0004) (Edit)
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                        // 0x0004(0x0004) (Edit)
	class UManufacturerDefinition*                     ManufacturerDefinition;                                   // 0x0008(0x0004) (Edit)
	int                                                ManufacturerGradeIndex;                                   // 0x000C(0x0004) (Edit)
	class UWeaponPartDefinition*                       BodyPartDefinition;                                       // 0x0010(0x0004) (Edit)
	class UWeaponPartDefinition*                       GripPartDefinition;                                       // 0x0014(0x0004) (Edit)
	class UWeaponPartDefinition*                       BarrelPartDefinition;                                     // 0x0018(0x0004) (Edit)
	class UWeaponPartDefinition*                       SightPartDefinition;                                      // 0x001C(0x0004) (Edit)
	class UWeaponPartDefinition*                       StockPartDefinition;                                      // 0x0020(0x0004) (Edit)
	class UWeaponPartDefinition*                       ElementalPartDefinition;                                  // 0x0024(0x0004) (Edit)
	class UWeaponPartDefinition*                       Accessory1PartDefinition;                                 // 0x0028(0x0004) (Edit)
	class UWeaponPartDefinition*                       Accessory2PartDefinition;                                 // 0x002C(0x0004) (Edit)
	class UWeaponPartDefinition*                       MaterialPartDefinition;                                   // 0x0030(0x0004) (Edit)
	class UWeaponNamePartDefinition*                   PrefixPartDefinition;                                     // 0x0034(0x0004) (Edit)
	class UWeaponNamePartDefinition*                   TitlePartDefinition;                                      // 0x0038(0x0004) (Edit)
	int                                                GameStage;                                                // 0x003C(0x0004) (Edit)
	int                                                UniqueId;                                                 // 0x0040(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowItemTypes.ItemDefinitionData
// 0x0044
struct FItemDefinitionData
{
	class UItemDefinition*                             ItemDefinition;                                           // 0x0000(0x0004) (Edit)
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                        // 0x0004(0x0004) (Edit)
	class UManufacturerDefinition*                     ManufacturerDefinition;                                   // 0x0008(0x0004) (Edit)
	int                                                ManufacturerGradeIndex;                                   // 0x000C(0x0004) (Edit)
	class UItemPartDefinition*                         AlphaItemPartDefinition;                                  // 0x0010(0x0004) (Edit)
	class UItemPartDefinition*                         BetaItemPartDefinition;                                   // 0x0014(0x0004) (Edit)
	class UItemPartDefinition*                         GammaItemPartDefinition;                                  // 0x0018(0x0004) (Edit)
	class UItemPartDefinition*                         DeltaItemPartDefinition;                                  // 0x001C(0x0004) (Edit)
	class UItemPartDefinition*                         EpsilonItemPartDefinition;                                // 0x0020(0x0004) (Edit)
	class UItemPartDefinition*                         ZetaItemPartDefinition;                                   // 0x0024(0x0004) (Edit)
	class UItemPartDefinition*                         EtaItemPartDefinition;                                    // 0x0028(0x0004) (Edit)
	class UItemPartDefinition*                         ThetaItemPartDefinition;                                  // 0x002C(0x0004) (Edit)
	class UItemPartDefinition*                         MaterialItemPartDefinition;                               // 0x0030(0x0004) (Edit)
	class UItemNamePartDefinition*                     PrefixItemNamePartDefinition;                             // 0x0034(0x0004) (Edit)
	class UItemNamePartDefinition*                     TitleItemNamePartDefinition;                              // 0x0038(0x0004) (Edit)
	int                                                GameStage;                                                // 0x003C(0x0004) (Edit)
	int                                                UniqueId;                                                 // 0x0040(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowDeclarations.PendingMissionRewardData
// 0x0118
struct FPendingMissionRewardData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	struct FWeaponDefinitionData                       WeaponRewards[0x2];                                       // 0x0004(0x0044)
	struct FItemDefinitionData                         ItemRewards[0x2];                                         // 0x008C(0x0044)
	unsigned long                                      bGrantAltReward : 1;                                      // 0x0114(0x0004)
};

// ScriptStruct WillowGame.MissionDefinition.ObjectiveDependencyData
// 0x0005
struct FObjectiveDependencyData
{
	class UMissionObjectiveDefinition*                 Objective;                                                // 0x0000(0x0004) (Edit)
	unsigned char                                      Status;                                                   // 0x0004(0x0001) (Edit)
};

// ScriptStruct WillowGame.MissionDefinition.RewardData
// 0x004C
struct FRewardData
{
	struct FAttributeInitializationData                ExperienceRewardPercentage;                               // 0x0000(0x0010) (Edit, Const)
	unsigned char                                      CurrencyRewardType;                                       // 0x0010(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                CreditRewardMultiplier;                                   // 0x0014(0x0010) (Edit, Const)
	struct FAttributeInitializationData                OtherCurrencyReward;                                      // 0x0024(0x0010) (Edit, Const)
	TArray<class UInventoryBalanceDefinition*>         RewardItems;                                              // 0x0034(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UItemPoolDefinition*>                 RewardItemPools;                                          // 0x0040(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.MissionObjectiveDefinition.KillMissionData
// 0x0010
struct FKillMissionData
{
	unsigned long                                      bUseKillRestrictions : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bCriticalHit : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bNotCriticalHit : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bNotHitRegion : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bMissionWeapon : 1;                                       // 0x0000(0x0004) (Edit)
	unsigned char                                      DamageCauserType;                                         // 0x0004(0x0001) (Edit)
	unsigned char                                      DamageType;                                               // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FName                                       HitRegionName;                                            // 0x0008(0x0008) (Edit, EditConst)
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionFilterData
// 0x0008
struct FReplicatedMissionFilterData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	unsigned long                                      bFiltered : 1;                                            // 0x0004(0x0004)
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionObjectiveData
// 0x0008
struct FReplicatedMissionObjectiveData
{
	class UMissionObjectiveDefinition*                 Objective;                                                // 0x0000(0x0004)
	int                                                ObjectiveBit;                                             // 0x0004(0x0004)
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionStatusData
// 0x0005
struct FReplicatedMissionStatusData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	unsigned char                                      Status;                                                   // 0x0004(0x0001)
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionData
// 0x007C
struct FReplicatedMissionData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	unsigned char                                      Status;                                                   // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bTimerRunning : 1;                                        // 0x0008(0x0004)
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                                       // 0x000C(0x0004)
	class UMissionObjectiveSetDefinition*              SubObjectiveSets[0x4];                                    // 0x0010(0x0004)
	int                                                SecondsLeft;                                              // 0x0020(0x0004)
	int                                                ObjectiveCounts[0x14];                                    // 0x0024(0x0004)
	int                                                GameStage;                                                // 0x0074(0x0004)
	unsigned long                                      bFiltered : 1;                                            // 0x0078(0x0004)
};

// ScriptStruct WillowGame.IMission.MissionData
// 0x0028
struct FMissionData
{
	class UMissionDefinition*                          MissionDef;                                               // 0x0000(0x0004)
	unsigned char                                      Status;                                                   // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<int>                                        ObjectivesProgress;                                       // 0x0008(0x000C) (NeedCtorLink)
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                                       // 0x0014(0x0004)
	TArray<class UMissionObjectiveSetDefinition*>      SubObjectiveSets;                                         // 0x0018(0x000C) (NeedCtorLink)
	unsigned long                                      bInitialized : 1;                                         // 0x0024(0x0004)
	unsigned long                                      bHeardKickoff : 1;                                        // 0x0024(0x0004)
	unsigned long                                      bFiltered : 1;                                            // 0x0024(0x0004)
};

// ScriptStruct WillowGame.IMission.MissionStatusPlayerData
// 0x002C
struct FMissionStatusPlayerData
{
	class UMissionDefinition*                          MissionDef;                                               // 0x0000(0x0004) (Edit)
	unsigned char                                      Status;                                                   // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<int>                                        ObjectivesProgress;                                       // 0x0008(0x000C) (Edit, NeedCtorLink)
	class UMissionObjectiveSetDefinition*              ActiveObjectiveSet;                                       // 0x0014(0x0004) (Edit)
	TArray<class UMissionObjectiveSetDefinition*>      SubObjectiveSets;                                         // 0x0018(0x000C) (Edit, NeedCtorLink)
	int                                                GameStage;                                                // 0x0024(0x0004) (Edit)
	unsigned long                                      bNeedsRewards : 1;                                        // 0x0028(0x0004)
	unsigned long                                      bHeardKickoff : 1;                                        // 0x0028(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.MissionObserversData
// 0x0010
struct FMissionObserversData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	TArray<FScriptInterface>                           Observers;                                                // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.IMission.ReplicatedMissionDirectiveData
// 0x0014
struct FReplicatedMissionDirectiveData
{
	FScriptInterface                                   MissionDirector;                                          // 0x0000(0x0008)
	struct FMissionDirectorData                        MissionDirective;                                         // 0x0008(0x000C)
};

// ScriptStruct WillowGame.MissionTracker.MissionWaypointsData
// 0x0010
struct FMissionWaypointsData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	TArray<class UWaypointComponent*>                  Waypoints;                                                // 0x0004(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.MissionTracker.LevelTransitionData
// 0x000C
struct FLevelTransitionData
{
	struct FName                                       TargetLevel;                                              // 0x0000(0x0008)
	class ALevelTravelStation*                         LevelTransition;                                          // 0x0008(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.TimedMissionData
// 0x000C
struct FTimedMissionData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	float                                              SecondsLeft;                                              // 0x0004(0x0004)
	unsigned long                                      bTimerRunning : 1;                                        // 0x0008(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.DefendMissionData
// 0x000C
struct FDefendMissionData
{
	class UMissionObjectiveDefinition*                 Objective;                                                // 0x0000(0x0004)
	FScriptInterface                                   Target;                                                   // 0x0004(0x0008)
};

// ScriptStruct WillowGame.MissionTracker.DefendTargetData
// 0x0008
struct FDefendTargetData
{
	class UMissionObjectiveDefinition*                 Objective;                                                // 0x0000(0x0004)
	int                                                PercentHealth;                                            // 0x0004(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.BlockedMissionData
// 0x0010
struct FBlockedMissionData
{
	class UMissionDefinition*                          BlockedMission;                                           // 0x0000(0x0004)
	TArray<class UMissionDefinition*>                  MissionBlockers;                                          // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.MissionTracker.ObjectiveUpdateData
// 0x0008
struct FObjectiveUpdateData
{
	class UMissionObjectiveDefinition*                 Objective;                                                // 0x0000(0x0004)
	int                                                ObjectiveBit;                                             // 0x0004(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.MinimapIconHelper_Director
// 0x001C
struct FMinimapIconHelper_Director
{
	FScriptInterface                                   Director;                                                 // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	class UMissionDefinition*                          ActionableMissionDefinition;                              // 0x0014(0x0004)
	unsigned long                                      bHasMoreActionableMissions : 1;                           // 0x0018(0x0004)
	unsigned long                                      bBegins : 1;                                              // 0x0018(0x0004)
	unsigned long                                      bEnds : 1;                                                // 0x0018(0x0004)
};

// ScriptStruct WillowGame.MissionTracker.MissionKickoffData
// 0x000C
struct FMissionKickoffData
{
	class UMissionDefinition*                          Mission;                                                  // 0x0000(0x0004)
	class AWillowPlayerController*                     PlayerThatAcceptedMission;                                // 0x0004(0x0004)
	unsigned long                                      bFromActivation : 1;                                      // 0x0008(0x0004)
};

// ScriptStruct WillowGame.DrunkenWaveComponent.DrunkenWaveFormData
// 0x0018
struct FDrunkenWaveFormData
{
	struct FVector2D                                   WaveFreq;                                                 // 0x0000(0x0008) (Edit, Const)
	struct FVector2D                                   WaveAmp;                                                  // 0x0008(0x0008) (Edit, Const)
	struct FVector2D                                   WavePhase;                                                // 0x0010(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.NPCLoadBalancer.NPCList
// 0x0014
struct FNPCList
{
	class AWillowMind*                                 Mind;                                                     // 0x0000(0x0004)
	float                                              LastPathTime;                                             // 0x0004(0x0004)
	float                                              PathRequestTime;                                          // 0x0008(0x0004)
	unsigned long                                      bWantsToPath : 1;                                         // 0x000C(0x0004)
	unsigned long                                      bOnPerch : 1;                                             // 0x000C(0x0004)
	unsigned long                                      bForceStopped : 1;                                        // 0x000C(0x0004)
	unsigned long                                      bIsPathing : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bCanPath : 1;                                             // 0x000C(0x0004)
	float                                              Score;                                                    // 0x0010(0x0004)
};

// ScriptStruct WillowGame.PawnRelevanceUtilityCaching.RelevanceCacheStruct
// 0x0038
struct FRelevanceCacheStruct
{
	struct FName                                       RealViewerName;                                           // 0x0000(0x0008) (AlwaysInit)
	struct FName                                       ToPawnName;                                               // 0x0008(0x0008) (AlwaysInit)
	float                                              TimeCached;                                               // 0x0010(0x0004) (AlwaysInit)
	float                                              NextUpdateTime;                                           // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      bIsRelevant : 1;                                          // 0x0018(0x0004) (AlwaysInit)
	struct FVector                                     FromLoc;                                                  // 0x001C(0x000C) (AlwaysInit)
	struct FVector                                     ToLoc;                                                    // 0x0028(0x000C) (AlwaysInit)
	int                                                RotatingIndex;                                            // 0x0034(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.PawnRelevanceUtilityFixedCost.RelevanceUpdateStruct
// 0x0028
struct FRelevanceUpdateStruct
{
	class APlayerController*                           FromRealViewer;                                           // 0x0000(0x0004) (AlwaysInit)
	struct FVector                                     SrcLocation;                                              // 0x0004(0x000C) (AlwaysInit)
	class AWillowPawn*                                 ToPawn;                                                   // 0x0010(0x0004) (AlwaysInit)
	float                                              TimeRequested;                                            // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      bRelevant : 1;                                            // 0x0018(0x0004) (AlwaysInit)
	unsigned char                                      ShouldRemove;                                             // 0x001C(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	unsigned long                                      bIsForcedValue : 1;                                       // 0x0020(0x0004) (AlwaysInit)
	unsigned long                                      bForceNextCheckTrue : 1;                                  // 0x0020(0x0004) (AlwaysInit)
	float                                              NextUpdateTime;                                           // 0x0024(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.PawnRelevanceUtilityFixedCost.RelevanceBucketStruct
// 0x0020
struct FRelevanceBucketStruct
{
	int                                                NdxToStartCheckFrom;                                      // 0x0000(0x0004) (AlwaysInit)
	float                                              DistanceSquared;                                          // 0x0004(0x0004) (AlwaysInit)
	int                                                MinLineChecksPerFrame;                                    // 0x0008(0x0004) (AlwaysInit)
	int                                                MaxLineChecksPerFrame;                                    // 0x000C(0x0004) (AlwaysInit)
	int                                                MaxIterationsPerFrame;                                    // 0x0010(0x0004) (AlwaysInit)
	TArray<struct FRelevanceUpdateStruct>              Relevance;                                                // 0x0014(0x000C) (Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.PerchDefinition.PerchAnimData
// 0x0010
struct FPerchAnimData
{
	class UPopulationBodyTag*                          Key;                                                      // 0x0000(0x0004) (Edit)
	class USpecialMove_Perch*                          StartAnim;                                                // 0x0004(0x0004) (Edit, EditInline)
	class USpecialMove_Perch*                          StopAnim;                                                 // 0x0008(0x0004) (Edit, EditInline)
	class USpecialMove_PerchLoop*                      IdleAnim;                                                 // 0x000C(0x0004) (Edit, EditInline)
};

// ScriptStruct WillowGame.PlayerClassIdentifierDefinition.CustomizationItemData
// 0x0008
struct FCustomizationItemData
{
	int                                                ItemPoolKey;                                              // 0x0000(0x0004) (Edit, EditConst)
	class UItemPoolDefinition*                         CustomizationItemPool;                                    // 0x0004(0x0004) (Edit, EditConst)
};

// ScriptStruct WillowGame.WillowGameInfo.ColiseumStat
// 0x0008
struct FColiseumStat
{
	unsigned char                                      StatType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                StatValue;                                                // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowGameInfo.WaypointActorData
// 0x0014
struct FWaypointActorData
{
	class AActor*                                      WaypointActor;                                            // 0x0000(0x0004)
	class UMissionObjectiveDefinition*                 WaypointObjective;                                        // 0x0004(0x0004)
	TArray<class UWaypointComponent*>                  Waypoints;                                                // 0x0008(0x000C) (ExportObject, Component, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.WillowGameInfo.AreaWaypointData
// 0x000C
struct FAreaWaypointData
{
	class AActor*                                      WaypointActor;                                            // 0x0000(0x0004)
	int                                                WaypointRadius;                                           // 0x0004(0x0004)
	class UMissionObjectiveDefinition*                 WaypointObjective;                                        // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowGameInfo.ColiseumPlayerInfo
// 0x0010
struct FColiseumPlayerInfo
{
	class AWillowPlayerController*                     WPC;                                                      // 0x0000(0x0004)
	TArray<struct FColiseumStat>                       Stats;                                                    // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerInteractionManager.ActiveInteraction
// 0x0020
struct FActiveInteraction
{
	float                                              TimeLength;                                               // 0x0000(0x0004)
	float                                              TimeRemaining;                                            // 0x0004(0x0004)
	class UPlayerInteractionServer*                    InteractionServer;                                        // 0x0008(0x0004)
	TArray<class AWillowPlayerController*>             Players;                                                  // 0x000C(0x000C) (NeedCtorLink)
	class AWillowPlayerController*                     Instigator;                                               // 0x0018(0x0004)
	unsigned long                                      IsValid : 1;                                              // 0x001C(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.PlayerUIPreferences
// 0x0018
struct FPlayerUIPreferences
{
	struct FString                                     CharacterName;                                            // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FColor                                      PrimaryColor;                                             // 0x000C(0x0004) (Edit)
	struct FColor                                      SecondaryColor;                                           // 0x0010(0x0004) (Edit)
	struct FColor                                      TertiaryColor;                                            // 0x0014(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.SkillSaveGameData
// 0x0010
struct FSkillSaveGameData
{
	class USkillDefinition*                            SkillDefinition;                                          // 0x0000(0x0004) (Edit)
	int                                                Grade;                                                    // 0x0004(0x0004) (Edit)
	int                                                GradePoints;                                              // 0x0008(0x0004) (Edit)
	int                                                EquippedSlotIndex;                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.ResourceSaveGameData
// 0x0010
struct FResourceSaveGameData
{
	class UResourceDefinition*                         ResourceDefinition;                                       // 0x0000(0x0004) (Edit)
	class UResourcePoolDefinition*                     ResourcePoolDefinition;                                   // 0x0004(0x0004) (Edit)
	float                                              Amount;                                                   // 0x0008(0x0004) (Edit)
	int                                                UpgradeLevel;                                             // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.InventorySaveGameData
// 0x004D
struct FInventorySaveGameData
{
	struct FItemDefinitionData                         DefinitionData;                                           // 0x0000(0x0044) (Edit)
	int                                                Quantity;                                                 // 0x0044(0x0004) (Edit)
	unsigned long                                      bEquipped : 1;                                            // 0x0048(0x0004) (Edit)
	unsigned char                                      Mark;                                                     // 0x004C(0x0001) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcItemSaveGameData
// 0x003D
struct FUnloadableDlcItemSaveGameData
{
	struct FInventorySerialNumber                      SerialNumber;                                             // 0x0000(0x0034) (Edit)
	int                                                Quantity;                                                 // 0x0034(0x0004) (Edit)
	unsigned long                                      bEquipped : 1;                                            // 0x0038(0x0004) (Edit)
	unsigned char                                      Mark;                                                     // 0x003C(0x0001) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.InventorySlotSaveGameData
// 0x000C
struct FInventorySlotSaveGameData
{
	int                                                InventorySlotMax_Misc;                                    // 0x0000(0x0004) (Edit)
	int                                                WeaponReadyMax;                                           // 0x0004(0x0004) (Edit)
	int                                                NumQuickSlotsFlourished;                                  // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.WeaponSaveGameData
// 0x0046
struct FWeaponSaveGameData
{
	struct FWeaponDefinitionData                       WeaponDefinitionData;                                     // 0x0000(0x0044) (Edit)
	unsigned char                                      QuickSlot;                                                // 0x0044(0x0001) (Edit)
	unsigned char                                      Mark;                                                     // 0x0045(0x0001) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcWeaponSaveGameData
// 0x0036
struct FUnloadableDlcWeaponSaveGameData
{
	struct FInventorySerialNumber                      SerialNumber;                                             // 0x0000(0x0034) (Edit)
	unsigned char                                      QuickSlot;                                                // 0x0034(0x0001) (Edit)
	unsigned char                                      Mark;                                                     // 0x0035(0x0001) (Edit)
};

// ScriptStruct WillowGame.IMission.UnloadableDlcMissionStatusData
// 0x003C
struct FUnloadableDlcMissionStatusData
{
	struct FString                                     MissionDefName;                                           // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      Status;                                                   // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                DlcPackageId;                                             // 0x0010(0x0004)
	TArray<int>                                        ObjectivesProgress;                                       // 0x0014(0x000C) (NeedCtorLink)
	int                                                ActiveObjectiveSetIndex;                                  // 0x0020(0x0004)
	TArray<int>                                        SubObjectiveSetsIndices;                                  // 0x0024(0x000C) (NeedCtorLink)
	int                                                GameStage;                                                // 0x0030(0x0004)
	int                                                NeedsRewards;                                             // 0x0034(0x0004)
	int                                                HeardKickoff;                                             // 0x0038(0x0004)
};

// ScriptStruct WillowGame.WillowDeclarations.UnloadableDlcPendingRewardData
// 0x00E4
struct FUnloadableDlcPendingRewardData
{
	struct FString                                     MissionDefName;                                           // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FInventorySerialNumber                      WeaponRewards[0x2];                                       // 0x000C(0x0034)
	struct FInventorySerialNumber                      ItemRewards[0x2];                                         // 0x0074(0x0034)
	int                                                DlcPackageId;                                             // 0x00DC(0x0004)
	unsigned long                                      bGrantAltReward : 1;                                      // 0x00E0(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.MissionPlaythroughSaveGameData
// 0x004C
struct FMissionPlaythroughSaveGameData
{
	int                                                PlayThroughNumber;                                        // 0x0000(0x0004) (Edit, Deprecated)
	TArray<struct FMissionStatusPlayerData>            MissionData;                                              // 0x0004(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FUnloadableDlcMissionStatusData>     UnloadableDlcMissionData;                                 // 0x0010(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FPendingMissionRewardData>           PendingMissionRewards;                                    // 0x001C(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FUnloadableDlcPendingRewardData>     UnloadableDlcPendingMissionRewards;                       // 0x0028(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     ActiveMission;                                            // 0x0034(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	TArray<class UMissionDefinition*>                  FilteredMissions;                                         // 0x0040(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerSaveGame.ExpansionData
// 0x0010
struct FExpansionData
{
	int                                                Tag;                                                      // 0x0000(0x0004)
	TArray<unsigned char>                              Data;                                                     // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcChallengeData
// 0x0010
struct FUnloadableDlcChallengeData
{
	struct FString                                     ChallengeDefName;                                         // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                DlcPackageId;                                             // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.RegionGameStageData
// 0x000C
struct FRegionGameStageData
{
	class URegionDefinition*                           RegionDef;                                                // 0x0000(0x0004)
	int                                                GameStage;                                                // 0x0004(0x0004)
	int                                                PlaythroughIdx;                                           // 0x0008(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcRegionGameStageData
// 0x0018
struct FUnloadableDlcRegionGameStageData
{
	struct FString                                     RegionDefName;                                            // 0x0000(0x000C) (NeedCtorLink)
	int                                                GameStage;                                                // 0x000C(0x0004)
	int                                                PlaythroughIdx;                                           // 0x0010(0x0004)
	int                                                DlcPackageId;                                             // 0x0014(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.WorldDiscoveryData
// 0x000C
struct FWorldDiscoveryData
{
	struct FName                                       DiscoveryName;                                            // 0x0000(0x0008) (Edit)
	unsigned long                                      HasBeenUncovered : 1;                                     // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.OneOffLevelChallengeData
// 0x0010
struct FOneOffLevelChallengeData
{
	unsigned char                                      PackageId;                                                // 0x0000(0x0001)
	unsigned char                                      ContentId;                                                // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	TArray<int>                                        Completion;                                               // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerSaveGame.BankSlot
// 0x0034
struct FBankSlot
{
	struct FInventorySerialNumber                      InventorySerialNumber;                                    // 0x0000(0x0034) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.LockoutData
// 0x0008
struct FLockoutData
{
	class ULockoutDefinition*                          LockoutDef;                                               // 0x0000(0x0004) (Edit)
	int                                                LockoutTime;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcLockoutData
// 0x0014
struct FUnloadableDlcLockoutData
{
	struct FString                                     LockoutDefName;                                           // 0x0000(0x000C) (NeedCtorLink)
	int                                                LockoutTime;                                              // 0x000C(0x0004)
	int                                                DlcPackageId;                                             // 0x0010(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.ChosenVehicleCustomization
// 0x000C
struct FChosenVehicleCustomization
{
	class UVehicleFamilyDefinition*                    FamilyDef;                                                // 0x0000(0x0004)
	class UCustomizationDefinition*                    CustomizationDef[0x2];                                    // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassOfferUnion
// 0x0010
struct FSeasonPassOfferUnion
{
	int                                                AssociatedSeasonPassOfferId;                              // 0x0000(0x0004)
	int                                                PaidOfferId;                                              // 0x0004(0x0004)
	int                                                FreeOfferId;                                              // 0x0008(0x0004)
	int                                                SeasonPassId;                                             // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassPackageCount
// 0x000C
struct FSeasonPassPackageCount
{
	int                                                SeasonPassId;                                             // 0x0000(0x0004)
	int                                                PackageCount;                                             // 0x0004(0x0004)
	unsigned long                                      bPreOrder : 1;                                            // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.DLCMissionData
// 0x0014
struct FDLCMissionData
{
	int                                                MinMissionNumber;                                         // 0x0000(0x0004)
	int                                                MaxMissionNumber;                                         // 0x0004(0x0004)
	struct FString                                     MissionNameLocKey;                                        // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.CompatibilityVersionInfo
// 0x0014
struct FCompatibilityVersionInfo
{
	int                                                CurrentCompatPackVersion;                                 // 0x0000(0x0004)
	struct FDlcCompatibilityData                       CurrentCompatibilityMask;                                 // 0x0004(0x0010)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.TaggedMarketplaceContent
// 0x0044
struct FTaggedMarketplaceContent
{
	struct FString                                     Tag;                                                      // 0x0000(0x000C) (NeedCtorLink)
	int                                                OfferId;                                                  // 0x000C(0x0004)
	struct FString                                     OfferIdText;                                              // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     OfferName;                                                // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     SellText;                                                 // 0x0028(0x000C) (NeedCtorLink)
	int                                                ContentCategory;                                          // 0x0034(0x0004)
	int                                                PackageId;                                                // 0x0038(0x0004)
	int                                                ContentId;                                                // 0x003C(0x0004)
	unsigned long                                      bShowInStore : 1;                                         // 0x0040(0x0004)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.GoldenKeySource
// 0x0004
struct FGoldenKeySource
{
	unsigned char                                      SourceId;                                                 // 0x0000(0x0001)
	unsigned char                                      NumKeys;                                                  // 0x0001(0x0001)
	unsigned char                                      NumKeysSpent;                                             // 0x0002(0x0001)
	unsigned char                                      Empty;                                                    // 0x0003(0x0001)
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierLayoutData
// 0x001C
struct FSkillTreeTierLayoutData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                                   // 0x0000(0x0004)
	int                                                TierNumber;                                               // 0x0004(0x0004)
	class USkillTreeBranchDefinition*                  DependencyBranchDefinition;                               // 0x0008(0x0004)
	int                                                DependencyTierNumber;                                     // 0x000C(0x0004)
	TArray<class USkillDefinition*>                    Skills;                                                   // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierStateData
// 0x0010
struct FSkillTreeTierStateData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                                   // 0x0000(0x0004)
	int                                                TierNumber;                                               // 0x0004(0x0004)
	int                                                PointsSpentInTier;                                        // 0x0008(0x0004)
	unsigned long                                      bIsUnlocked : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeBranchStateData
// 0x0010
struct FSkillTreeBranchStateData
{
	class USkillTreeBranchDefinition*                  BranchDefinition;                                         // 0x0000(0x0004)
	int                                                PointsSpentInBranch;                                      // 0x0004(0x0004)
	int                                                MaxPointsForBranch;                                       // 0x0008(0x0004)
	unsigned long                                      bIsUnlocked : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeBranchData
// 0x0034
struct FPlayerSkillTreeBranchData
{
	class USkillTreeBranchDefinition*                  Definition;                                               // 0x0000(0x0004) (AlwaysInit)
	int                                                BranchPointsToUnlockNextBranch;                           // 0x0004(0x0004) (AlwaysInit)
	int                                                Index;                                                    // 0x0008(0x0004) (AlwaysInit)
	int                                                ParentBranchIndex;                                        // 0x000C(0x0004) (AlwaysInit)
	int                                                PrevBranchIndex;                                          // 0x0010(0x0004) (AlwaysInit)
	int                                                NextBranchIndex;                                          // 0x0014(0x0004) (AlwaysInit)
	TArray<int>                                        ChildBranchIndices;                                       // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        TierIndices;                                              // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	class UPlayerSkillTree*                            Owner;                                                    // 0x0030(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeTierData
// 0x002C
struct FPlayerSkillTreeTierData
{
	TArray<int>                                        SkillIndices;                                             // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                BranchPointsToUnlockTier;                                 // 0x000C(0x0004) (AlwaysInit)
	int                                                Index;                                                    // 0x0010(0x0004) (AlwaysInit)
	int                                                PrevTierIndex;                                            // 0x0014(0x0004) (AlwaysInit)
	int                                                NextTierIndex;                                            // 0x0018(0x0004) (AlwaysInit)
	int                                                ParentBranchIndex;                                        // 0x001C(0x0004) (AlwaysInit)
	int                                                TierNumber;                                               // 0x0020(0x0004) (AlwaysInit)
	unsigned long                                      bUnlocked : 1;                                            // 0x0024(0x0004) (AlwaysInit)
	class UPlayerSkillTree*                            Owner;                                                    // 0x0028(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeSkillData
// 0x0024
struct FPlayerSkillTreeSkillData
{
	class USkillDefinition*                            Definition;                                               // 0x0000(0x0004) (AlwaysInit)
	int                                                Index;                                                    // 0x0004(0x0004) (AlwaysInit)
	int                                                PrevSkillIndex;                                           // 0x0008(0x0004) (AlwaysInit)
	int                                                NextSkillIndex;                                           // 0x000C(0x0004) (AlwaysInit)
	int                                                ParentTierIndex;                                          // 0x0010(0x0004) (AlwaysInit)
	int                                                PrevSkillTypeIndex;                                       // 0x0014(0x0004) (AlwaysInit)
	int                                                NextSkillTypeIndex;                                       // 0x0018(0x0004) (AlwaysInit)
	int                                                Grade;                                                    // 0x001C(0x0004) (AlwaysInit)
	class UPlayerSkillTree*                            Owner;                                                    // 0x0020(0x0004) (AlwaysInit)
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeSkillStateData
// 0x0014
struct FSkillTreeSkillStateData
{
	class USkillDefinition*                            SkillDefinition;                                          // 0x0000(0x0004)
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                                   // 0x0004(0x0004)
	int                                                TierNumber;                                               // 0x0008(0x0004)
	int                                                SkillGrade;                                               // 0x000C(0x0004)
	unsigned long                                      bIsUnlocked : 1;                                          // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.MissionPlaythroughData
// 0x0038
struct FMissionPlaythroughData
{
	TArray<struct FMissionStatusPlayerData>            MissionList;                                              // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FUnloadableDlcMissionStatusData>     UnloadableDlcMissionList;                                 // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FUnloadableDlcPendingRewardData>     UnloadableDlcPendingMissionRewards;                       // 0x0018(0x000C) (NeedCtorLink)
	TArray<class UMissionDefinition*>                  FilteredMissions;                                         // 0x0024(0x000C) (NeedCtorLink)
	class UMissionDefinition*                          ActiveMission;                                            // 0x0030(0x0004)
	int                                                PlayThroughNumber;                                        // 0x0034(0x0004) (Deprecated)
};

// ScriptStruct WillowGame.WillowPlayerController.PendingClientTrainingMessage
// 0x000C
struct FPendingClientTrainingMessage
{
	class UClass*                                      Message;                                                  // 0x0000(0x0004)
	class UTrainingMessageDefinition*                  TrainingDefinition;                                       // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.TaggedGFxMovie
// 0x000C
struct FTaggedGFxMovie
{
	class UGearboxGFxMovie*                            Movie;                                                    // 0x0000(0x0004)
	struct FName                                       Tag;                                                      // 0x0004(0x0008)
};

// ScriptStruct WillowGame.WillowSaveGameManager.PlayerSaveData
// 0x00C4
struct FPlayerSaveData
{
	struct FString                                     FilePath;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FDouble                                     TimeStamp;                                                // 0x000C(0x0008)
	struct FString                                     PlayerClassDefName;                                       // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     ClassName;                                                // 0x0020(0x000C) (NeedCtorLink)
	struct FString                                     CharacterName;                                            // 0x002C(0x000C) (NeedCtorLink)
	int                                                ExpLevel;                                                 // 0x0038(0x0004)
	int                                                CurrencyOnHand[0xD];                                      // 0x003C(0x0004)
	struct FString                                     UICharacterName;                                          // 0x0070(0x000C) (NeedCtorLink)
	int                                                PlaythroughsCompleted;                                    // 0x007C(0x0004)
	struct FString                                     LastVisitedTeleporter;                                    // 0x0080(0x000C) (NeedCtorLink)
	int                                                ActiveMissionNumber;                                      // 0x008C(0x0004)
	int                                                PlotMissionNumber;                                        // 0x0090(0x0004)
	int                                                TotalPlayTime;                                            // 0x0094(0x0004)
	int                                                LastPlaythroughNumber;                                    // 0x0098(0x0004)
	struct FString                                     LastSaveDate;                                             // 0x009C(0x000C) (NeedCtorLink)
	struct FGuid                                       SaveGuid;                                                 // 0x00A8(0x0010)
	unsigned long                                      bIsUnloadedDlcCharacter : 1;                              // 0x00B8(0x0004)
	int                                                SaveGameFileId;                                           // 0x00BC(0x0004)
	int                                                ExpPoints;                                                // 0x00C0(0x0004)
};

// ScriptStruct WillowGame.WillowSaveGameManager.LoadInfo
// 0x00C8
struct FLoadInfo
{
	struct FPlayerSaveData                             CharacterData;                                            // 0x0000(0x00C4) (NeedCtorLink)
	unsigned long                                      LoadInfoReady : 1;                                        // 0x00C4(0x0004)
	unsigned long                                      LoadSucceeded : 1;                                        // 0x00C4(0x0004)
	unsigned long                                      LoadCancelled : 1;                                        // 0x00C4(0x0004)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleRecord
// 0x0050
struct FScreenParticleRecord
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (Edit)
	class UParticleSystem*                             Template;                                                 // 0x0008(0x0004) (Edit)
	struct FName                                       MatParamName;                                             // 0x000C(0x0008) (Edit)
	class UParticleSystemComponent*                    Component;                                                // 0x0014(0x0004) (Edit, ExportObject, Component, EditInline)
	TArray<struct FScreenParticleModifier>             AppliedModifiers;                                         // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FVector2D                                   ContentDims;                                              // 0x0024(0x0008) (Edit)
	float                                              ParticleDepth;                                            // 0x002C(0x0004) (Edit)
	unsigned char                                      ScalingMode;                                              // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FScreenParticleParamOverTime                StopParamsOT;                                             // 0x0034(0x0018) (Edit, NeedCtorLink)
	float                                              StopTime;                                                 // 0x004C(0x0004) (Transient)
};

// ScriptStruct WillowGame.WillowPlayerController.TrainingData
// 0x0008
struct FTrainingData
{
	class AWillowPlayerController*                     PCOwner;                                                  // 0x0000(0x0004)
	class UTrainingMessageDefinition*                  TrainingDefinition;                                       // 0x0004(0x0004)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainRecord
// 0x0028
struct FPostProcessChainRecord
{
	class UPostProcessChain*                           Template;                                                 // 0x0000(0x0004) (Edit)
	class UPostProcessChain*                           Instance;                                                 // 0x0004(0x0004) (Edit)
	TArray<struct FMaterialEffectModifier>             AppliedModifiers;                                         // 0x0008(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      PopWhenScalarParamIsMaxedOut : 1;                         // 0x0014(0x0004)
	struct FDOFEffectModifierData                      DOFEffectModifier;                                        // 0x0018(0x000C)
	float                                              NextDOFUpdateTime;                                        // 0x0024(0x0004)
};

// ScriptStruct WillowGame.InteractionIconDefinition.InteractionIconWithOverrides
// 0x0014
struct FInteractionIconWithOverrides
{
	class UInteractionIconDefinition*                  IconDef;                                                  // 0x0000(0x0004)
	class UInteractionIconDefinition*                  OverrideIconDef;                                          // 0x0004(0x0004)
	unsigned long                                      bOverrideIcon : 1;                                        // 0x0008(0x0004)
	unsigned long                                      bOverrideAction : 1;                                      // 0x0008(0x0004)
	unsigned long                                      bOverrideText : 1;                                        // 0x0008(0x0004)
	unsigned char                                      bCostsToUse;                                              // 0x000C(0x0001)
	unsigned char                                      CostsCurrencyType;                                        // 0x000D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	int                                                CostsAmount;                                              // 0x0010(0x0004)
};

// ScriptStruct WillowGame.IMission.MissionRewardData
// 0x0008
struct FMissionRewardData
{
	class UMissionDefinition*                          MissionDef;                                               // 0x0000(0x0004)
	unsigned long                                      bGrantAltReward : 1;                                      // 0x0004(0x0004)
};

// ScriptStruct WillowGame.UBMGraveyardSaveData.TombstoneData
// 0x004C
struct FTombstoneData
{
	int                                                TotalTimePlayed;                                          // 0x0000(0x0004)
	int                                                CharacterLevel;                                           // 0x0004(0x0004)
	int                                                PercentMissionsComplete;                                  // 0x0008(0x0004)
	int                                                PercentChallengesComplete;                                // 0x000C(0x0004)
	struct FString                                     CharacterName;                                            // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     FavoriteManufacturer;                                     // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     FavoriteWeaponType;                                       // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     KilledByDescription;                                      // 0x0034(0x000C) (NeedCtorLink)
	struct FString                                     ScreenshotFilename;                                       // 0x0040(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPlayerController.StatusMenuMissionEligibilityData
// 0x000C
struct FStatusMenuMissionEligibilityData
{
	class UMissionDefinition*                          MissionDef;                                               // 0x0000(0x0004)
	unsigned char                                      MissionStatus;                                            // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bIsBlocked : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bIsFiltered : 1;                                          // 0x0008(0x0004)
};

// ScriptStruct WillowGame.CurrencyAttributeValueResolver.CurrencyState
// 0x0014
struct FCurrencyState
{
	unsigned char                                      FormOfCurrency;                                           // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       StatName;                                                 // 0x0004(0x0008) (Const)
	int                                                CurrentAmount;                                            // 0x000C(0x0004)
	int                                                LastKnownAmount;                                          // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.PostProcessOverlayInfo
// 0x0115
struct FPostProcessOverlayInfo
{
	struct FPostProcessOverlay                         PostProcessOverlay;                                       // 0x0000(0x010C) (NeedCtorLink)
	float                                              SceneInterpolationPhaseTime;                              // 0x010C(0x0004)
	float                                              SceneInterpolationDuration;                               // 0x0110(0x0004)
	unsigned char                                      PostProcessOverlayPhase;                                  // 0x0114(0x0001)
};

// ScriptStruct WillowGame.WillowPlayerController.SpeedKillData
// 0x0010
struct FSpeedKillData
{
	struct FString                                     VictimName;                                               // 0x0000(0x000C) (NeedCtorLink)
	float                                              VictimKillTime;                                           // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.LungeData
// 0x0010
struct FLungeData
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004)
	float                                              Length;                                                   // 0x0004(0x0004)
	float                                              Start;                                                    // 0x0008(0x0004)
	float                                              SavedAccelRate;                                           // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.LurchData
// 0x0014
struct FLurchData
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	float                                              LocMagnitude;                                             // 0x0004(0x0004)
	float                                              RotMagnitude;                                             // 0x0008(0x0004)
	float                                              Duration;                                                 // 0x000C(0x0004)
	float                                              FalloffRate;                                              // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowDamageTypeDefinition.PlayerRecentDamageEventData
// 0x0024
struct FPlayerRecentDamageEventData
{
	class UWillowDamageTypeDefinition*                 DamageTypeDefinition;                                     // 0x0000(0x0004)
	struct FVector                                     DamageLocation;                                           // 0x0004(0x000C)
	float                                              TotalDamageForDamageType;                                 // 0x0010(0x0004)
	unsigned char                                      DamageEventFlags;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      bDirty : 1;                                               // 0x0018(0x0004)
	float                                              DamageTime;                                               // 0x001C(0x0004)
	class AActor*                                      DamagedActor;                                             // 0x0020(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.RecentlyResistedAttackData
// 0x000C
struct FRecentlyResistedAttackData
{
	class AActor*                                      DamagedActor;                                             // 0x0000(0x0004)
	unsigned char                                      DamageType;                                               // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              LastResistTime;                                           // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerController.CustomizationUnlockData
// 0x0014
struct FCustomizationUnlockData
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	int                                                NumUnlockedCustomizations;                                // 0x0004(0x0004)
	TArray<unsigned char>                              UnlockedMask;                                             // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPlayerController.PendingMissionRewardsData
// 0x0010
struct FPendingMissionRewardsData
{
	TArray<struct FPendingMissionRewardData>           PendingMissionRewards;                                    // 0x0000(0x000C) (NeedCtorLink)
	int                                                PlaythroughIndex;                                         // 0x000C(0x0004)
};

// ScriptStruct WillowGame.PopulationFactoryInteractiveObject.PopulatedInteractiveObjectMemento
// 0x0006
struct FPopulatedInteractiveObjectMemento
{
	int                                                BehaviorSequenceState;                                    // 0x0000(0x0004)
	unsigned char                                      bCanBeUsed[0x2];                                          // 0x0004(0x0001)
};

// ScriptStruct WillowGame.PopulationFactoryVendingMachine.FeaturedItemData
// 0x0038
struct FFeaturedItemData
{
	struct FAttributeInitializationData                CommerceMarkup;                                           // 0x0000(0x0010) (Edit, Const)
	struct FName                                       LootConfiguration;                                        // 0x0010(0x0008) (Edit, Const)
	struct FAttributeInitializationData                GameStageValue;                                           // 0x0018(0x0010) (Edit, Const)
	struct FAttributeInitializationData                AwesomeLevelValue;                                        // 0x0028(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.PopulationFactoryWillowVehicle.VehicleDefaultCrewStruct
// 0x0020
struct FVehicleDefaultCrewStruct
{
	class UPopulationDefinition*                       PopulationDefForRole;                                     // 0x0000(0x0004) (Edit)
	unsigned char                                      Role;                                                     // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                ProbabilityOfSpawn;                                       // 0x0008(0x0010) (Edit, Const)
	unsigned long                                      OverrideDefaultSeat : 1;                                  // 0x0018(0x0004) (Edit)
	int                                                PreferredSeat;                                            // 0x001C(0x0004) (Edit)
};

// ScriptStruct WillowGame.PopulationOpportunityDen.PopulationOptionDenSpawnData
// 0x0024
struct FPopulationOptionDenSpawnData
{
	struct FString                                     PopulationDefName;                                        // 0x0000(0x000C) (NeedCtorLink)
	int                                                MaxActiveActors;                                          // 0x000C(0x0004)
	int                                                NumTotalActors;                                           // 0x0010(0x0004)
	int                                                NumActiveActors;                                          // 0x0014(0x0004)
	float                                              NextSpawnTime;                                            // 0x0018(0x0004)
	int                                                NumTotalExternalActors;                                   // 0x001C(0x0004)
	int                                                NumActiveExternalActors;                                  // 0x0020(0x0004)
};

// ScriptStruct WillowGame.ProjectileDefinition.HomingRadiusThreshold
// 0x0014
struct FHomingRadiusThreshold
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, Const)
	float                                              MaxAngleCos;                                              // 0x0004(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       Behaviors;                                                // 0x0008(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.SkillDefinition.BonusAttributeModifierUpgrade
// 0x0008
struct FBonusAttributeModifierUpgrade
{
	int                                                GradeToApplyAt;                                           // 0x0000(0x0004) (Edit, Const)
	float                                              Modifier;                                                 // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectData
// 0x004C
struct FSkillEffectData
{
	class UAttributeDefinitionBase*                    AttributeToModify;                                        // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      bIncludeDuelingTargets : 1;                               // 0x0004(0x0004) (Edit, Const)
	unsigned long                                      bIncludeSelfAsTarget : 1;                                 // 0x0004(0x0004) (Edit, Const)
	unsigned long                                      bOnlyEffectTargetsInRange : 1;                            // 0x0004(0x0004) (Edit, Const)
	unsigned long                                      bExcludeNonPlayerCharacters : 1;                          // 0x0004(0x0004) (Edit, Const)
	unsigned char                                      EffectTarget;                                             // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       TargetInstanceDataName;                                   // 0x000C(0x0008) (Edit, Const)
	unsigned char                                      TargetCriteria;                                           // 0x0014(0x0001) (Edit, Const)
	unsigned char                                      ModifierType;                                             // 0x0015(0x0001) (Edit, Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FAttributeInitializationData                BaseModifierValue;                                        // 0x0018(0x0010) (Edit, Const)
	int                                                GradeToStartApplyingEffect;                               // 0x0028(0x0004) (Edit, Const)
	int                                                PerGradeUpgradeInterval;                                  // 0x002C(0x0004) (Edit, Const)
	struct FAttributeInitializationData                PerGradeUpgrade;                                          // 0x0030(0x0010) (Edit, Const)
	TArray<struct FBonusAttributeModifierUpgrade>      BonusUpgradeList;                                         // 0x0040(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillConstraintData
// 0x0018
struct FSkillConstraintData
{
	unsigned long                                      bApplyConstraintOnActivatation : 1;                       // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      bApplyConstraintWhileActive : 1;                          // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      bApplyConstraintWhilePaused : 1;                          // 0x0000(0x0004) (Edit, Const)
	unsigned char                                      OnFailure;                                                // 0x0004(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UExpressionEvaluator*                        Evaluator;                                                // 0x0008(0x0004) (Edit, Const, EditInline)
	TArray<class USkillExpressionEvaluatorDefinition*> EvaluatorDefinitions;                                     // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillActionData
// 0x0028
struct FSkillActionData
{
	struct FString                                     ClientConsoleCommand;                                     // 0x0000(0x000C) (Edit, Const, NeedCtorLink)
	unsigned long                                      bSkillOnInstigator : 1;                                   // 0x000C(0x0004) (Edit, Const)
	unsigned long                                      bSkillOnRecipient : 1;                                    // 0x000C(0x0004) (Edit, Const)
	unsigned char                                      GradeType;                                                // 0x0010(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                HardcodedGrade;                                           // 0x0014(0x0004) (Edit, Const)
	class USkillDefinition*                            SkillToActivate;                                          // 0x0018(0x0004) (Edit, Const)
	class USkillDefinition*                            SkillToDeactivate;                                        // 0x001C(0x0004) (Edit, Const)
	class UAkEvent*                                    AkEvent;                                                  // 0x0020(0x0004) (Edit, Const)
	unsigned long                                      bInstigatorPlaysSound : 1;                                // 0x0024(0x0004) (Edit, Const)
	unsigned long                                      bRecipientPlaysSound : 1;                                 // 0x0024(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEventResponseData
// 0x0030
struct FSkillEventResponseData
{
	unsigned long                                      bPredictOnClient : 1;                                     // 0x0000(0x0004) (Edit, Const)
	unsigned char                                      EventType;                                                // 0x0004(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FSkillActionData                            Action;                                                   // 0x0008(0x0028) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.NamedSkillEvent
// 0x0021
struct FNamedSkillEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, Const)
	TArray<class USkillDefinition*>                    RequiredSkills;                                           // 0x0008(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UBehaviorBase*>                       EventResponses;                                           // 0x0014(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	unsigned char                                      RequiredActionSkillState;                                 // 0x0020(0x0001) (Edit, Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamagedEventConstraintData
// 0x000C
struct FSkillDamagedEventConstraintData
{
	class UDamageTypeDefinition*                       DamageTypeConstraint;                                     // 0x0000(0x0004) (Edit)
	class UClass*                                      DamageSourceConstraint;                                   // 0x0004(0x0004) (Edit)
	unsigned long                                      bMustBeCriticalDamage : 1;                                // 0x0008(0x0004) (Edit)
	unsigned long                                      bMustBeOneShotKill : 1;                                   // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamageEventData
// 0x0010 (0x0008 - 0x0018)
struct FSkillDamageEventData : public FSpecializedBehaviorEvent
{
	unsigned char                                      EventType;                                                // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<struct FSkillDamagedEventConstraintData>    EventConstraints;                                         // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillKillEventData
// 0x0010 (0x0008 - 0x0018)
struct FSkillKillEventData : public FSpecializedBehaviorEvent
{
	unsigned char                                      EventType;                                                // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<struct FSkillDamagedEventConstraintData>    EventConstraints;                                         // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.Skill.AppliedSkillEffect
// 0x005C
struct FAppliedSkillEffect
{
	struct FSkillEffectData                            EffectData;                                               // 0x0000(0x004C) (NeedCtorLink)
	TArray<class UObject*>                             Contexts;                                                 // 0x004C(0x000C) (NeedCtorLink)
	class UAttributeModifier*                          Modifier;                                                 // 0x0058(0x0004)
};

// ScriptStruct WillowGame.SkillTreeBranchDefinition.Tier
// 0x0010
struct FTier
{
	TArray<class USkillDefinition*>                    Skills;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	int                                                PointsToUnlockNextTier;                                   // 0x000C(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.SkillTreeBranchLayoutDefinition.TierLayout
// 0x000C
struct FTierLayout
{
	TArray<unsigned long>                              bCellIsOccupied;                                          // 0x0000(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.StaggerDefinition.StaggeredRecoveryRotationData
// 0x0009
struct FStaggeredRecoveryRotationData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	unsigned char                                      BoneAxis;                                                 // 0x0008(0x0001) (Edit)
};

// ScriptStruct WillowGame.StatusEffectDefinition.DamageSurfaceTypeModifier
// 0x0034
struct FDamageSurfaceTypeModifier
{
	unsigned char                                      SurfaceType;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                BaseChance;                                               // 0x0004(0x0010) (Edit)
	struct FAttributeInitializationData                BaseSpreadChance;                                         // 0x0014(0x0010)
	struct FAttributeInitializationData                SpreadChanceDecayMultiplier;                              // 0x0024(0x0010)
};

// ScriptStruct WillowGame.StatusEffectsComponent.EffectSoundData
// 0x0008
struct FEffectSoundData
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                AkPlayingId;                                              // 0x0004(0x0004)
};

// ScriptStruct WillowGame.StatusEffectsComponent.SocketEmitter
// 0x000C
struct FSocketEmitter
{
	class AEmitter*                                    Emitter;                                                  // 0x0000(0x0004)
	struct FName                                       SocketName;                                               // 0x0004(0x0008)
};

// ScriptStruct WillowGame.StatusEffectsComponent.HitRegionEmitters
// 0x0018
struct FHitRegionEmitters
{
	TArray<struct FSocketEmitter>                      Emitters;                                                 // 0x0000(0x000C) (NeedCtorLink)
	class UBodyHitRegionDefinition*                    HitRegion;                                                // 0x000C(0x0004)
	unsigned long                                      bDeleteOnDeactivation : 1;                                // 0x0010(0x0004)
	float                                              TimeWaitingToDie;                                         // 0x0014(0x0004)
};

// ScriptStruct WillowGame.StatusEffectsComponent.ActiveStatusEffect
// 0x0084
struct FActiveStatusEffect
{
	float                                              Duration;                                                 // 0x0000(0x0004)
	float                                              TotalElapsedTime;                                         // 0x0004(0x0004)
	float                                              AccumulatedTime;                                          // 0x0008(0x0004)
	float                                              DamagePerSecond;                                          // 0x000C(0x0004)
	class AActor*                                      EventInstigator;                                          // 0x0010(0x0004)
	FScriptInterface                                   DamageCauser;                                             // 0x0014(0x0008)
	class UClass*                                      DamageSource;                                             // 0x001C(0x0004)
	class UStatusEffectDefinition*                     StatusEffectDefinition;                                   // 0x0020(0x0004)
	class UBodyHitRegionDefinition*                    HitRegion;                                                // 0x0024(0x0004)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0028(0x001C) (Component)
	struct FName                                       DamageNumberSocket;                                       // 0x0044(0x0008)
	float                                              AccumulatedSpreadTime;                                    // 0x004C(0x0004)
	float                                              SpreadTimeInterval;                                       // 0x0050(0x0004)
	int                                                SpreadCount;                                              // 0x0054(0x0004)
	int                                                SpreadAttempt;                                            // 0x0058(0x0004)
	float                                              SpreadRadius;                                             // 0x005C(0x0004)
	TArray<class UBodyHitRegionDefinition*>            TravelledRegions;                                         // 0x0060(0x000C) (NeedCtorLink)
	TArray<FScriptInterface>                           TravelledTargets;                                         // 0x006C(0x000C) (NeedCtorLink)
	class UStatusEffectsComponent*                     OwnerComponent;                                           // 0x0078(0x0004) (ExportObject, Component, EditInline)
	int                                                SpreadCap;                                                // 0x007C(0x0004)
	unsigned long                                      bIsInfiniteDuration : 1;                                  // 0x0080(0x0004)
};

// ScriptStruct WillowGame.StatusEffectsComponent.OngoingEffectInfo
// 0x000C
struct FOngoingEffectInfo
{
	float                                              TotalDamageDealtToHealth;                                 // 0x0000(0x0004)
	float                                              TotalDamageDealtToShields;                                // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
};

// ScriptStruct WillowGame.TextMarkupDictionary.TextMarkupEntry
// 0x003C
struct FTextMarkupEntry
{
	struct FString                                     MarkupTag;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     HTMLMarkupBeginText;                                      // 0x000C(0x000C) (Edit, NeedCtorLink)
	struct FString                                     HTMLMarkupEndText;                                        // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FString                                     MarkupBeginTag;                                           // 0x0024(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	struct FString                                     MarkupEndTag;                                             // 0x0030(0x000C) (Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.IMission.MissionStatusData
// 0x0011
struct FMissionStatusData
{
	class UMissionDefinition*                          MissionDefinition;                                        // 0x0000(0x0004) (Edit)
	unsigned char                                      MissionStatus;                                            // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bIsObjectiveSpecific : 1;                                 // 0x0008(0x0004) (Edit)
	class UMissionObjectiveDefinition*                 MissionObjective;                                         // 0x000C(0x0004) (Edit)
	unsigned char                                      ObjectiveStatus;                                          // 0x0010(0x0001) (Edit)
};

// ScriptStruct WillowGame.BodyClassDefinition.TurnData
// 0x001C
struct FTurnData
{
	float                                              MinRepeatTime;                                            // 0x0000(0x0004) (Edit, Const)
	class USpecialMove_Turn*                           Left_46;                                                  // 0x0004(0x0004) (Edit, Const, EditInline)
	class USpecialMove_Turn*                           Right_46;                                                 // 0x0008(0x0004) (Edit, Const, EditInline)
	class USpecialMove_Turn*                           Left_91;                                                  // 0x000C(0x0004) (Edit, Const, EditInline)
	class USpecialMove_Turn*                           Right_91;                                                 // 0x0010(0x0004) (Edit, Const, EditInline)
	class USpecialMove_Turn*                           Left_181;                                                 // 0x0014(0x0004) (Edit, Const, EditInline)
	class USpecialMove_Turn*                           Right_181;                                                // 0x0018(0x0004) (Edit, Const, EditInline)
};

// ScriptStruct WillowGame.VehicleBalanceDefinition.VehicleGradeModifierData
// 0x0020
struct FVehicleGradeModifierData
{
	class AWillowVehicle*                              CustomVehicle;                                            // 0x0000(0x0004) (Edit, Const)
	struct FString                                     DisplayName;                                              // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
	int                                                ExpLevel;                                                 // 0x0010(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       OnSpawnCustomizations;                                    // 0x0014(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.VehicleBalanceDefinition.VehicleGameStageGradeWeightData
// 0x0020 (0x0028 - 0x0048)
struct FVehicleGameStageGradeWeightData : public FGameStageGradeWeightData
{
	struct FVehicleGradeModifierData                   GradeModifiers;                                           // 0x0028(0x0020) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.VehicleClassDefinition.DamageTypeBySpeedStruct
// 0x0008
struct FDamageTypeBySpeedStruct
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit)
	class UDamageTypeDefinition*                       DamageType;                                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.VehicleClassDefinition.CollisionDamageCalculation
// 0x002C
struct FCollisionDamageCalculation
{
	class UDamageTypeDefinition*                       DamageType;                                               // 0x0000(0x0004) (Edit, Const)
	TArray<struct FDamageTypeBySpeedStruct>            DamageTypes;                                              // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
	struct FAttributeInitializationData                Formula;                                                  // 0x0010(0x0010) (Edit)
	float                                              MomentumFactor;                                           // 0x0020(0x0004) (Edit)
	float                                              AddZMomentum;                                             // 0x0024(0x0004) (Edit)
	unsigned long                                      bApplyReverseMomentum : 1;                                // 0x0028(0x0004) (Edit)
	unsigned long                                      bPercentOfTargetHealth : 1;                               // 0x0028(0x0004) (Edit)
	unsigned long                                      bApplySpeedDamage : 1;                                    // 0x0028(0x0004) (Edit)
	unsigned long                                      bApplySpeedMomentum : 1;                                  // 0x0028(0x0004) (Edit)
};

// ScriptStruct WillowGame.VehicleClassDefinition.VehicleSeatDefinition
// 0x0044
struct FVehicleSeatDefinition
{
	class UWillowVehicleSeatDefinition*                SeatDefinition;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bDoNotUseThisSeat : 1;                                    // 0x0004(0x0004) (Edit)
	class UInventoryBalanceDefinition*                 WeaponBalanceDefinition;                                  // 0x0008(0x0004) (Edit)
	class USpecialMoveDefinition*                      WeaponFireSMD;                                            // 0x000C(0x0004) (Edit)
	int                                                NextSeatIndex;                                            // 0x0010(0x0004) (Edit)
	TArray<class USpecialMove_Vehicle*>                Anim_SeatSwap;                                            // 0x0014(0x000C) (Edit, NeedCtorLink)
	class UAIDefinition*                               SeatAIDef;                                                // 0x0020(0x0004) (Edit, Const)
	class ULocalizedStringDefinition*                  SeatInteractTextDefinition;                               // 0x0024(0x0004) (Edit)
	TArray<struct FName>                               GunSocket;                                                // 0x0028(0x000C) (Edit, NeedCtorLink)
	struct FName                                       SeatNameEnter;                                            // 0x0034(0x0008)
	struct FName                                       SeatNameExit;                                             // 0x003C(0x0008)
};

// ScriptStruct WillowGame.VehicleClassDefinition.VStatusEffectResistance
// 0x0020
struct FVStatusEffectResistance
{
	struct FAttributeInitializationData                ChanceResistance;                                         // 0x0000(0x0010) (Edit, Const)
	struct FAttributeInitializationData                DurationResistance;                                       // 0x0010(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.VehicleCrewAnimSetLookupTable.VehicleCrewAnimSetMapping
// 0x000C
struct FVehicleCrewAnimSetMapping
{
	struct FName                                       CharacterName;                                            // 0x0000(0x0008) (Edit)
	class UAnimSet*                                    TheAnimSet;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.VehicleHandlingDefinition.VehicleHandlingWheelData
// 0x000C
struct FVehicleHandlingWheelData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	class UVehicleWheelDefinition*                     WheelDef;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.VehicleHandlingDefinition.FishtailingInfo
// 0x0018
struct FFishtailingInfo
{
	struct FVector                                     ContactPoint;                                             // 0x0000(0x000C) (Edit, Const)
	struct FVector                                     Impulse;                                                  // 0x000C(0x000C) (Edit, Const)
};

// ScriptStruct WillowGame.VehicleLifetimeManager.VSSUsageTracking
// 0x000C
struct FVSSUsageTracking
{
	class AVehicleSpawnStationTerminal*                TheTerminal;                                              // 0x0000(0x0004)
	struct FName                                       ThePlayerName;                                            // 0x0004(0x0008)
};

// ScriptStruct WillowGame.MissionObjectiveWaypointComponent.MissionObjectiveWaypointData
// 0x0010
struct FMissionObjectiveWaypointData
{
	class UMissionObjectiveDefinition*                 LinkedObjective;                                          // 0x0000(0x0004) (Edit)
	TArray<class UMissionObjectiveSetDefinition*>      ObjectiveSetRestrictions;                                 // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponAmmoResourceAttributeValueResolver.WeaponAmmoResourceSelectorData
// 0x0018
struct FWeaponAmmoResourceSelectorData
{
	struct FName                                       AssociatedResourceName;                                   // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                           // 0x0008(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponBoneControllerData
// 0x0014
struct FWeaponBoneControllerData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, Const)
	unsigned char                                      ControlType;                                              // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      bUseInFirstPerson : 1;                                    // 0x000C(0x0004) (Edit, Const)
	unsigned long                                      bUseInThirdPerson : 1;                                    // 0x000C(0x0004) (Edit, Const)
	class USkelControlBase*                            ControlTemplate;                                          // 0x0010(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.WeaponTypeAttributeValueResolver.WeaponTypeSelectorData
// 0x0014
struct FWeaponTypeSelectorData
{
	unsigned char                                      WeaponType;                                               // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FAttributeInitializationData                ValueIfMatched;                                           // 0x0004(0x0010) (Edit, Const)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.ConditionalAnimationData
// 0x0014
struct FConditionalAnimationData
{
	class UExpressionEvaluator*                        Expression;                                               // 0x0000(0x0004) (Edit, Const, EditInline)
	struct FName                                       AnimationName;                                            // 0x0004(0x0008) (Edit, Const)
	class UCameraAnim*                                 CameraAnim;                                               // 0x000C(0x0004) (Edit, Const)
	class UAnimSet*                                    AnimSet;                                                  // 0x0010(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.WeaponPartAttachmentData
// 0x0020
struct FWeaponPartAttachmentData
{
	struct FName                                       FirstPersonAttachmentSocket;                              // 0x0000(0x0008) (Edit, Const)
	struct FName                                       ThirdPersonAttachmentSocket;                              // 0x0008(0x0008) (Edit, Const)
	struct FName                                       FirstPersonOffHandAttachmentSocket;                       // 0x0010(0x0008) (Edit, Const)
	struct FName                                       ThirdPersonOffHandAttachmentSocket;                       // 0x0018(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.SpecialMove_PerchRandomLoop.SMPerchRandomPair
// 0x0008
struct FSMPerchRandomPair
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit)
	class USpecialMove_Perch*                          SMD;                                                      // 0x0004(0x0004) (Edit, EditInline)
};

// ScriptStruct WillowGame.PassengerCameraDefinition.CameraLerpKeyFrame
// 0x0024
struct FCameraLerpKeyFrame
{
	float                                              Alpha;                                                    // 0x0000(0x0004) (Edit)
	unsigned char                                      CameraTargetThisKeyFrame;                                 // 0x0004(0x0001) (Edit)
	unsigned char                                      CameraRotationBehavior;                                   // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     BaseCameraPosition;                                       // 0x0008(0x000C) (Edit)
	float                                              CameraOffset;                                             // 0x0014(0x0004) (Edit)
	struct FRotator                                    ForcedCameraRotation;                                     // 0x0018(0x000C) (Edit)
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.LockOnProfile
// 0x0024
struct FLockOnProfile
{
	FScriptInterface                                   Target;                                                   // 0x0000(0x0008)
	struct FVector                                     Intersection;                                             // 0x0008(0x000C)
	struct FVector                                     MagneticCenterToIntersect;                                // 0x0014(0x000C)
	unsigned long                                      bWithinWorldSpaceRadius : 1;                              // 0x0020(0x0004)
};

// ScriptStruct WillowGame.WillowAutoAimStrategyDefinition.ProfileDefinition
// 0x0008
struct FProfileDefinition
{
	unsigned char                                      Profile;                                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UWillowAutoAimProfileDefinition*             Definition;                                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.AttributeCategory
// 0x0018
struct FAttributeCategory
{
	struct FString                                     Category;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FAttributeBaseValueData>             Attributes;                                               // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByWeaponStatID
// 0x000C
struct FDeathByWeaponStatID
{
	unsigned char                                      DamageCauserType;                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       StatId;                                                   // 0x0004(0x0008) (Edit)
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByDamageTypeStatID
// 0x000C
struct FDeathByDamageTypeStatID
{
	unsigned char                                      DamageType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       StatId;                                                   // 0x0004(0x0008) (Edit)
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.DeathByWeaponDamageStatID
// 0x000C
struct FDeathByWeaponDamageStatID
{
	unsigned char                                      DamageType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      DamageCauserType;                                         // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       StatId;                                                   // 0x0004(0x0008) (Edit)
};

// ScriptStruct WillowGame.PlayerClassDefinition.PlayerClassAchievementUnlockData
// 0x0008
struct FPlayerClassAchievementUnlockData
{
	unsigned char                                      UnlockType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      Achievement;                                              // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                IntData;                                                  // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanMaterialData
// 0x0008
struct FClanMaterialData
{
	class UMaterialInstance*                           SourceMaterial;                                           // 0x0000(0x0004) (Edit)
	class UMaterialInstance*                           ReplacementMaterial;                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanSwitchData
// 0x000C
struct FClanSwitchData
{
	struct FName                                       SwitchName;                                               // 0x0000(0x0008) (Edit)
	int                                                SwitchValue;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowCustomizationManager.PendingCustomization
// 0x0010
struct FPendingCustomization
{
	class UCustomizationDefinition*                    Definition;                                               // 0x0000(0x0004)
	TArray<FScriptInterface>                           Targets;                                                  // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowCustomizationManager.ProductCustomizationInfo
// 0x000C
struct FProductCustomizationInfo
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	int                                                NumUnlockableCustomizations;                              // 0x0004(0x0004)
	int                                                NumCustomizations;                                        // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowCustomizationManager.CustomizationSizeMapping
// 0x0008
struct FCustomizationSizeMapping
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	int                                                NumCustomizations;                                        // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowDialogManager.QueuedPersonalEchoLog
// 0x0008
struct FQueuedPersonalEchoLog
{
	class UWillowDialogEventTag*                       Event;                                                    // 0x0000(0x0004)
	class UGearboxDialogGroup*                         Group;                                                    // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowDialogNameTag.ScaleformPortraitData
// 0x0010
struct FScaleformPortraitData
{
	struct FString                                     ScaleformName;                                            // 0x0000(0x000C) (Edit, Const, EditConst, NeedCtorLink)
	class USwfMovie*                                   PortraitMovie;                                            // 0x000C(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.VideoPortraitData
// 0x0004
struct FVideoPortraitData
{
	class UTextureMovie*                               VideoMovie;                                               // 0x0000(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EchoPortraitInfo
// 0x0018
struct FEchoPortraitInfo
{
	unsigned char                                      PortraitType;                                             // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FScaleformPortraitData                      ScaleformPortrait;                                        // 0x0004(0x0010) (Edit, Const, NeedCtorLink)
	struct FVideoPortraitData                          VideoPortrait;                                            // 0x0014(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmotePortraitInfo
// 0x001C
struct FEmotePortraitInfo
{
	class UWillowDialogEmoteDefinition*                Emote;                                                    // 0x0000(0x0004) (Edit, Const)
	struct FEchoPortraitInfo                           EmotePortrait;                                            // 0x0004(0x0018) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmoteStance
// 0x0008
struct FEmoteStance
{
	class UWillowDialogEmoteDefinition*                Emote;                                                    // 0x0000(0x0004) (Edit, Const)
	class USpecialMoveDefinition*                      StanceSpecialMove;                                        // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowDynamicNavMeshConnectionPoint.DynamicNavMeshConnection
// 0x0008
struct FDynamicNavMeshConnection
{
	float                                              MaxConnectionDistance;                                    // 0x0000(0x0004) (Edit)
	class AWillowDynamicNavMeshConnectionPoint*        ConnectedPoint;                                           // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectIndices
// 0x0008
struct FCoordinatedEffectIndices
{
	int                                                StartingIndex;                                            // 0x0000(0x0004)
	int                                                EndingIndex;                                              // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectThread
// 0x0050
struct FCoordinatedEffectThread
{
	class UCoordinatedEffectDefinition*                EffectDefinition;                                         // 0x0000(0x0004)
	struct FName                                       IgnoreInstanceData;                                       // 0x0004(0x0008)
	float                                              LatentFloat;                                              // 0x000C(0x0004)
	float                                              TargetFloat;                                              // 0x0010(0x0004)
	float                                              ParticleSpeedMultiplier;                                  // 0x0014(0x0004)
	struct FCoordinatedEffectIndices                   CriticalParticleEffects;                                  // 0x0018(0x0008)
	struct FCoordinatedEffectIndices                   ParticleEffects;                                          // 0x0020(0x0008)
	struct FCoordinatedEffectIndices                   AudioEffects;                                             // 0x0028(0x0008)
	struct FCoordinatedEffectIndices                   HiddenParticles;                                          // 0x0030(0x0008)
	class AActor*                                      EffectOwner;                                              // 0x0038(0x0004)
	unsigned char                                      EffectID;                                                 // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned long                                      bHideInstanceDataParticles : 1;                           // 0x0040(0x0004)
	unsigned long                                      bPendingDelete : 1;                                       // 0x0040(0x0004)
	struct FScriptDelegate                             EffectCompleteDelegate;                                   // 0x0044(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectProcess
// 0x0012
struct FCoordinatedEffectProcess
{
	class UObject*                                     Target;                                                   // 0x0000(0x0004)
	TArray<struct FCoordinatedEffectThread>            Threads;                                                  // 0x0004(0x000C) (NeedCtorLink)
	unsigned char                                      Player0MatIndex;                                          // 0x0010(0x0001)
	unsigned char                                      Player1MatIndex;                                          // 0x0011(0x0001)
};

// ScriptStruct WillowGame.WillowGameReplicationInfo.ActiveWaypointData
// 0x0018
struct FActiveWaypointData
{
	struct FVector                                     WaypointLocation;                                         // 0x0000(0x000C)
	class AActor*                                      WaypointActor;                                            // 0x000C(0x0004)
	class UMissionObjectiveDefinition*                 WaypointObjective;                                        // 0x0010(0x0004)
	unsigned long                                      bCanTransition : 1;                                       // 0x0014(0x0004)
};

// ScriptStruct WillowGame.WillowGameReplicationInfo.ActiveAreaWaypointData
// 0x0014
struct FActiveAreaWaypointData
{
	struct FVector                                     WaypointLocation;                                         // 0x0000(0x000C)
	int                                                WaypointRadius;                                           // 0x000C(0x0004)
	class UMissionObjectiveDefinition*                 WaypointObjective;                                        // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowGameViewportClient.SubtitleProfile
// 0x0010
struct FSubtitleProfile
{
	float                                              MinX;                                                     // 0x0000(0x0004)
	float                                              MaxX;                                                     // 0x0004(0x0004)
	float                                              MinY;                                                     // 0x0008(0x0004)
	float                                              MaxY;                                                     // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowGameViewportClient.LoginState
// 0x0010
struct FLoginState
{
	struct FString                                     LoginName;                                                // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bIsDirty : 1;                                             // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowGameViewportClient.GamepadState
// 0x0004
struct FGamepadState
{
	unsigned long                                      bConnected : 1;                                           // 0x0000(0x0004)
};

// ScriptStruct WillowGame.WillowGlobals.LoadingMovieExceptionInfo
// 0x0010
struct FLoadingMovieExceptionInfo
{
	struct FName                                       PersistentMapName;                                        // 0x0000(0x0008) (Edit)
	struct FName                                       Tag;                                                      // 0x0008(0x0008) (Edit)
};

// ScriptStruct WillowGame.WillowHUD.FadePickupParticle
// 0x000C
struct FFadePickupParticle
{
	class AActor*                                      SourceActor;                                              // 0x0000(0x0004)
	class UParticleSystemComponent*                    Particle;                                                 // 0x0004(0x0004) (ExportObject, Component, EditInline)
	float                                              FadeEndTime;                                              // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowHUD.HUDWidget_ChallengeData
// 0x0018
struct FHUDWidget_ChallengeData
{
	class UChallengeDefinition*                        Challenge;                                                // 0x0000(0x0004)
	int                                                LevelIndex;                                               // 0x0004(0x0004)
	int                                                ConditionIndex;                                           // 0x0008(0x0004)
	int                                                CurrStatVal;                                              // 0x000C(0x0004)
	int                                                GoalStatVal;                                              // 0x0010(0x0004)
	unsigned long                                      bComplete : 1;                                            // 0x0014(0x0004)
};

// ScriptStruct WillowGame.WillowInteractiveObject.InteractiveObjectReplicatedStateData
// 0x001C
struct FInteractiveObjectReplicatedStateData
{
	struct FReplicatedBehaviorConsumerState            ReplicatedBehaviorConsumerState;                          // 0x0000(0x000C)
	struct FReplicatedInstanceDataState                ReplicatedInstanceDataState;                              // 0x000C(0x0010)
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimData
// 0x0018
struct FSimpleAnimData
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	class UWillowAnimTree*                             Tree;                                                     // 0x0008(0x0004)
	TArray<class UWillowAnimNode_Simple*>              Nodes;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowInteractiveSwitch.TouchingPawn
// 0x0008
struct FTouchingPawn
{
	class APawn*                                       Pawn;                                                     // 0x0000(0x0004)
	int                                                VolumesTouched;                                           // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowInventoryStorage.ChestData
// 0x003C
struct FChestData
{
	class UClass*                                      InventoryClass;                                           // 0x0000(0x0004)
	struct FInventorySerialNumber                      InventorySerialNumber;                                    // 0x0004(0x0034)
	class AWillowInventory*                            Inventory;                                                // 0x0038(0x0004)
};

// ScriptStruct WillowGame.WillowItemTypes.ItemMemento
// 0x0038
struct FItemMemento
{
	struct FInventorySerialNumber                      SerialNumber;                                             // 0x0000(0x0034)
	unsigned long                                      bEquipped : 1;                                            // 0x0034(0x0004)
	unsigned long                                      bDropOnDeath : 1;                                         // 0x0034(0x0004)
	unsigned long                                      bShopsHaveInfiniteQuantity : 1;                           // 0x0034(0x0004)
	unsigned long                                      bGrenadeStored : 1;                                       // 0x0034(0x0004)
};

// ScriptStruct WillowGame.WillowItemTypes.ReplicatedInventoryCardData
// 0x0008
struct FReplicatedInventoryCardData
{
	float                                              ModifierValue;                                            // 0x0000(0x0004)
	int                                                ModifierStatIndex;                                        // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowItem.UIStatModifierData
// 0x0029
struct FUIStatModifierData
{
	class UAttributePresentationDefinition*            AttributePresentation;                                    // 0x0000(0x0004)
	class UAttributePresentationDefinition*            ConstraintAttributePresentation;                          // 0x0004(0x0004)
	unsigned char                                      AttributeStyle;                                           // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ModifierTotal;                                            // 0x000C(0x0004)
	float                                              CompareModifierTotal;                                     // 0x0010(0x0004)
	int                                                DefinitionIndex;                                          // 0x0014(0x0004)
	class UAttributePresentationDefinition*            SupplementalAttributePresentation;                        // 0x0018(0x0004)
	unsigned char                                      SupplementalAttributeStyle;                               // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              SupplementalModifierTotal;                                // 0x0020(0x0004)
	unsigned long                                      bUseSupplementalModifier : 1;                             // 0x0024(0x0004)
	unsigned char                                      StatCombinationMethod;                                    // 0x0028(0x0001)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamDamageData
// 0x0028
struct FBeamDamageData
{
	float                                              Momentum;                                                 // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
	float                                              Radius;                                                   // 0x0008(0x0004)
	class UClass*                                      Source;                                                   // 0x000C(0x0004)
	class UDamageTypeDefinition*                       TypeDefinition;                                           // 0x0010(0x0004)
	float                                              BarrelSourceTime;                                         // 0x0014(0x0004)
	float                                              PlantSourceTime;                                          // 0x0018(0x0004)
	FScriptInterface                                   DamageCauser;                                             // 0x001C(0x0008)
	unsigned long                                      bCanDamageFriendlies : 1;                                 // 0x0024(0x0004)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamLocationData
// 0x0024
struct FBeamLocationData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	struct FName                                       Socket;                                                   // 0x0004(0x0008)
	struct FVector                                     Offset;                                                   // 0x000C(0x000C)
	unsigned long                                      bUseWeapon : 1;                                           // 0x0018(0x0004)
	FScriptInterface                                   WorldBody;                                                // 0x001C(0x0008)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ServerBeamState
// 0x005C
struct FServerBeamState
{
	unsigned long                                      bDeleteMe : 1;                                            // 0x0000(0x0004)
	struct FBeamDamageData                             DamageData;                                               // 0x0004(0x0028)
	class AController*                                 DamageInstigator;                                         // 0x002C(0x0004)
	float                                              StartTime;                                                // 0x0030(0x0004)
	float                                              LockTime;                                                 // 0x0034(0x0004)
	float                                              NextTraceTime;                                            // 0x0038(0x0004)
	float                                              BeamNetUpdateTime;                                        // 0x003C(0x0004)
	float                                              LastDamageApplicationTime;                                // 0x0040(0x0004)
	class AActor*                                      LastDamagedActor;                                         // 0x0044(0x0004)
	float                                              NextRandomBoneTime;                                       // 0x0048(0x0004)
	int                                                ParentBeamIndex;                                          // 0x004C(0x0004)
	TArray<int>                                        ChildBeamsIndicies;                                       // 0x0050(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamState
// 0x005C
struct FReplicatedBeamState
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	class UFiringModeDefinition*                       FireDef;                                                  // 0x0004(0x0004)
	class UImpactDefinition*                           ImpactDefinition;                                         // 0x0008(0x0004)
	unsigned long                                      bLocked : 1;                                              // 0x000C(0x0004)
	struct FBeamLocationData                           SourceData;                                               // 0x0010(0x0024)
	struct FBeamLocationData                           TargetData;                                               // 0x0034(0x0024)
	unsigned long                                      bPlayImpactAudio : 1;                                     // 0x0058(0x0004)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamState
// 0x0118
struct FBeamState
{
	int                                                BeamIndex;                                                // 0x0000(0x0004)
	struct FServerBeamState                            ServerOnlyState;                                          // 0x0004(0x005C) (NeedCtorLink)
	struct FReplicatedBeamState                        CoreBeamState;                                            // 0x0060(0x005C)
	class UParticleSystemComponent*                    PartRef;                                                  // 0x00BC(0x0004) (ExportObject, Component, EditInline)
	struct FAkPlayingInfo                              BeamAudioInfo;                                            // 0x00C0(0x0008) (Component)
	struct FAkPlayingInfo                              BeamImpactAudioInfo;                                      // 0x00C8(0x0008) (Component)
	struct FVector                                     CurrentStartPoint;                                        // 0x00D0(0x000C)
	struct FVector                                     CurrentEndPoint;                                          // 0x00DC(0x000C)
	struct FVector                                     CurrentStartTangent;                                      // 0x00E8(0x000C)
	struct FVector                                     CurrentEndTangent;                                        // 0x00F4(0x000C)
	struct FRotator                                    CurrentDirection;                                         // 0x0100(0x000C)
	struct FVector                                     LastImpactLocation;                                       // 0x010C(0x000C)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.LightProjectile
// 0x0088
struct FLightProjectile
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bPendingAdd : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bNeedsConstantTrace : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bStartParticleTracerAtWeapon : 1;                         // 0x0000(0x0004)
	unsigned long                                      bActorReflected : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bEnemyPenetrating : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bOvercharged : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bRicochetTowardsEnemy : 1;                                // 0x0000(0x0004)
	unsigned long                                      bPenetrateUsingOriginalTraceDirection : 1;                // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FVector                                     PartLocation;                                             // 0x0010(0x000C)
	struct FVector                                     Velocity;                                                 // 0x001C(0x000C)
	class UParticleSystemComponent*                    PartRef;                                                  // 0x0028(0x0004) (ExportObject, Component, EditInline)
	struct FAkPlayingInfo                              AudioRef;                                                 // 0x002C(0x0008) (Component)
	class UFiringModeDefinition*                       FireDef;                                                  // 0x0034(0x0004)
	float                                              StartTime;                                                // 0x0038(0x0004)
	int                                                NumRicochets;                                             // 0x003C(0x0004)
	float                                              LastTraceTime;                                            // 0x0040(0x0004)
	struct FVector                                     LastSafeTraceStartLocation;                               // 0x0044(0x000C)
	class AActor*                                      LastHitActor;                                             // 0x0050(0x0004)
	class APawn*                                       Instigator;                                               // 0x0054(0x0004)
	float                                              Damage;                                                   // 0x0058(0x0004)
	int                                                FiringPatternIdx;                                         // 0x005C(0x0004)
	unsigned char                                      BulletFromClipType;                                       // 0x0060(0x0001)
	unsigned char                                      bHitWater;                                                // 0x0061(0x0001)
	unsigned char                                      PenetrationCount;                                         // 0x0062(0x0001)
	unsigned char                                      Id;                                                       // 0x0063(0x0001)
	struct FVector                                     StartTrace;                                               // 0x0064(0x000C)
	struct FVector                                     EndTrace;                                                 // 0x0070(0x000C)
	struct FVector                                     OriginalStartTrace;                                       // 0x007C(0x000C)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedLightProjectile
// 0x0034
struct FReplicatedLightProjectile
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bStartParticleTracerAtWeapon : 1;                         // 0x0000(0x0004)
	unsigned long                                      bActorReflected : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bEnemyPenetrating : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bOvercharged : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bRicochetTowardsEnemy : 1;                                // 0x0000(0x0004)
	unsigned char                                      Id;                                                       // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     StartTrace;                                               // 0x0008(0x000C)
	struct FVector                                     EndTrace;                                                 // 0x0014(0x000C)
	float                                              ReflectSpeed;                                             // 0x0020(0x0004)
	class UFiringModeDefinition*                       FireDef;                                                  // 0x0024(0x0004)
	int                                                FiringPatternIdx;                                         // 0x0028(0x0004)
	class APawn*                                       Instigator;                                               // 0x002C(0x0004)
	float                                              StartTime;                                                // 0x0030(0x0004)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamEndPoints
// 0x0018
struct FReplicatedBeamEndPoints
{
	struct FVector                                     StartPoint;                                               // 0x0000(0x000C)
	struct FVector                                     EndPoint;                                                 // 0x000C(0x000C)
};

// ScriptStruct WillowGame.WillowObstacleUtility.ObstaclePoint
// 0x000C
struct FObstaclePoint
{
	float                                              Value;                                                    // 0x0000(0x0004)
	struct FVector2D                                   Offset;                                                   // 0x0004(0x0008)
};

// ScriptStruct WillowGame.WillowPauseTicker.PauseTimerData
// 0x0018
struct FPauseTimerData
{
	struct FName                                       FuncName;                                                 // 0x0000(0x0008)
	unsigned long                                      bLoop : 1;                                                // 0x0008(0x0004)
	float                                              Rate;                                                     // 0x000C(0x0004)
	float                                              Count;                                                    // 0x0010(0x0004)
	class UObject*                                     TimerObj;                                                 // 0x0014(0x0004)
};

// ScriptStruct WillowGame.WillowPawn.HolsteredGearDisplaySlot
// 0x0008
struct FHolsteredGearDisplaySlot
{
	unsigned char                                      State;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class AWillowInventory*                            Item;                                                     // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowPawn.BloodSplatterTrace
// 0x0020
struct FBloodSplatterTrace
{
	class UBodyHitRegionDefinition*                    HitRegion;                                                // 0x0000(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C)
	struct FVector                                     Momentum;                                                 // 0x0010(0x000C)
	float                                              DamageSeverityPercent;                                    // 0x001C(0x0004)
};

// ScriptStruct WillowGame.IMeleeAttacker.MeleeOverTimeState
// 0x0034
struct FMeleeOverTimeState
{
	unsigned long                                      bIsMeleeActive : 1;                                       // 0x0000(0x0004)
	class UMeleeDefinition*                            MeleeDefinition;                                          // 0x0004(0x0004)
	float                                              MeleeStartTime;                                           // 0x0008(0x0004)
	float                                              TimeElapsedSinceLastMelee;                                // 0x000C(0x0004)
	TArray<class AActor*>                              HitActors;                                                // 0x0010(0x000C) (NeedCtorLink)
	struct FVector                                     MeleeStartLocation;                                       // 0x001C(0x000C)
	struct FRotator                                    MeleeStartRotation;                                       // 0x0028(0x000C)
};

// ScriptStruct WillowGame.WillowPawn.GoreEffect
// 0x0024
struct FGoreEffect
{
	class UBodyHitRegionDefinition*                    HitRegion;                                                // 0x0000(0x0004)
	int                                                GoreDataIndex;                                            // 0x0004(0x0004)
	class AController*                                 InstigatedBy;                                             // 0x0008(0x0004)
	struct FVector                                     HitLocation;                                              // 0x000C(0x000C)
	struct FVector                                     Momentum;                                                 // 0x0018(0x000C)
};

// ScriptStruct WillowGame.WillowPawn.MaterialScalarFadeReplication
// 0x0018
struct FMaterialScalarFadeReplication
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	float                                              StartValue;                                               // 0x0008(0x0004)
	float                                              EndValue;                                                 // 0x000C(0x0004)
	float                                              FadeTime;                                                 // 0x0010(0x0004)
	unsigned long                                      bRunning : 1;                                             // 0x0014(0x0004)
	unsigned long                                      bIsForGoreDeath : 1;                                      // 0x0014(0x0004)
};

// ScriptStruct WillowGame.WillowAIPawn.RagdollDeathImpulseStruct
// 0x0024
struct FRagdollDeathImpulseStruct
{
	struct FVector                                     Impulse;                                                  // 0x0000(0x000C) (Edit)
	struct FVector                                     Offset;                                                   // 0x000C(0x000C) (Edit)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (Edit)
	unsigned long                                      VelocityRatherThanForce : 1;                              // 0x0020(0x0004) (Edit)
	unsigned long                                      TransformImpulseByVelocityDirection : 1;                  // 0x0020(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowAIPawn.StaggerStateData
// 0x0030
struct FStaggerStateData
{
	unsigned long                                      bIsStaggered : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bIsUnstaggering : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bForced : 1;                                              // 0x0000(0x0004)
	unsigned char                                      State;                                                    // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              StaggerStartTime;                                         // 0x0008(0x0004)
	float                                              StaggerEndTime;                                           // 0x000C(0x0004)
	float                                              StaggerEndRagdollTime;                                    // 0x0010(0x0004)
	float                                              StaggerRecoveryStartTime;                                 // 0x0014(0x0004)
	float                                              NextUnstaggerCheckTime;                                   // 0x0018(0x0004)
	class UPhysicalMaterial*                           PreviousOverridePhysicalMaterial;                         // 0x001C(0x0004)
	unsigned char                                      PreviousCollisionChannel;                                 // 0x0020(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	class UPrimitiveComponent*                         PreviousCollisionComponent;                               // 0x0024(0x0004) (ExportObject, Component, EditInline)
	class APawn*                                       StaggerInstigator;                                        // 0x0028(0x0004)
	int                                                RestaggeredCount;                                         // 0x002C(0x0004)
};

// ScriptStruct WillowGame.WillowAIPawn.WillowCoverState
// 0x0014
struct FWillowCoverState
{
	struct FName                                       Action;                                                   // 0x0000(0x0008)
	struct FCoverInfo                                  Cover;                                                    // 0x0008(0x0008)
	class UWillowCoverStanceDefinition*                Stance;                                                   // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowAIPawn.PerchStateData
// 0x0030
struct FPerchStateData
{
	struct FName                                       AttachmentName;                                           // 0x0000(0x0008)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0004)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x000C(0x0004)
	struct FVector                                     LocOffset;                                                // 0x0010(0x000C)
	struct FRotator                                    RotOffset;                                                // 0x001C(0x000C)
	float                                              Scale;                                                    // 0x0028(0x0004)
	class AActor*                                      Actor;                                                    // 0x002C(0x0004)
};

// ScriptStruct WillowGame.WillowAIPawn.DamageLocationData
// 0x0010
struct FDamageLocationData
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct WillowGame.WillowAIPawn.SplineAnimPathData
// 0x0010
struct FSplineAnimPathData
{
	class ASplineActor*                                StartSpline;                                              // 0x0000(0x0004)
	struct FName                                       AnimSeqName;                                              // 0x0004(0x0008)
	unsigned long                                      bReverse : 1;                                             // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowWeaponTypes.ExtraMuzzleEffect
// 0x0008
struct FExtraMuzzleEffect
{
	class UParticleSystem*                             Particles;                                                // 0x0000(0x0004) (Edit)
	class UAkEvent*                                    Sound;                                                    // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowPlayerPawn.SpeedTravelData
// 0x0005
struct FSpeedTravelData
{
	float                                              OriginLeaveTime;                                          // 0x0000(0x0004)
	unsigned char                                      OriginRegion;                                             // 0x0004(0x0001)
};

// ScriptStruct WillowGame.WillowPlayerPawn.WeatherSystemEffects
// 0x0008
struct FWeatherSystemEffects
{
	class UParticleSystem*                             WeatherSystemTemplate;                                    // 0x0000(0x0004)
	class UParticleSystem*                             ScreenEffectsTemplate;                                    // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerPawn.AttachmentData
// 0x0025
struct FAttachmentData
{
	class AActor*                                      AttachmentBase;                                           // 0x0000(0x0004)
	struct FName                                       AttachmentBaseBoneName;                                   // 0x0004(0x0008)
	struct FVector                                     AttachmentRelativeOffset;                                 // 0x000C(0x000C)
	struct FRotator                                    AttachmentRelativeRotation;                               // 0x0018(0x000C)
	unsigned char                                      AttachmentPhysicsMode;                                    // 0x0024(0x0001)
};

// ScriptStruct WillowGame.WillowPickup.PickupMemento
// 0x0010
struct FPickupMemento
{
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C)
	unsigned long                                      bIsAttachedToSomething : 1;                               // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerInput.KeyRebindingData
// 0x0010
struct FKeyRebindingData
{
	struct FName                                       DefaultKeyName;                                           // 0x0000(0x0008)
	struct FName                                       RemappedKeyName;                                          // 0x0008(0x0008)
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceAxisAddress
// 0x0008
struct FInputDeviceAxisAddress
{
	class UInputDeviceDefinition*                      SourceDevice;                                             // 0x0000(0x0004)
	int                                                SourceIndex;                                              // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerInput.AccelStateData
// 0x0010
struct FAccelStateData
{
	unsigned long                                      bIsAccelerating : 1;                                      // 0x0000(0x0004)
	float                                              Warmup;                                                   // 0x0004(0x0004)
	float                                              CurrentSpeed;                                             // 0x0008(0x0004)
	int                                                Direction;                                                // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerInput.InputAxisData
// 0x0028
struct FInputAxisData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008)
	struct FInputDeviceAxisAddress                     InputDeviceHandler;                                       // 0x0008(0x0008)
	struct FPointer                                    ParameterPtr;                                             // 0x0010(0x0004) (Native)
	struct FAccelStateData                             AccelState;                                               // 0x0014(0x0010)
	unsigned long                                      bIsLookAxis : 1;                                          // 0x0024(0x0004)
	unsigned long                                      bIsRemappedInverted : 1;                                  // 0x0024(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerInput.DeviceLookAxisData
// 0x0014
struct FDeviceLookAxisData
{
	class UInputDeviceDefinition*                      SourceDevice;                                             // 0x0000(0x0004)
	struct FName                                       LookXAxisName;                                            // 0x0004(0x0008)
	struct FName                                       LookYAxisName;                                            // 0x000C(0x0008)
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceButtonAddress
// 0x000C
struct FInputDeviceButtonAddress
{
	class UInputDeviceDefinition*                      SourceDevice;                                             // 0x0000(0x0004)
	int                                                SourceIndex;                                              // 0x0004(0x0004)
	struct FPointer                                    RemappedButton;                                           // 0x0008(0x0004) (Native)
};

// ScriptStruct WillowGame.WillowPlayerInput.InputButtonData
// 0x001C
struct FInputButtonData
{
	TArray<struct FInputDeviceButtonAddress>           InputDeviceHandlers;                                      // 0x0000(0x000C) (NeedCtorLink)
	struct FName                                       ButtonName;                                               // 0x000C(0x0008)
	unsigned char                                      State;                                                    // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              LastPressedTime;                                          // 0x0018(0x0004)
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.ReplicatedStandInGear
// 0x0154
struct FReplicatedStandInGear
{
	struct FWeaponDefinitionData                       Weapon1Data;                                              // 0x0000(0x0044)
	struct FWeaponDefinitionData                       Weapon2Data;                                              // 0x0044(0x0044)
	struct FItemDefinitionData                         ShieldData;                                               // 0x0088(0x0044)
	struct FItemDefinitionData                         GrenadeModData;                                           // 0x00CC(0x0044)
	struct FItemDefinitionData                         ClassModData;                                             // 0x0110(0x0044)
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.TrackedSkillState
// 0x0008
struct FTrackedSkillState
{
	class USkillDefinition*                            SkillDef;                                                 // 0x0000(0x0004)
	int                                                PackedStackCountAndPercentComplete;                       // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowPointLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit)
	float                                              Brightness;                                               // 0x0008(0x0004) (Edit)
	struct FColor                                      LightColor;                                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowPopulationMaster.VehicleSpawnStationPooledVehicle
// 0x0008
struct FVehicleSpawnStationPooledVehicle
{
	class AWillowVehicle*                              SpawnedVehicle;                                           // 0x0000(0x0004)
	class UVehicleSpawnStationVehicleDefinition*       SpawnVehicleDef;                                          // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowPopulationMaster.VehicleSpawnStationSlot
// 0x0010
struct FVehicleSpawnStationSlot
{
	TArray<struct FVehicleSpawnStationPooledVehicle>   PooledVehicles;                                           // 0x0000(0x000C) (NeedCtorLink)
	int                                                PooledVehicleIndex;                                       // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowPopulationPointDefinition.SpawnAnimPair
// 0x0008
struct FSpawnAnimPair
{
	class USpecialMove_Spawned*                        SpawnedAnim;                                              // 0x0000(0x0004) (Edit, EditInline)
	class USpecialMove_PopulationPoint*                PointAnim;                                                // 0x0004(0x0004) (Edit, EditInline)
};

// ScriptStruct WillowGame.WillowPopulationPointDefinition.SpawnAnimData
// 0x0020
struct FSpawnAnimData
{
	class UPopulationBodyTag*                          Key;                                                      // 0x0000(0x0004) (Edit)
	TArray<struct FSpawnAnimPair>                      AnimPairs;                                                // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     PreviewMeshOffset;                                        // 0x0010(0x000C) (Edit, Const)
	float                                              PreviewMeshScale;                                         // 0x001C(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowProjectile.HitActorData
// 0x0044
struct FHitActorData
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0004)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0004(0x001C) (Component)
	struct FVector                                     HitLocation;                                              // 0x0020(0x000C)
	struct FVector                                     HitLocationRelativeToHitActor;                            // 0x002C(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0038(0x000C)
};

// ScriptStruct WillowGame.WillowPursuitGrid.PursuitNode
// 0x0030
struct FPursuitNode
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C)
	float                                              RelativeDistance;                                         // 0x000C(0x0004)
	float                                              EvasiveActionDistance;                                    // 0x0010(0x0004)
	struct FName                                       NodeType;                                                 // 0x0014(0x0008)
	unsigned long                                      bNeverFallback : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bMultipleReservations : 1;                                // 0x001C(0x0004)
	unsigned long                                      bIsReserved : 1;                                          // 0x001C(0x0004)
	float                                              LastReservedTime;                                         // 0x0020(0x0004)
	class AActor*                                      ReservedBy;                                               // 0x0024(0x0004)
	float                                              AIAlertDistance;                                          // 0x0028(0x0004)
	class UFlagDefinition*                             AIAlertFlagDef;                                           // 0x002C(0x0004)
};

// ScriptStruct WillowGame.WillowPursuitGridDefinition.PursuitNodeData
// 0x0024
struct FPursuitNodeData
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C) (Edit)
	struct FName                                       NodeType;                                                 // 0x000C(0x0008) (Edit)
	float                                              EvasiveActionDistance;                                    // 0x0014(0x0004) (Edit)
	float                                              AIAlertDistance;                                          // 0x0018(0x0004) (Edit)
	class UFlagDefinition*                             AIAlertFlagDef;                                           // 0x001C(0x0004) (Edit)
	unsigned long                                      bNeverFallback : 1;                                       // 0x0020(0x0004) (Edit)
	unsigned long                                      bMultipleReservations : 1;                                // 0x0020(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowStaggerAnimNodeBlend.ReferencePoint
// 0x000C
struct FReferencePoint
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.WillowStaggerAnimNodeBlend.ReferencePointComparisonData
// 0x0018
struct FReferencePointComparisonData
{
	struct FReferencePoint                             A;                                                        // 0x0000(0x000C) (Edit, Const, EditInline)
	struct FReferencePoint                             B;                                                        // 0x000C(0x000C) (Edit, Const, EditInline)
};

// ScriptStruct WillowGame.WillowSystemSettings.SystemOption
// 0x001C
struct FSystemOption
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	int                                                ValueCount;                                               // 0x0008(0x0004)
	int                                                CurrValue;                                                // 0x000C(0x0004)
	TArray<struct FString>                             ValueStrings;                                             // 0x0010(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowSystemSettings.Resolution
// 0x0008
struct FResolution
{
	int                                                Width;                                                    // 0x0000(0x0004)
	int                                                Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowTradeManager.TradeSlot
// 0x0094
struct FTradeSlot
{
	unsigned char                                      Status;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FWeaponDefinitionData                       WeaponData;                                               // 0x0004(0x0044)
	struct FItemDefinitionData                         ItemData;                                                 // 0x0048(0x0044)
	int                                                Quantity;                                                 // 0x008C(0x0004)
	class AWillowInventory*                            WInv;                                                     // 0x0090(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnData
// 0x0014
struct FColumnData
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      HAlign;                                                   // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FColor                                      TextColor;                                                // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuData
// 0x0098
struct FtMenuData
{
	unsigned long                                      bIsSelectable : 1;                                        // 0x0000(0x0004)
	TArray<struct FColumnData>                         ColumnText;                                               // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     PrimaryActionCmd;                                         // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     SecondaryActionCmd;                                       // 0x001C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     TertiaryActionCmd;                                        // 0x0028(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     QuaternaryActionCmd;                                      // 0x0034(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     QuinaryActionCmd;                                         // 0x0040(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     OverCmd;                                                  // 0x004C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     LeaveCmd;                                                 // 0x0058(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Data;                                                     // 0x0064(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned char                                      HintFontSize;                                             // 0x0070(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FString                                     Hint;                                                     // 0x0074(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ItemDetail;                                               // 0x0080(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     DescriptionBoxStr;                                        // 0x008C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeightedWeaponPart
// 0x000C
struct FGearBuilderWeightedWeaponPart
{
	class UWeaponPartDefinition*                       Part;                                                     // 0x0000(0x0004)
	float                                              Weight;                                                   // 0x0004(0x0004)
	float                                              ProbabilityOfPickingThisPart;                             // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeightedInventoryPart
// 0x000C
struct FGearBuilderWeightedInventoryPart
{
	class UWillowInventoryPartDefinition*              Part;                                                     // 0x0000(0x0004)
	float                                              Weight;                                                   // 0x0004(0x0004)
	float                                              ProbabilityOfPickingThisPart;                             // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.MenuHeaderData
// 0x0040
struct FMenuHeaderData
{
	struct FString                                     Header;                                                   // 0x0000(0x000C) (NeedCtorLink)
	float                                              Width;                                                    // 0x000C(0x0004)
	struct FString                                     InterfaceName;                                            // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      FontSize;                                                 // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FColor                                      TextColor;                                                // 0x0020(0x0004)
	struct FColor                                      TextHighlightColor;                                       // 0x0024(0x0004)
	struct FColor                                      IconColor;                                                // 0x0028(0x0004)
	unsigned long                                      bDrawIcon : 1;                                            // 0x002C(0x0004)
	int                                                IconU;                                                    // 0x0030(0x0004)
	int                                                IconV;                                                    // 0x0034(0x0004)
	int                                                IconUL;                                                   // 0x0038(0x0004)
	int                                                IconVL;                                                   // 0x003C(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.DebugConsoleCommand
// 0x0034
struct FDebugConsoleCommand
{
	struct FString                                     MenuName;                                                 // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     CommandName;                                              // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Command;                                                  // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bOnClient : 1;                                            // 0x0030(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuTextPos
// 0x0010
struct FtMenuTextPos
{
	unsigned char                                      TextHAlign;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TextXPos;                                                 // 0x0004(0x0004)
	unsigned char                                      TextVAlign;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TextYPos;                                                 // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnLayoutData
// 0x0015
struct FColumnLayoutData
{
	unsigned char                                      HeaderHAlign;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Header;                                                   // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	float                                              Width;                                                    // 0x0010(0x0004)
	unsigned char                                      DataHAlign;                                               // 0x0014(0x0001)
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuLayout
// 0x0078
struct FtMenuLayout
{
	class UTexture2D*                                  Background;                                               // 0x0000(0x0004)
	int                                                BackgroundXPos;                                           // 0x0004(0x0004)
	int                                                BackgroundYPos;                                           // 0x0008(0x0004)
	int                                                BackgroundXL;                                             // 0x000C(0x0004)
	int                                                BackgroundYL;                                             // 0x0010(0x0004)
	unsigned long                                      bDrawOutlineToShowInputFocus : 1;                         // 0x0014(0x0004)
	int                                                ColumnDataYL;                                             // 0x0018(0x0004)
	int                                                ItemDetailYL;                                             // 0x001C(0x0004)
	struct FString                                     DescriptionBoxHeader;                                     // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      DescriptionBoxHeaderHAlign;                               // 0x002C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned long                                      bUnderlineDescriptionBoxHeader : 1;                       // 0x0030(0x0004)
	int                                                DescriptionBoxXPos;                                       // 0x0034(0x0004)
	int                                                DescriptionBoxYPos;                                       // 0x0038(0x0004)
	int                                                DescriptionBoxXL;                                         // 0x003C(0x0004)
	struct FtMenuTextPos                               TitlePos;                                                 // 0x0040(0x0010)
	unsigned long                                      bDrawHintSeparatorLine : 1;                               // 0x0050(0x0004)
	struct FtMenuTextPos                               HintPos;                                                  // 0x0054(0x0010)
	int                                                ColumnPadding;                                            // 0x0064(0x0004)
	TArray<struct FColumnLayoutData>                   ColumnLayout;                                             // 0x0068(0x000C) (AlwaysInit, NeedCtorLink)
	class UFont*                                       ColumnDataFont;                                           // 0x0074(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.NetworkChannelData
// 0x0048
struct FNetworkChannelData
{
	struct FString                                     ChannelName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     StateName;                                                // 0x000C(0x000C) (NeedCtorLink)
	class UClass*                                      ActorClass;                                               // 0x0018(0x0004)
	struct FString                                     ActorClassName;                                           // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     Role;                                                     // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     RemoteRole;                                               // 0x0034(0x000C) (NeedCtorLink)
	int                                                ActorClassCount;                                          // 0x0040(0x0004)
	float                                              ActorClassPercent;                                        // 0x0044(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemBuilderData
// 0x003C
struct FItemBuilderData
{
	struct FString                                     TabName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     BuildItemMessage;                                         // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     InventoryDefinitionClassName;                             // 0x0024(0x000C) (NeedCtorLink)
	TArray<struct FString>                             InventoryBalanceDefinitionNames;                          // 0x0030(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemBuilderBalanceDefinition
// 0x0010
struct FItemBuilderBalanceDefinition
{
	class UClass*                                      InventoryDefinitionClass;                                 // 0x0000(0x0004)
	TArray<struct FString>                             BalanceDefinitions;                                       // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderInventoryPartSlot
// 0x001C
struct FGearBuilderInventoryPartSlot
{
	struct FString                                     PartName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	int                                                SelectedPart;                                             // 0x000C(0x0004)
	TArray<struct FGearBuilderWeightedInventoryPart>   WeightedPartList;                                         // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemSettings
// 0x011C
struct FItemSettings
{
	class UItemDefinition*                             ItemDefinition;                                           // 0x0000(0x0004)
	class UInventoryBalanceDefinition*                 BalanceDefinition;                                        // 0x0004(0x0004)
	class UManufacturerDefinition*                     ManufacturerDefinition;                                   // 0x0008(0x0004)
	int                                                ManufacturerGradeIndex;                                   // 0x000C(0x0004)
	int                                                Level;                                                    // 0x0010(0x0004)
	struct FGearBuilderInventoryPartSlot               GenericParts[0x9];                                        // 0x0014(0x001C) (NeedCtorLink)
	int                                                CurrentPartBeingSet;                                      // 0x0110(0x0004)
	int                                                ItemBuilderIndex;                                         // 0x0114(0x0004)
	int                                                ActiveSubmenuForThisItem;                                 // 0x0118(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderWeaponPartSlot
// 0x001C
struct FGearBuilderWeaponPartSlot
{
	struct FString                                     PartName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	int                                                SelectedPart;                                             // 0x000C(0x0004)
	TArray<struct FGearBuilderWeightedWeaponPart>      WeightedPartList;                                         // 0x0010(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.WeaponSettings
// 0x0114
struct FWeaponSettings
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                                     // 0x0000(0x0004)
	class UWeaponBalanceDefinition*                    BalanceDefinition;                                        // 0x0004(0x0004)
	class UManufacturerDefinition*                     ManufacturerDefinition;                                   // 0x0008(0x0004)
	int                                                ManufacturerGradeIndex;                                   // 0x000C(0x0004)
	int                                                Level;                                                    // 0x0010(0x0004)
	struct FGearBuilderWeaponPartSlot                  GenericParts[0x9];                                        // 0x0014(0x001C) (NeedCtorLink)
	int                                                CurrentPartBeingSet;                                      // 0x0110(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderCustomizationData
// 0x0010
struct FGearBuilderCustomizationData
{
	int                                                SortValue;                                                // 0x0000(0x0004)
	struct FString                                     BalanceDefinition;                                        // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.GearBuilderCustomizationUsageData
// 0x0010
struct FGearBuilderCustomizationUsageData
{
	class UClass*                                      Usage;                                                    // 0x0000(0x0004)
	TArray<struct FGearBuilderCustomizationData>       CustomizationBalanceDefinitions;                          // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              Time;                                                     // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowVehicle.VehicleSeatInstance
// 0x0078
struct FVehicleSeatInstance
{
	class APawn*                                       StoragePawn;                                              // 0x0000(0x0004)
	class APawn*                                       LastStoragePawn;                                          // 0x0004(0x0004)
	class AVehicle*                                    SeatPawn;                                                 // 0x0008(0x0004)
	class AWillowVehicleWeapon*                        Gun;                                                      // 0x000C(0x0004)
	class UMeshComponent*                              GunMesh;                                                  // 0x0010(0x0004) (ExportObject, Component, EditInline)
	class UWeaponTypeDefinition*                       GunDefinition;                                            // 0x0014(0x0004)
	int                                                BarrelIndex;                                              // 0x0018(0x0004)
	struct FName                                       WeaponRotationName;                                       // 0x001C(0x0008)
	struct FName                                       FlashLocationName;                                        // 0x0024(0x0008)
	struct FName                                       FlashCountName;                                           // 0x002C(0x0008)
	struct FName                                       FiringModeName;                                           // 0x0034(0x0008)
	struct FName                                       AttachedWeaponName;                                       // 0x003C(0x0008)
	TArray<class UWillowSkelControl_TurretConstrained*> TurretControllers;                                        // 0x0044(0x000C) (NeedCtorLink)
	class USpecialMoveDefinition*                      WeaponFireSMD;                                            // 0x0050(0x0004)
	TArray<struct FTimePosition>                       OldPositions;                                             // 0x0054(0x000C) (NeedCtorLink)
	struct FVector                                     SmoothedCameraOffset;                                     // 0x0060(0x000C)
	int                                                IncomingSeatIndex;                                        // 0x006C(0x0004)
	float                                              SeatLockTime;                                             // 0x0070(0x0004)
	unsigned long                                      bDontStopAnimOnExit : 1;                                  // 0x0074(0x0004)
	unsigned long                                      bSwitchingSeats : 1;                                      // 0x0074(0x0004)
	unsigned long                                      bExiting : 1;                                             // 0x0074(0x0004)
};

// ScriptStruct WillowGame.WillowVehicle.VirtualSeatStruct
// 0x000C
struct FVirtualSeatStruct
{
	struct FName                                       NameKey;                                                  // 0x0000(0x0008)
	int                                                CurrentRealSeat;                                          // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowVehicle.VehicleEffect
// 0x002C
struct FVehicleEffect
{
	struct FName                                       EffectStartTag;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       EffectEndTag;                                             // 0x0008(0x0008) (Edit)
	class UParticleSystem*                             EffectTemplate;                                           // 0x0010(0x0004) (Edit)
	struct FName                                       EffectSocket;                                             // 0x0014(0x0008) (Edit)
	class UParticleSystemComponent*                    EffectRef;                                                // 0x001C(0x0004) (ExportObject, Component, EditInline)
	class UAkEvent*                                    EffectAudioStartAkEvent;                                  // 0x0020(0x0004) (Edit)
	class UAkEvent*                                    EffectAudioStopAkEvent;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      bOnlyPassengersSee : 1;                                   // 0x0028(0x0004) (Edit)
	unsigned long                                      bShutOffOnDeath : 1;                                      // 0x0028(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowVehicle.FDamageMorphTargets
// 0x0038
struct FFDamageMorphTargets
{
	struct FName                                       MorphNodeName;                                            // 0x0000(0x0008)
	class UMorphNodeWeight*                            MorphNode;                                                // 0x0008(0x0004)
	struct FName                                       LinkedMorphNodeName;                                      // 0x000C(0x0008)
	int                                                LinkedMorphNodeIndex;                                     // 0x0014(0x0004)
	struct FName                                       AssociatedSkelControl;                                    // 0x0018(0x0008)
	struct FName                                       InfluenceBone;                                            // 0x0020(0x0008)
	int                                                Health;                                                   // 0x0028(0x0004)
	TArray<struct FName>                               DamagePropNames;                                          // 0x002C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowVehicle.SuspensionSound
// 0x0010
struct FSuspensionSound
{
	float                                              LastSuspensionTravel;                                     // 0x0000(0x0004)
	float                                              LastPlayTime;                                             // 0x0004(0x0004)
	struct FAkPlayingInfo                              PlayingInfo;                                              // 0x0008(0x0008) (Component)
};

// ScriptStruct WillowGame.WillowVehicle.IndexPair
// 0x0008
struct FIndexPair
{
	int                                                Index1;                                                   // 0x0000(0x0004)
	int                                                Index2;                                                   // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowVehicle_Tank.TankSensor
// 0x0014
struct FTankSensor
{
	struct FName                                       Socket;                                                   // 0x0000(0x0008) (Edit, Const)
	unsigned char                                      Type;                                                     // 0x0008(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SearchLength;                                             // 0x000C(0x0004) (Edit, Const)
	float                                              HitLength;                                                // 0x0010(0x0004) (Transient)
};

// ScriptStruct WillowGame.WillowVehicleSimCar.PhysicalMaterialTireModel
// 0x000C
struct FPhysicalMaterialTireModel
{
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0000(0x0004) (Edit)
	float                                              LongGripScaler;                                           // 0x0004(0x0004) (Edit)
	float                                              LatGripScaler;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponMemento
// 0x003C
struct FWeaponMemento
{
	struct FInventorySerialNumber                      SerialNumber;                                             // 0x0000(0x0034)
	int                                                StoredAmmo;                                               // 0x0034(0x0004)
	unsigned long                                      bEquipped : 1;                                            // 0x0038(0x0004)
	unsigned long                                      bDropOnDeath : 1;                                         // 0x0038(0x0004)
};

// ScriptStruct WillowGame.WillowWeapon.LockOnTargetStateStruct
// 0x0010
struct FLockOnTargetStateStruct
{
	class AActor*                                      CurrentTarget;                                            // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	unsigned long                                      LockOnRequested : 1;                                      // 0x0008(0x0004)
	unsigned long                                      LockOnInProgress : 1;                                     // 0x0008(0x0004)
	float                                              CoolDownStartTime;                                        // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowWeapon.WeaponBoneControllerInstance
// 0x000C
struct FWeaponBoneControllerInstance
{
	unsigned char                                      SourcePartType;                                           // 0x0000(0x0001)
	unsigned char                                      BoneControlType;                                          // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	FScriptInterface                                   BoneController;                                           // 0x0004(0x0008)
};

// ScriptStruct WillowGame.WillowWeapon.ShellCasingImpact
// 0x0010
struct FShellCasingImpact
{
	float                                              ImpactTime;                                               // 0x0000(0x0004)
	struct FVector                                     ImpactLocation;                                           // 0x0004(0x000C)
};

// ScriptStruct WillowGame.WillowAnimNode_AimState.AimAnimTransitionData
// 0x0018
struct FAimAnimTransitionData
{
	unsigned char                                      FromState;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      ToState;                                                  // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       AnimName;                                                 // 0x0004(0x0008) (Edit)
	float                                              BlendInTime;                                              // 0x000C(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0010(0x0004) (Edit)
	unsigned long                                      bPlayInReverse : 1;                                       // 0x0014(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.BoneRotateData
// 0x0010
struct FBoneRotateData
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x0004(0x000C) (Edit)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimDeltaDataList
// 0x000C
struct FAnimDeltaDataList
{
	TArray<int>                                        IndexList;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimSwapData
// 0x0008
struct FAnimSwapData
{
	int                                                Index1;                                                   // 0x0000(0x0004) (Edit)
	int                                                Index2;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.PrismDataContainer
// 0x0054
struct FPrismDataContainer
{
	TArray<struct FBoneRotateData>                     RotateBoneTranslation;                                    // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBoneRotateData>                     RotateBone;                                               // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FBoneRotateData>                     RotateRefBone;                                            // 0x0018(0x000C) (Edit, NeedCtorLink)
	TArray<struct FAnimDeltaDataList>                  AnimDeltaList;                                            // 0x0024(0x000C) (Edit, NeedCtorLink)
	TArray<struct FAnimDeltaDataList>                  AnimDeltaRefList;                                         // 0x0030(0x000C) (Edit, NeedCtorLink)
	TArray<struct FAnimSwapData>                       SwapList;                                                 // 0x003C(0x000C) (Edit, NeedCtorLink)
	struct FRotator                                    RotateRootMotion;                                         // 0x0048(0x000C) (Edit)
};

// ScriptStruct WillowGame.WillowAnimNodeBlendWheeledPawn.DirChangeRateRange
// 0x0008
struct FDirChangeRateRange
{
	float                                              DirDegreesPerSecond;                                      // 0x0000(0x0004) (Edit)
	float                                              SpeedRange;                                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowAnimNodeFeatherBlend.FeatherBoneBlendTarget
// 0x000C
struct FFeatherBoneBlendTarget
{
	struct FName                                       StartBoneName;                                            // 0x0000(0x0008) (Edit)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                          // 0x0000(0x0004) (Edit)
	int                                                YawConstraint;                                            // 0x0004(0x0004) (Edit)
	int                                                RollConstraint;                                           // 0x0008(0x0004) (Edit)
};

// ScriptStruct WillowGame.PlayerActionExpressionEvaluator.EvalActionData
// 0x0005
struct FEvalActionData
{
	unsigned long                                      bIsActive : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned char                                      Action;                                                   // 0x0004(0x0001) (Edit)
};

// ScriptStruct WillowGame.SkillEffectManager.DeferredSkillActivationData
// 0x001C
struct FDeferredSkillActivationData
{
	class AController*                                 SkillInstigator;                                          // 0x0000(0x0004)
	class USkillDefinition*                            Definition;                                               // 0x0004(0x0004)
	class UObject*                                     AdditionalSkillTarget;                                    // 0x0008(0x0004)
	int                                                SkillGrade;                                               // 0x000C(0x0004)
	struct FScriptDelegate                             StateChangeDelegate;                                      // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AITransformedName
// 0x0018
struct FAITransformedName
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     TransformedName;                                          // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FName                                       TransformedKillStat;                                      // 0x0010(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnPlaythroughData
// 0x0050
struct FAIPawnPlaythroughData
{
	int                                                PlayThrough;                                              // 0x0000(0x0004) (Edit, Const, EditConst)
	struct FString                                     DisplayName;                                              // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
	TArray<struct FAITransformedName>                  TransformedNames;                                         // 0x0010(0x000C) (Edit, NeedCtorLink)
	TArray<class UBehaviorBase*>                       OnSpawnCustomizations;                                    // 0x001C(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	TArray<struct FAttributeBaseValueData>             AttributeStartingValues;                                  // 0x0028(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UItemPoolListDefinition*>             CustomItemPoolIncludedLists;                              // 0x0034(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FItemPoolInfo>                       CustomItemPoolList;                                       // 0x0040(0x000C) (Edit, Const, NeedCtorLink)
	class UMaterialInstance*                           MeshMaterial;                                             // 0x004C(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGradeModifierData
// 0x0050
struct FAIPawnGradeModifierData
{
	class AWillowAIPawn*                               CustomAIPawnArchetype;                                    // 0x0000(0x0004) (Edit, Const)
	struct FString                                     DisplayName;                                              // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
	int                                                ExpLevel;                                                 // 0x0010(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       OnSpawnCustomizations;                                    // 0x0014(0x000C) (Edit, Const, NeedCtorLink, EditInline)
	TArray<struct FAttributeBaseValueData>             AttributeStartingValues;                                  // 0x0020(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UItemPoolListDefinition*>             CustomItemPoolIncludedLists;                              // 0x002C(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FItemPoolInfo>                       CustomItemPoolList;                                       // 0x0038(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FAITransformedName>                  TransformedNames;                                         // 0x0044(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGameStageGradeWeightData
// 0x0050 (0x0028 - 0x0078)
struct FAIPawnGameStageGradeWeightData : public FGameStageGradeWeightData
{
	struct FAIPawnGradeModifierData                    GradeModifiers;                                           // 0x0028(0x0050) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.DownloadableFixupAIPawnNamesDefinition.AIPawnPlaythroughThreeData
// 0x0024
struct FAIPawnPlaythroughThreeData
{
	struct FString                                     AIPawnBalanceDefinitionFullObjectName;                    // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x000C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	TArray<struct FAITransformedName>                  TransformedNames;                                         // 0x0018(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.PopulationFactoryWillowAIPawn.PopulatedAIPawnMemento
// 0x0018
struct FPopulatedAIPawnMemento
{
	TArray<struct FWeaponMemento>                      PawnWeapons;                                              // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FItemMemento>                        PawnItems;                                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PopulationFactoryWillowInventory.PopulatedPickupMemento
// 0x0088
struct FPopulatedPickupMemento
{
	class UClass*                                      SavedInventoryClass;                                      // 0x0000(0x0004)
	struct FPickupMemento                              PickupMemento;                                            // 0x0004(0x0010)
	struct FWeaponMemento                              WeaponMemento;                                            // 0x0014(0x003C)
	struct FItemMemento                                ItemMemento;                                              // 0x0050(0x0038)
};

// ScriptStruct WillowGame.WillowAIComponent.CoverExposureData
// 0x0004
struct FCoverExposureData
{
	unsigned long                                      bExposedUp : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bExposedLeft : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bExposedRight : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatZone
// 0x0020
struct FCombatZone
{
	int                                                Index;                                                    // 0x0000(0x0004)
	struct FBox                                        Bounds;                                                   // 0x0004(0x001C)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatZoneSearchData
// 0x0028
struct FCombatZoneSearchData
{
	float                                              ZoneMoveDist;                                             // 0x0000(0x0004) (Edit, Const)
	struct FAIRange                                    ZoneTimeLimit;                                            // 0x0004(0x0008) (Edit, Const)
	struct FAIRange                                    TargetRange;                                              // 0x000C(0x0008) (Edit, Const)
	float                                              MinHeight;                                                // 0x0014(0x0004) (Edit, Const)
	unsigned long                                      bCanFail : 1;                                             // 0x0018(0x0004) (Edit, Const)
	unsigned char                                      LineOfSight;                                              // 0x001C(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FAIRange                                    LineOfSightTimeLimit;                                     // 0x0020(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointSearchData
// 0x0008 (0x0028 - 0x0030)
struct FCombatPointSearchData : public FCombatZoneSearchData
{
	unsigned long                                      bUseCover : 1;                                            // 0x0028(0x0004) (Edit)
	float                                              PointRadius;                                              // 0x002C(0x0004) (Edit)
};

// ScriptStruct WillowGame.Action_SwoopAttack.SwoopAttackData
// 0x0008
struct FSwoopAttackData
{
	unsigned long                                      bTriggered : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bCacheTargetLocation : 1;                                 // 0x0000(0x0004) (Edit, Const)
	float                                              Distance;                                                 // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.DeployableTurretActor.TurretEffect
// 0x002C
struct FTurretEffect
{
	struct FName                                       EffectStartTag;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       EffectEndTag;                                             // 0x0008(0x0008) (Edit)
	class UParticleSystem*                             EffectTemplate;                                           // 0x0010(0x0004) (Edit)
	struct FName                                       EffectSocket;                                             // 0x0014(0x0008) (Edit)
	class UParticleSystemComponent*                    EffectRef;                                                // 0x001C(0x0004) (ExportObject, Component, EditInline)
	class UAkEvent*                                    EffectAudioStartAkEvent;                                  // 0x0020(0x0004) (Edit)
	class UAkEvent*                                    EffectAudioStopAkEvent;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      bShutOffOnDeath : 1;                                      // 0x0028(0x0004) (Edit)
};

// ScriptStruct WillowGame.DeployableTurretActor.TurretDamageEffectData
// 0x0018
struct FTurretDamageEffectData
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (Edit)
	struct FName                                       DamageStartTagName;                                       // 0x0004(0x0008) (Edit)
	struct FName                                       DamageEndTagName;                                         // 0x000C(0x0008) (Edit)
	unsigned long                                      EffectActive : 1;                                         // 0x0014(0x0004) (Transient)
};

// ScriptStruct WillowGame.WillowRadarManager.ServerDynamicRadarIconData
// 0x000C
struct FServerDynamicRadarIconData
{
	class UObject*                                     SourceObject;                                             // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	float                                              StartTime;                                                // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowRadarManager.RemoteDynamicRadarIconData
// 0x0014
struct FRemoteDynamicRadarIconData
{
	unsigned char                                      IconType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	unsigned long                                      bActive : 1;                                              // 0x0010(0x0004)
};

// ScriptStruct WillowGame.WillowBaseStats.WillowStatProperty
// 0x0034
struct FWillowStatProperty
{
	struct FName                                       Id;                                                       // 0x0000(0x0008)
	struct FSettingsData                               Data;                                                     // 0x0008(0x000C)
	struct FSettingsData                               MaxData;                                                  // 0x0014(0x000C)
	struct FSettingsData                               ChallengeBaseData;                                        // 0x0020(0x000C)
	int                                                OnlineId;                                                 // 0x002C(0x0004)
	unsigned long                                      bSparkStatDirty : 1;                                      // 0x0030(0x0004)
	unsigned long                                      bSparkStatInFlight : 1;                                   // 0x0030(0x0004)
};

// ScriptStruct WillowGame.WillowVersusDuelGlobals.DuelTeamInfo
// 0x0008
struct FDuelTeamInfo
{
	class UPawnAllegiance*                             TeamAllegiance;                                           // 0x0000(0x0004) (Edit, Const)
	struct FColor                                      TeamColor;                                                // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowVersusDuelGlobals.DuelTeamPair
// 0x0010
struct FDuelTeamPair
{
	struct FDuelTeamInfo                               ChallengerTeam;                                           // 0x0000(0x0008) (Edit, Const)
	struct FDuelTeamInfo                               CompetitorTeam;                                           // 0x0008(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.WillowVersusDuelInfo.TempWeaponStruct
// 0x0048
struct FTempWeaponStruct
{
	struct FWeaponDefinitionData                       DefinitionData;                                           // 0x0000(0x0044)
	int                                                Ammo;                                                     // 0x0044(0x0004)
};

// ScriptStruct WillowGame.WillowVersusDuelInfo.TempProfileStruct
// 0x0018
struct FTempProfileStruct
{
	class UPawnAllegiance*                             Allegiance;                                               // 0x0000(0x0004)
	float                                              Health;                                                   // 0x0004(0x0004)
	float                                              Shield;                                                   // 0x0008(0x0004)
	TArray<struct FTempWeaponStruct>                   Weapons;                                                  // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.InventoryDataProviderGFxObject.HeavyInventoryElement
// 0x0014
struct FHeavyInventoryElement
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FColor                                      Color;                                                    // 0x000C(0x0004)
	class UObject*                                     Data;                                                     // 0x0010(0x0004)
};

// ScriptStruct WillowGame.GFxTextListContainer.OneTimeDataElement
// 0x002C
struct FOneTimeDataElement
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Icon;                                                     // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     IconOverride;                                             // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	struct FColor                                      TextColor;                                                // 0x0024(0x0004)
	class UObject*                                     Data;                                                     // 0x0028(0x0004)
};

// ScriptStruct WillowGame.GFxTextListContainer.GFxTextEntry
// 0x0005
struct FGFxTextEntry
{
	int                                                ArrayIdx;                                                 // 0x0000(0x0004)
	unsigned char                                      Kind;                                                     // 0x0004(0x0001)
};

// ScriptStruct WillowGame.GFxTextListContainer.SortableDataElement
// 0x0010
struct FSortableDataElement
{
	unsigned long                                      bFiltered : 1;                                            // 0x0000(0x0004)
	int                                                OneTimeIdx;                                               // 0x0004(0x0004)
	int                                                CategoryIdx;                                              // 0x0008(0x0004)
	class UObject*                                     Data;                                                     // 0x000C(0x0004)
};

// ScriptStruct WillowGame.InventoryDataProviderGFxObject.SortFilterConfiguration
// 0x0010
struct FSortFilterConfiguration
{
	unsigned char                                      SortType;                                                 // 0x0000(0x0001)
	unsigned char                                      FilterType;                                               // 0x0001(0x0001)
	unsigned char                                      CategoryType;                                             // 0x0002(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FString                                     SortTitleLookupKey;                                       // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDeclarations.PanelInfo
// 0x0040
struct FPanelInfo
{
	struct FName                                       PanelName;                                                // 0x0000(0x0008) (Edit)
	struct FVector                                     PanelFocused;                                             // 0x0008(0x000C) (Edit)
	struct FVector                                     PanelUnfocused;                                           // 0x0014(0x000C) (Edit)
	struct FVector                                     PanelCompare;                                             // 0x0020(0x000C) (Edit)
	unsigned char                                      PanelBackground;                                          // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                CellWidth;                                                // 0x0030(0x0004) (Edit)
	int                                                CellHeight;                                               // 0x0034(0x0004) (Edit)
	int                                                TextureWidth;                                             // 0x0038(0x0004) (Edit)
	int                                                TextureHeight;                                            // 0x003C(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfoRelativeToPanel
// 0x0018
struct FCardInfoRelativeToPanel
{
	struct FName                                       PanelName;                                                // 0x0000(0x0008) (Edit)
	struct FVector                                     ComparePosition;                                          // 0x0008(0x000C) (Edit)
	float                                              CompareScale;                                             // 0x0014(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfo
// 0x003C
struct FCardInfo
{
	struct FName                                       CardName;                                                 // 0x0000(0x0008) (Edit)
	int                                                CellWidth;                                                // 0x0008(0x0004) (Edit)
	int                                                CellHeight;                                               // 0x000C(0x0004) (Edit)
	int                                                TextureWidth;                                             // 0x0010(0x0004) (Edit)
	int                                                TextureHeight;                                            // 0x0014(0x0004) (Edit)
	struct FString                                     MainPlayerLinkageName;                                    // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FString                                     SplitPlayerLinkageName;                                   // 0x0024(0x000C) (Edit, NeedCtorLink)
	TArray<struct FCardInfoRelativeToPanel>            CompareSettings;                                          // 0x0030(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.BaseTopLevelPanelGFxObject.ItemCardInfo
// 0x0010
struct FItemCardInfo
{
	struct FName                                       CardName;                                                 // 0x0000(0x0008)
	int                                                ContentIdx;                                               // 0x0008(0x0004)
	class UItemCardGFxObject*                          ItemCard;                                                 // 0x000C(0x0004)
};

// ScriptStruct WillowGame.HUDWidget_Minimap.MinimapIconClip
// 0x0010
struct FMinimapIconClip
{
	class UGFxObject*                                  Object;                                                   // 0x0000(0x0004) (Transient)
	unsigned long                                      bVisible : 1;                                             // 0x0004(0x0004) (Transient)
	struct FVector2D                                   MapPos;                                                   // 0x0008(0x0008) (Transient)
};

// ScriptStruct WillowGame.HUDWidget_Minimap.MinimapObjectiveIconClip
// 0x000C (0x0010 - 0x001C)
struct FMinimapObjectiveIconClip : public FMinimapIconClip
{
	class UGFxObject*                                  OptionalClip;                                             // 0x0010(0x0004) (Transient)
	class UGFxObject*                                  AboveClip;                                                // 0x0014(0x0004) (Transient)
	class UGFxObject*                                  BelowClip;                                                // 0x0018(0x0004) (Transient)
};

// ScriptStruct WillowGame.HUDWidget_Missions.MissionWidgetMessage
// 0x0024
struct FMissionWidgetMessage
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit, Transient)
	unsigned char                                      Category;                                                 // 0x0001(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	class UMissionDefinition*                          MissDef;                                                  // 0x0004(0x0004) (Edit, Transient)
	class UMissionObjectiveDefinition*                 ObjDef;                                                   // 0x0008(0x0004) (Edit, Transient)
	unsigned long                                      bBranch : 1;                                              // 0x000C(0x0004) (Edit, Transient)
	int                                                Slot;                                                     // 0x0010(0x0004) (Edit, Transient)
	int                                                SwapFromSlot;                                             // 0x0014(0x0004) (Edit, Transient)
	unsigned long                                      bSkipAnim : 1;                                            // 0x0018(0x0004) (Edit, Transient)
	int                                                ModuleNum;                                                // 0x001C(0x0004) (Edit, Transient)
	float                                              EventTime;                                                // 0x0020(0x0004) (Edit, Transient)
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.WorldSpaceIcon
// 0x0018
struct FWorldSpaceIcon
{
	class UGFxObject*                                  IconClip;                                                 // 0x0000(0x0004) (Transient)
	class UGFxObject*                                  ArrowClip;                                                // 0x0004(0x0004) (Transient)
	unsigned long                                      bOccluded : 1;                                            // 0x0008(0x0004) (Transient)
	float                                              NextOcclusionTestTime;                                    // 0x000C(0x0004) (Transient)
	float                                              CachedTextboxWidth;                                       // 0x0010(0x0004) (Transient)
	float                                              CachedTextboxHeight;                                      // 0x0014(0x0004) (Transient)
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.ObjectiveIcon
// 0x002C (0x0018 - 0x0044)
struct FObjectiveIcon : public FWorldSpaceIcon
{
	unsigned long                                      bInWorldSpace : 1;                                        // 0x0018(0x0004) (Transient)
	float                                              TransitionStartTime;                                      // 0x001C(0x0004) (Transient)
	struct FVector                                     LastLocation;                                             // 0x0020(0x000C) (Transient)
	float                                              FadeAlpha;                                                // 0x002C(0x0004) (Transient)
	float                                              FadeScale;                                                // 0x0030(0x0004) (Transient)
	class UGFxObject*                                  ObjectiveClip;                                            // 0x0034(0x0004) (Transient)
	class UGFxObject*                                  AboveClip;                                                // 0x0038(0x0004) (Transient)
	class UGFxObject*                                  BelowClip;                                                // 0x003C(0x0004) (Transient)
	class UGFxObject*                                  OptionalClip;                                             // 0x0040(0x0004) (Transient)
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.PlayerIcon
// 0x0008 (0x0018 - 0x0020)
struct FPlayerIcon : public FWorldSpaceIcon
{
	class UGFxObject*                                  TextClip;                                                 // 0x0018(0x0004) (Transient)
	class UGFxObject*                                  StateClip;                                                // 0x001C(0x0004) (Transient)
};

// ScriptStruct WillowGame.SkillTreeGFxObject.SkillTreeUICell
// 0x001C
struct FSkillTreeUICell
{
	int                                                BranchNum;                                                // 0x0000(0x0004)
	int                                                TierNum;                                                  // 0x0004(0x0004)
	int                                                CellNum;                                                  // 0x0008(0x0004)
	class UGFxObject*                                  Clip_Cell;                                                // 0x000C(0x0004)
	class UGFxObject*                                  Clip_Highlight;                                           // 0x0010(0x0004)
	class UGFxObject*                                  Clip_Outline;                                             // 0x0014(0x0004)
	class UGFxObject*                                  Clip_Overclocked;                                         // 0x0018(0x0004)
};

// ScriptStruct WillowGame.SkillTreeGFxObject.artifact_datum
// 0x0014
struct Fartifact_datum
{
	int                                                SkillIndex;                                               // 0x0000(0x0004)
	int                                                Grade;                                                    // 0x0004(0x0004)
	struct FString                                     Name;                                                     // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.StatusMenuMapGFxObject.MapObjectData
// 0x0088
struct FMapObjectData
{
	class AWillowPlayerController*                     Player;                                                   // 0x0000(0x0004)
	class AWillowVehicle*                              Vehicle;                                                  // 0x0004(0x0004)
	class ALevelLandmark*                              Landmark;                                                 // 0x0008(0x0004)
	class AWillowInteractiveObject*                    ClientInteractiveObject;                                  // 0x000C(0x0004)
	class AWillowPlayerReplicationInfo*                WPRI;                                                     // 0x0010(0x0004)
	unsigned long                                      bWaypoint : 1;                                            // 0x0014(0x0004)
	unsigned long                                      bAreaWaypoint : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bOptional : 1;                                            // 0x0014(0x0004)
	int                                                WaypointIndex;                                            // 0x0018(0x0004)
	struct FVector                                     CustomObjectLoc;                                          // 0x001C(0x000C)
	unsigned long                                      bIsDirty : 1;                                             // 0x0028(0x0004)
	struct FVector2D                                   TransformedLocation;                                      // 0x002C(0x0008)
	float                                              Angle;                                                    // 0x0034(0x0004)
	float                                              Scale;                                                    // 0x0038(0x0004)
	struct FString                                     AS_IconClipPath;                                          // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     AS_IconClipFrame;                                         // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     AS_IconClipInnerFrame;                                    // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     AS_IconPath;                                              // 0x0060(0x000C) (NeedCtorLink)
	unsigned long                                      bShowInfoBox : 1;                                         // 0x006C(0x0004)
	struct FString                                     InfoBoxTitle;                                             // 0x0070(0x000C) (NeedCtorLink)
	struct FString                                     InfoBoxDesc;                                              // 0x007C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.StatusMenuMapGFxObject.ClipRect
// 0x0010
struct FClipRect
{
	float                                              Top;                                                      // 0x0000(0x0004)
	float                                              Right;                                                    // 0x0004(0x0004)
	float                                              Bottom;                                                   // 0x0008(0x0004)
	float                                              Left;                                                     // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowGFxDialogBox.DialogBoxButton
// 0x0038
struct FDialogBoxButton
{
	struct FString                                     Caption;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     TipText;                                                  // 0x000C(0x000C) (NeedCtorLink)
	struct FName                                       Tag;                                                      // 0x0018(0x0008)
	TArray<struct FName>                               Keys;                                                     // 0x0020(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             OnButtonClicked;                                          // 0x002C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGFxDialogBox.DialogBoxLayout
// 0x001C
struct FDialogBoxLayout
{
	struct FName                                       LayoutTag;                                                // 0x0000(0x0008)
	struct FName                                       CancelTag;                                                // 0x0008(0x0008)
	TArray<struct FDialogBoxButton>                    Buttons;                                                  // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.LANServerBrowserGFxMovie.ResultEntry
// 0x002C
struct FResultEntry
{
	struct FOnlineGameSearchResult                     Game;                                                     // 0x0000(0x0008)
	struct FString                                     Name;                                                     // 0x0008(0x000C) (NeedCtorLink)
	int                                                ExpLevel;                                                 // 0x0014(0x0004)
	int                                                Mission;                                                  // 0x0018(0x0004)
	int                                                PlayThrough;                                              // 0x001C(0x0004)
	int                                                NumPlayers;                                               // 0x0020(0x0004)
	int                                                MaxPlayers;                                               // 0x0024(0x0004)
	int                                                Ping;                                                     // 0x0028(0x0004)
};

// ScriptStruct WillowGame.PCContextMenuObject.PCContextMenuItem
// 0x0018
struct FPCContextMenuItem
{
	struct FString                                     Caption;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Action;                                                   // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.StatusMenuExGFxMovie.CachedInvData
// 0x0009
struct FCachedInvData
{
	class AWillowInventory*                            Inv;                                                      // 0x0000(0x0004)
	unsigned long                                      bReadied : 1;                                             // 0x0004(0x0004)
	unsigned char                                      TrashOrFavorite;                                          // 0x0008(0x0001)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.TrackedSkillIconState
// 0x0010
struct FTrackedSkillIconState
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class USwfMovie*                                   Icon;                                                     // 0x0004(0x0004)
	int                                                PercentComplete;                                          // 0x0008(0x0004)
	int                                                StackCount;                                               // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.AvailableTrackedSkill
// 0x0008
struct FAvailableTrackedSkill
{
	class USkillDefinition*                            SkillDef;                                                 // 0x0000(0x0004)
	int                                                RemappedSlot;                                             // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.CriticalTextMessage
// 0x0020
struct FCriticalTextMessage
{
	struct FString                                     Message;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Title;                                                    // 0x000C(0x000C) (NeedCtorLink)
	float                                              DestroyTime;                                              // 0x0018(0x0004)
	struct FColor                                      DrawColor;                                                // 0x001C(0x0004)
};

// ScriptStruct WillowGame.ActionSkill.CachedWeaponInfo
// 0x0028
struct FCachedWeaponInfo
{
	int                                                CachedClipSize;                                           // 0x0000(0x0004) (Transient)
	int                                                CachedAmmoInClip;                                         // 0x0004(0x0004) (Transient)
	int                                                CachedAmmoNotInClip;                                      // 0x0008(0x0004) (Transient)
	unsigned char                                      CachedWeaponIsReloading;                                  // 0x000C(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     CachedWeaponType;                                         // 0x0010(0x000C) (Transient, NeedCtorLink)
	class USwfMovie*                                   CachedWeaponTypeDLCClip;                                  // 0x001C(0x0004) (Transient)
	int                                                IsReloadIconDisplayed;                                    // 0x0020(0x0004) (Transient)
	int                                                IsInteractionIconDisplayed;                               // 0x0024(0x0004) (Transient)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.CriticalTextMessageArray
// 0x000C
struct FCriticalTextMessageArray
{
	TArray<struct FCriticalTextMessage>                MessageArray;                                             // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.HUDInteractionIcon
// 0x0028
struct FHUDInteractionIcon
{
	struct FInteractionIconWithOverrides               Icons[0x2];                                               // 0x0000(0x0014)
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsLine
// 0x0010
struct FCreditsLine
{
	class UCreditsLineDefinition*                      LineType;                                                 // 0x0000(0x0004) (Edit)
	struct FString                                     Text;                                                     // 0x0004(0x000C) (Edit, NeedCtorLink, EditTextBox)
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsTextureInfo
// 0x000C
struct FCreditsTextureInfo
{
	struct FString                                     TexturePath;                                              // 0x0000(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponScopeGFxDefinition.LabelToLinkageMapping
// 0x0018
struct FLabelToLinkageMapping
{
	struct FString                                     LabelName;                                                // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LinkageName;                                              // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGFxThirdPersonDefinition.ThirdPersonMenuView
// 0x004C
struct FThirdPersonMenuView
{
	struct FVector                                     RelativeCameraLocation;                                   // 0x0000(0x000C) (Edit)
	struct FRotator                                    RelativeCameraRotation;                                   // 0x000C(0x000C) (Edit)
	struct FVector                                     RelativeMenuLocation;                                     // 0x0018(0x000C) (Edit)
	struct FRotator                                    RelativeMenuRotation;                                     // 0x0024(0x000C) (Edit)
	float                                              CameraYawMin;                                             // 0x0030(0x0004) (Edit)
	float                                              CameraYawMax;                                             // 0x0034(0x0004) (Edit)
	float                                              VerticalSplitscreenCameraOffset;                          // 0x0038(0x0004) (Edit)
	float                                              VerticalSplitscreenCameraSpread;                          // 0x003C(0x0004) (Edit)
	struct FName                                       FocusBoneName;                                            // 0x0040(0x0008) (Edit)
	float                                              FocusScreenYaw;                                           // 0x0048(0x0004) (Edit)
};

// ScriptStruct WillowGame.StatusMenuGFxDefinition.DirectionData
// 0x0028
struct FDirectionData
{
	struct FName                                       This;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       Left;                                                     // 0x0008(0x0008) (Edit)
	struct FName                                       Right;                                                    // 0x0010(0x0008) (Edit)
	struct FName                                       Up;                                                       // 0x0018(0x0008) (Edit)
	struct FName                                       Down;                                                     // 0x0020(0x0008) (Edit)
};

// ScriptStruct WillowGame.WillowDeclarations.MissionStatusPresentation
// 0x0010
struct FMissionStatusPresentation
{
	struct FColor                                      TextColor;                                                // 0x0000(0x0004) (Edit)
	struct FString                                     IconFrame;                                                // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowHUDGFxMovieDefinition.ScaledHUDElement
// 0x0010
struct FScaledHUDElement
{
	struct FString                                     ElementName;                                              // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UHUDScalingAnchorDefinition*                 Anchor;                                                   // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowHUDGFxMovie.InjuredStringReplacementSet
// 0x0030
struct FInjuredStringReplacementSet
{
	TArray<struct FName>                               Skills;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     NewPlayerInjuredString;                                   // 0x000C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NewInjuredTooltipString1;                                 // 0x0018(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     NewInjuredTooltipString2;                                 // 0x0024(0x000C) (Edit, Const, Localized, NeedCtorLink)
};

// ScriptStruct WillowGame.BehaviorAliasLookupDefinition.BehaviorAliasReference
// 0x0010
struct FBehaviorAliasReference
{
	class UBehaviorAliasDefinition*                    BehaviorAlias;                                            // 0x0000(0x0004) (Edit, Const)
	TArray<class UBehaviorBase*>                       BehaviorList;                                             // 0x0004(0x000C) (Edit, Const, NeedCtorLink, EditInline)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointDebugData
// 0x0014
struct FCombatPointDebugData
{
	unsigned long                                      bBest : 1;                                                // 0x0000(0x0004)
	float                                              Score;                                                    // 0x0004(0x0004)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointData
// 0x0038
struct FCombatPointData
{
	int                                                Slot;                                                     // 0x0000(0x0004) (Edit, EditConst)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, EditConst)
	struct FActorReference                             Actor;                                                    // 0x0010(0x0014) (Edit, EditConst)
	unsigned char                                      ConstraintType;                                           // 0x0024(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TArray<class UPopulationSpawnedActorTagDefinition*> ConstraintTags;                                           // 0x0028(0x000C) (Edit, EditConst, NeedCtorLink)
	unsigned long                                      bClaimed : 1;                                             // 0x0034(0x0004) (Transient)
};

// ScriptStruct WillowGame.Action_Drive_Pursuit.EnemyBreadCrumbStruct
// 0x0010
struct FEnemyBreadCrumbStruct
{
	struct FVector                                     pos;                                                      // 0x0000(0x000C)
	class AWillowVehicleCombatArea*                    CombatArea;                                               // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.EmitterTemplateOptions
// 0x000C
struct FEmitterTemplateOptions
{
	class UParticleSystem*                             DefaultTemplate;                                          // 0x0000(0x0004)
	class UParticleSystem*                             CensoredTemplateAlternative;                              // 0x0004(0x0004)
	unsigned long                                      bEffectEligibleForCensoring : 1;                          // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.FloatParameter
// 0x000C
struct FFloatParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	float                                              Value;                                                    // 0x0008(0x0004)
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.VectorParameter
// 0x0014
struct FVectorParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	struct FVector                                     Value;                                                    // 0x0008(0x000C)
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.ColorParameter
// 0x000C
struct FColorParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	struct FColor                                      Value;                                                    // 0x0008(0x0004)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectData
// 0x002C
struct FDOFEffectData
{
	float                                              FalloffExponent;                                          // 0x0000(0x0004) (Edit)
	float                                              BlurKernelSize;                                           // 0x0004(0x0004) (Edit)
	float                                              MaxNearBlurAmount;                                        // 0x0008(0x0004) (Edit)
	float                                              MaxFarBlurAmount;                                         // 0x000C(0x0004) (Edit)
	struct FColor                                      ModulateBlurColor;                                        // 0x0010(0x0004) (Edit)
	unsigned char                                      FocusType;                                                // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              FocusInnerRadius;                                         // 0x0018(0x0004) (Edit)
	float                                              FocusDistance;                                            // 0x001C(0x0004) (Edit)
	struct FVector                                     FocusPosition;                                            // 0x0020(0x000C) (Edit)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponAccessorySetup
// 0x001C
struct FWeaponAccessorySetup
{
	struct FName                                       WeaponArchetypeName;                                      // 0x0000(0x0008) (Edit)
	class UGestaltSkeletalMeshDefinition*              AccessoryDefinition;                                      // 0x0008(0x0004) (Edit)
	class UGestaltPartMatrices*                        AccessoryTransforms;                                      // 0x000C(0x0004) (Edit)
	TArray<struct FGestaltPartPermutation>             AccessoryParts;                                           // 0x0010(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct WillowGame.DeveloperPerksDefinition.DeveloperData
// 0x002C
struct FDeveloperData
{
	struct FString                                     Gamertag;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     UniqueId;                                                 // 0x000C(0x000C) (Edit, NeedCtorLink)
	unsigned char                                      Platform;                                                 // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	TArray<unsigned char>                              UnlocksGamerpics;                                         // 0x001C(0x000C) (NeedCtorLink)
	unsigned long                                      bEligibleForGearboxCustomizations : 1;                    // 0x0028(0x0004) (Edit)
};

// ScriptStruct WillowGame.DeveloperPerksDefinition.PerkData
// 0x001C
struct FPerkData
{
	TArray<struct FName>                               ButtonChain;                                              // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     Command;                                                  // 0x000C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bMustBeDeveloper : 1;                                     // 0x0018(0x0004) (Edit)
};

// ScriptStruct WillowGame.IMission.ObjectiveStatusData
// 0x000C
struct FObjectiveStatusData
{
	TArray<int>                                        Objectives;                                               // 0x0000(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGFxColiseumOverlayMovie.PlayerLineInfo
// 0x0020
struct FPlayerLineInfo
{
	unsigned long                                      bUpdatedThisRound : 1;                                    // 0x0000(0x0004)
	struct FString                                     Avatar;                                                   // 0x0004(0x000C) (NeedCtorLink)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0010(0x0004)
	int                                                PlayerID;                                                 // 0x0014(0x0004)
	int                                                RoundKills;                                               // 0x0018(0x0004)
	int                                                TotalKills;                                               // 0x001C(0x0004)
};

// ScriptStruct WillowGame.MarketingUnlockInventoryDefinition.UnlockItemData
// 0x001C
struct FUnlockItemData
{
	int                                                GameStage;                                                // 0x0000(0x0004) (Edit)
	TArray<class UInventoryBalanceDefinition*>         UnlockItems;                                              // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
	TArray<class UItemPoolDefinition*>                 UnlockItemPools;                                          // 0x0010(0x000C) (Edit, Const, NeedCtorLink)
};

// ScriptStruct WillowGame.FrontendGFxMovie.MessageOfTheDay
// 0x001C
struct FMessageOfTheDay
{
	struct FString                                     Header;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Body;                                                     // 0x000C(0x000C) (NeedCtorLink)
	int                                                DisplayTime;                                              // 0x0018(0x0004)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.ContentState
// 0x0008
struct FContentState
{
	int                                                LicensedMask;                                             // 0x0000(0x0004)
	int                                                InstalledMask;                                            // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowCheatManager.BalanceMeResourceUpgradePath
// 0x0018
struct FBalanceMeResourceUpgradePath
{
	struct FString                                     ResourceName;                                             // 0x0000(0x000C) (NeedCtorLink)
	TArray<int>                                        PlayerLevelForEachUpgrade;                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowCheatManager.StatusEffectNameMapping
// 0x0018
struct FStatusEffectNameMapping
{
	struct FString                                     StatusEffectName;                                         // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     StatusEffectDefinitionName;                               // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.Behavior_DropProjectile.DropProjectileBehaviorSequenceStateData
// 0x000C
struct FDropProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.Behavior_RemoveInstanceData.RemoveObject
// 0x0008
struct UBehavior_RemoveInstanceData_FRemoveObject
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
};

// ScriptStruct WillowGame.Behavior_SpawnProjectileFromImpact.ProjectileBehaviorSequenceStateData
// 0x000C
struct UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData
{
	unsigned char                                      Action;                                                   // 0x0000(0x0001) (Edit, Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SequenceName;                                             // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.NameExpressionData
// 0x0024
struct FNameExpressionData
{
	TArray<struct FAttributeExpressionData>            Expressions;                                              // 0x0000(0x000C) (Edit, Const, NeedCtorLink)
	struct FString                                     PreModifier;                                              // 0x000C(0x000C) (Edit, Const, Localized, NeedCtorLink)
	struct FString                                     PostModifier;                                             // 0x0018(0x000C) (Edit, Const, Localized, NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGFxLobbyLoadCharacter.LoadCharacterData
// 0x0074
struct FLoadCharacterData
{
	int                                                SaveDataId;                                               // 0x0000(0x0004)
	int                                                CharLevel;                                                // 0x0004(0x0004)
	struct FString                                     CharName;                                                 // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     CharClass;                                                // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     PlayThrough;                                              // 0x0020(0x000C) (NeedCtorLink)
	struct FString                                     ActiveMission;                                            // 0x002C(0x000C) (NeedCtorLink)
	struct FString                                     PlotMission;                                              // 0x0038(0x000C) (NeedCtorLink)
	struct FString                                     CharSaveDate;                                             // 0x0044(0x000C) (NeedCtorLink)
	struct FString                                     CharPlayedTime;                                           // 0x0050(0x000C) (NeedCtorLink)
	int                                                CharPlayedTimeInt;                                        // 0x005C(0x0004)
	struct FGuid                                       SaveGuid;                                                 // 0x0060(0x0010)
	class UDownloadableCharacterDefinition*            DlcCharDef;                                               // 0x0070(0x0004)
};

// ScriptStruct WillowGame.MarketplaceGFxMovie.MarketPlaceFilter
// 0x0024
struct FMarketPlaceFilter
{
	struct FString                                     Tag;                                                      // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Caption;                                                  // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     Filter;                                                   // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.MatchmakingLobbyGFxMovie.MatchmakingResultEntry
// 0x0024
struct FMatchmakingResultEntry
{
	struct FString                                     MatchTypeIconFrameName;                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     StatusIconFrameName;                                      // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     Message;                                                  // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowScrollingList.DataProviderInfo
// 0x000C
struct FDataProviderInfo
{
	FScriptInterface                                   DataProvider;                                             // 0x0000(0x0008)
	int                                                SelectedIndex;                                            // 0x0008(0x0004)
};

// ScriptStruct WillowGame.TestMapsListDefinition.TestMapsListDatum
// 0x0018
struct FTestMapsListDatum
{
	unsigned long                                      bUseLoader : 1;                                           // 0x0000(0x0004) (Edit, Const)
	struct FString                                     MapDisplayName;                                           // 0x0004(0x000C) (Edit, Const, NeedCtorLink)
	struct FName                                       MapName;                                                  // 0x0010(0x0008) (Edit, Const)
};

// ScriptStruct WillowGame.GFxTextListContent.FlashTextEntry
// 0x0020
struct FFlashTextEntry
{
	struct FString                                     TextEntry;                                                // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     IconFrameLabel;                                           // 0x000C(0x000C) (NeedCtorLink)
	unsigned char                                      ArrayType;                                                // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	class UObject*                                     Obj;                                                      // 0x001C(0x0004)
};

// ScriptStruct WillowGame.PlayerSaveGame.UnloadableDlcEchoCallData
// 0x0010
struct FUnloadableDlcEchoCallData
{
	struct FString                                     CallDefName;                                              // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                DlcPackageId;                                             // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.HUDWidget_WorldSpace.WorldSpacePlayerInfo
// 0x0008
struct FWorldSpacePlayerInfo
{
	class AWillowPlayerReplicationInfo*                WPRI;                                                     // 0x0000(0x0004) (Transient)
	class AWillowPlayerPawn*                           WPP;                                                      // 0x0004(0x0004) (Transient)
};

// ScriptStruct WillowGame.IDesignerAttributeProvider.DesignerAttributeDefaultValueData
// 0x0014
struct FDesignerAttributeDefaultValueData
{
	class UDesignerAttributeDefinition*                DesignerAttribute;                                        // 0x0000(0x0004) (Edit)
	struct FAttributeInitializationData                BaseValue;                                                // 0x0004(0x0010) (Edit)
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimStateData
// 0x0004
struct FSimpleAnimStateData
{
	int                                                AnimState;                                                // 0x0000(0x0004)
};

// ScriptStruct WillowGame.LiftActionSkill.LiftBodyPair
// 0x0008
struct FLiftBodyPair
{
	class UPopulationBodyTag*                          BodyTag;                                                  // 0x0000(0x0004) (Edit, Const)
	class UPhaseLockDefinition*                        PhaseLockDef;                                             // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.MissionPopulationAspect.MissionItemPoolData
// 0x0010
struct FMissionItemPoolData
{
	unsigned long                                      bItemAlwaysGranted : 1;                                   // 0x0000(0x0004) (Edit)
	class UMissionObjectiveDefinition*                 ItemObjective;                                            // 0x0004(0x0004) (Edit)
	class UMissionDefinition*                          DirectiveDefinition;                                      // 0x0008(0x0004) (Edit)
	class UItemPoolDefinition*                         ItemPool;                                                 // 0x000C(0x0004) (Edit)
};

// ScriptStruct WillowGame.MissionTracker.MissionSetData
// 0x0014
struct FMissionSetData
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008)
	TArray<class UMissionDefinition*>                  Missions;                                                 // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowScrollingListDataProviderOptionsBase.DescriptionEntry
// 0x0010
struct FDescriptionEntry
{
	int                                                EventID;                                                  // 0x0000(0x0004)
	struct FString                                     Description;                                              // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerClassCountAttributeValueResolver.PlayerClassCountOverride
// 0x0008
struct FPlayerClassCountOverride
{
	int                                                Override;                                                 // 0x0000(0x0004)
	class UPlayerClassIdentifierDefinition*            PlayerClassIdDef;                                         // 0x0004(0x0004)
};

// ScriptStruct WillowGame.ReferenceSet.ObjectReference
// 0x0004
struct FObjectReference
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0004) (Edit)
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.ViewProfile
// 0x0070
struct FViewProfile
{
	class AWillowPlayerController*                     InPlayer;                                                 // 0x0000(0x0004)
	struct FVector                                     ViewNormal;                                               // 0x0004(0x000C)
	struct FVector                                     ViewLocation;                                             // 0x0010(0x000C)
	struct FRotator                                    ViewRotation;                                             // 0x001C(0x000C)
	float                                              ViewNormalDotViewNormal;                                  // 0x0028(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FMatrix                                     ViewMatrix;                                               // 0x0030(0x0040)
};

// ScriptStruct WillowGame.WillowExplosionImpactDefinition.DecalData
// 0x0020
struct FDecalData
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x000C) (Edit, Const, NeedCtorLink)
	float                                              Width;                                                    // 0x000C(0x0004) (Edit, Const)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, Const)
	float                                              MinScale;                                                 // 0x0014(0x0004) (Edit, Const)
	float                                              MaxScale;                                                 // 0x0018(0x0004) (Edit, Const)
	unsigned long                                      RandomRotation : 1;                                       // 0x001C(0x0004) (Edit, Const)
	unsigned long                                      CreateNewMaterialInstanceConstant : 1;                    // 0x001C(0x0004) (Edit, Const)
};

// ScriptStruct WillowGame.WillowGFxEditDialog.MenuItemCallback
// 0x0014
struct FMenuItemCallback
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	struct FScriptDelegate                             OnClicked;                                                // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGFxMenuHelperSaveGame.SaveResult
// 0x00C8
struct FSaveResult
{
	int                                                charID;                                                   // 0x0000(0x0004)
	struct FPlayerSaveData                             Data;                                                     // 0x0004(0x00C4) (NeedCtorLink)
};

// ScriptStruct WillowGame.WillowProjectile.HomingTargetedActorInfo
// 0x0008
struct FHomingTargetedActorInfo
{
	class AActor*                                      HomingActor;                                              // 0x0000(0x0004)
	int                                                HomingActorCount;                                         // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowObstacleUtility.ObstacleSegment
// 0x0018
struct FObstacleSegment
{
	struct FVector2D                                   P1;                                                       // 0x0000(0x0008)
	struct FVector2D                                   P2;                                                       // 0x0008(0x0008)
	struct FVector2D                                   Normal;                                                   // 0x0010(0x0008)
};

// ScriptStruct WillowGame.WillowObstacleUtility.VelocityObstacle
// 0x0048
struct FVelocityObstacle
{
	struct FObstacleSegment                            Segments[0x3];                                            // 0x0000(0x0018)
};

// ScriptStruct WillowGame.WillowPlayerPawnDataManager.AsyncDataRequest
// 0x002C
struct FAsyncDataRequest
{
	unsigned char                                      RequestType;                                              // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     ObjectPath;                                               // 0x0004(0x000C) (NeedCtorLink)
	class UObject*                                     Instigator;                                               // 0x0010(0x0004)
	class AWillowPlayerController*                     PlayerContext;                                            // 0x0014(0x0004)
	class UObject*                                     Payload;                                                  // 0x0018(0x0004)
	struct FName                                       CallbackEventName;                                        // 0x001C(0x0008)
	int                                                IntParam;                                                 // 0x0024(0x0004)
	float                                              FloatParam;                                               // 0x0028(0x0004)
};

// ScriptStruct WillowGame.WillowPopulationMaster.PopOppSummary
// 0x0010
struct FPopOppSummary
{
	struct FString                                     Summary;                                                  // 0x0000(0x000C) (NeedCtorLink)
	int                                                Count;                                                    // 0x000C(0x0004)
};

// ScriptStruct WillowGame.WillowScrollingListDataProviderKeyboardMouseOptions.KeyBindInfo
// 0x0028
struct FKeyBindInfo
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	struct FName                                       ActionName;                                               // 0x0008(0x0008)
	struct FString                                     Caption;                                                  // 0x0010(0x000C) (NeedCtorLink)
	struct FName                                       CurrentKey;                                               // 0x001C(0x0008)
	class UGFxObject*                                  Object;                                                   // 0x0024(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.SkillIndexLevelRequirementPair
// 0x0008
struct FSkillIndexLevelRequirementPair
{
	int                                                SkillIndex;                                               // 0x0000(0x0004)
	int                                                PlayerLevelRequirement;                                   // 0x0004(0x0004)
};

// ScriptStruct WillowGame.WillowUIInteraction.ItemPartSettings
// 0x0014
struct FItemPartSettings
{
	class UItemPartListDefinition*                     PartList;                                                 // 0x0000(0x0004)
	class UItemPartDefinition*                         Part;                                                     // 0x0004(0x0004)
	struct FString                                     PartName;                                                 // 0x0008(0x000C) (NeedCtorLink)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

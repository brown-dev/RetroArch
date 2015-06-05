/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2015 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MENU_HASH_H__
#define MENU_HASH_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MENU_LABEL_RESET                                                       0x10474288U
#define MENU_LABEL_SLOWMOTION                                                  0x6a269ea0U
#define MENU_LABEL_HOLD_FAST_FORWARD                                           0xebe2e4cdU
#define MENU_LABEL_CHEAT_TOGGLE                                                0xe515e0cbU
#define MENU_LABEL_PAUSE_TOGGLE                                                0x557634e4U
#define MENU_LABEL_SAVE_STATE                                                  0x54a257f4U
#define MENU_LABEL_LOAD_STATE                                                  0xe8c5dae5U
#define MENU_LABEL_REWIND                                                      0x1931d5aeU
#define MENU_LABEL_NETPLAY_FLIP_PLAYERS                                        0x801425abU
#define MENU_LABEL_CHEAT_INDEX_MINUS                                           0x57f58b6cU
#define MENU_LABEL_CHEAT_INDEX_PLUS                                            0x678542a4U
#define MENU_LABEL_SCREENSHOT_DIRECTORY                                        0x552612d7U
#define MENU_LABEL_SHADER_NEXT                                                 0x54d359baU
#define MENU_LABEL_SHADER_PREV                                                 0x54d4a758U
#define MENU_LABEL_FRAME_ADVANCE                                               0xd80302a1U
#define MENU_LABEL_MOVIE_RECORD_TOGGLE                                         0xa2d2ff04U
#define MENU_LABEL_L_X_PLUS                                                    0xd7370d4bU
#define MENU_LABEL_L_X_MINUS                                                   0xbde0aaf3U
#define MENU_LABEL_L_Y_PLUS                                                    0xd98c35ecU
#define MENU_LABEL_L_Y_MINUS                                                   0x0adae7b4U
#define MENU_LABEL_R_X_PLUS                                                    0x60c20a91U
#define MENU_LABEL_R_X_MINUS                                                   0x78cb50f9U
#define MENU_LABEL_R_Y_MINUS                                                   0xc5c58dbaU
#define MENU_LABEL_R_Y_PLUS                                                    0x63173332U
#define MENU_LABEL_VIDEO_SWAP_INTERVAL                                         0x5673ff9aU
#define MENU_LABEL_VIDEO_GPU_SCREENSHOT                                        0xee2fcb44U
#define MENU_LABEL_PAUSE_NONACTIVE                                             0x580bf549U
#define MENU_LABEL_BLOCK_SRAM_OVERWRITE                                        0xc4e88d08U
#define MENU_LABEL_VIDEO_FULLSCREEN                                            0x9506dd4eU
#define MENU_LABEL_CORE_SPECIFIC_CONFIG                                        0x3c9a55e8U
#define MENU_LABEL_RGUI_SHOW_START_SCREEN                                      0x6b38f0e8U
#define MENU_LABEL_VIDEO_BLACK_FRAME_INSERTION                                 0x53477f5cU
#define MENU_LABEL_VIDEO_HARD_SYNC_FRAMES                                      0xce0ece13U
#define MENU_LABEL_VIDEO_FRAME_DELAY                                           0xd4aa9df4U
#define MENU_LABEL_SCREENSHOT                                                  0x9a37f083U
#define MENU_LABEL_REWIND_GRANULARITY                                          0xe859cbdfU
#define MENU_LABEL_VIDEO_THREADED                                              0x0626179cU
#define MENU_LABEL_VIDEO_VSYNC                                                 0x09c2d34eU
#define MENU_LABEL_VIDEO_HARD_SYNC                                             0xdcd623b6U
#define MENU_LABEL_SAVESTATE_AUTO_SAVE                                         0xf6f4a05bU
#define MENU_LABEL_SYSTEM_DIRECTORY                                            0x35a6fb9eU
#define MENU_LABEL_VIDEO_DISABLE_COMPOSITION                                   0x5cbb6222U
#define MENU_LABEL_VOLUME_UP                                                   0xa66e9681U
#define MENU_LABEL_VOLUME_DOWN                                                 0xfc64f3d4U
#define MENU_LABEL_LOG_VERBOSITY                                               0x6648c96dU
#define MENU_LABEL_OVERLAY_NEXT                                                0x7a459145U
#define MENU_LABEL_AUDIO_VOLUME                                                0x502173aeU
#define MENU_LABEL_AUDIO_LATENCY                                               0x32695386U
#define MENU_LABEL_NETPLAY_DELAY_FRAMES                                        0x86b2c48dU
#define MENU_LABEL_NETPLAY_SPECTATOR_MODE_ENABLE                               0x6f9a9440U
#define MENU_LABEL_NETPLAY_IP_ADDRESS                                          0xac9a53ffU
#define MENU_LABEL_NETPLAY_MODE                                                0xc1cf6506U
#define MENU_LABEL_PERFCNT_ENABLE                                              0x6823dbddU

#define MENU_LABEL_PAL60_ENABLE                                                0x62bc416eU
#define MENU_LABEL_SYSTEM_BGM_ENABLE                                           0x9287a1c5U

#define MENU_LABEL_FASTFORWARD_RATIO                                           0x3a0c2706U
#define MENU_LABEL_VIDEO_MONITOR_INDEX                                         0xb6fcdc9aU
#define MENU_LABEL_VIDEO_REFRESH_RATE_AUTO                                     0x9addb6cdU
#define MENU_LABEL_VIDEO_ROTATION                                              0x4ce6882bU
#define MENU_LABEL_VIDEO_SCALE                                                 0x09835d63U
#define MENU_LABEL_VIDEO_SMOOTH                                                0x3aabbb35U
#define MENU_LABEL_VIDEO_CROP_OVERSCAN                                         0x861f7a2fU
#define MENU_LABEL_VIDEO_SCALE_INTEGER                                         0x65c4b090U

#define MENU_LABEL_AUDIO_RATE_CONTROL_DELTA                                    0xc8bde3cbU
#define MENU_LABEL_AUDIO_MAX_TIMING_SKEW                                       0x4c96f75cU

#define MENU_LABEL_INPUT_PLAYER1_JOYPAD_INDEX                                  0xfad6ab2fU
#define MENU_LABEL_INPUT_PLAYER2_JOYPAD_INDEX                                  0x3616e4d0U
#define MENU_LABEL_INPUT_PLAYER3_JOYPAD_INDEX                                  0x71571e71U
#define MENU_LABEL_INPUT_PLAYER4_JOYPAD_INDEX                                  0xac975812U
#define MENU_LABEL_INPUT_PLAYER5_JOYPAD_INDEX                                  0xe7d791b3U

#define MENU_LABEL_LIBRETRO_DIR_PATH                                           0x1af1eb72U

#define MENU_LABEL_AUDIO_DEVICE                                                0x2574eac6U

#define MENU_LABEL_REWIND_ENABLE                                               0x9761e074U
#define MENU_LABEL_ENABLE_HOTKEY                                               0xc04037bfU
#define MENU_LABEL_DISK_EJECT_TOGGLE                                           0x49633fbbU
#define MENU_LABEL_DISK_NEXT                                                   0xeeaf6c6eU
#define MENU_LABEL_GRAB_MOUSE_TOGGLE                                           0xb2869aaaU
#define MENU_LABEL_MENU_TOGGLE                                                 0xfb22e3dbU
#define MENU_LABEL_STATE_SLOT_DECREASE                                         0xe48b8082U
#define MENU_LABEL_STATE_SLOT_INCREASE                                         0x36a0cbb0U

#define MENU_LABEL_LIBRETRO_LOG_LEVEL                                          0x57971ac0U

#define MENU_LABEL_INPUT_BIND_DEVICE_ID                                        0xd1ea94ecU
#define MENU_LABEL_INPUT_BIND_DEVICE_TYPE                                      0xf6e9f041U

#define MENU_LABEL_AUTOSAVE_INTERVAL                                           0xecc87351U
#define MENU_LABEL_CONFIG_SAVE_ON_EXIT                                         0x79b590feU

#define MENU_LABEL_INPUT_DRIVER                                                0x4c087840U
#define MENU_LABEL_INPUT_DRIVER_LINUXRAW                                       0xc33c6b9fU
#define MENU_LABEL_INPUT_DRIVER_UDEV                                           0x7c9eeeb9U

#define MENU_LABEL_VIDEO_DRIVER                                                0x1805a5e7U
#define MENU_LABEL_VIDEO_DRIVER_GL                                             0x005977f8U
#define MENU_LABEL_VIDEO_DRIVER_SDL2                                           0x7c9dd69aU
#define MENU_LABEL_VIDEO_DRIVER_SDL1                                           0x0b88a968U
#define MENU_LABEL_VIDEO_DRIVER_D3D                                            0x0b886340U
#define MENU_LABEL_VIDEO_DRIVER_EXYNOS                                         0xfc37c54bU
#define MENU_LABEL_VIDEO_DRIVER_SUNXI                                          0x10620e3cU

#define MENU_LABEL_AUDIO_RESAMPLER_DRIVER                                      0xedcba9ecU
#define MENU_LABEL_AUDIO_RESAMPLER_DRIVER_SINC                                 0x7c9dec52U
#define MENU_LABEL_AUDIO_RESAMPLER_DRIVER_CC                                   0x0059732bU

#define MENU_LABEL_SAVEFILE_DIRECTORY                                          0x92773488U
#define MENU_LABEL_SAVESTATE_DIRECTORY                                         0x90551289U
#define MENU_LABEL_ASSETS_DIRECTORY                                            0xde1ae8ecU
#define MENU_LABEL_DYNAMIC_WALLPAPERS_DIRECTORY                                0x62f975b8U

#define MENU_LABEL_SLOWMOTION_RATIO                                            0x626b3ffeU
#define MENU_LABEL_INPUT_AXIS_THRESHOLD                                        0xe95c2095U
#define MENU_LABEL_INPUT_TURBO_PERIOD                                          0xf7a97482U
#define MENU_LABEL_INPUT_AUTODETECT_ENABLE                                     0xb1e07facU

#define MENU_LABEL_CAMERA_ALLOW                                                0xc14d302cU
#define MENU_LABEL_LOCATION_ALLOW                                              0xf089275cU

#define MENU_LABEL_TURBO                                                       0x107434f1U




#define MENU_LABEL_RDB_ENTRY_PUBLISHER                                         0x4d7bcdfbU
#define MENU_LABEL_RDB_ENTRY_DEVELOPER                                         0x06f61093U
#define MENU_LABEL_RDB_ENTRY_ORIGIN                                            0xb176aad5U
#define MENU_LABEL_RDB_ENTRY_FRANCHISE                                         0xb31764a0U
#define MENU_LABEL_RDB_ENTRY_ENHANCEMENT_HW                                    0x79ee4f11U
#define MENU_LABEL_RDB_ENTRY_ESRB_RATING                                       0xe138fa3dU
#define MENU_LABEL_RDB_ENTRY_BBFC_RATING                                       0x82dbc01eU
#define MENU_LABEL_RDB_ENTRY_ELSPA_RATING                                      0x0def0906U
#define MENU_LABEL_RDB_ENTRY_PEGI_RATING                                       0xd814cb56U
#define MENU_LABEL_RDB_ENTRY_CERO_RATING                                       0x9d436f5aU
#define MENU_LABEL_RDB_ENTRY_EDGE_MAGAZINE_RATING                              0x9735f631U
#define MENU_LABEL_RDB_ENTRY_EDGE_MAGAZINE_ISSUE                               0xd5706415U
#define MENU_LABEL_RDB_ENTRY_FAMITSU_MAGAZINE_RATING                           0x01a50315U
#define MENU_LABEL_RDB_ENTRY_RELEASE_MONTH                                     0xad2f2c54U
#define MENU_LABEL_RDB_ENTRY_RELEASE_YEAR                                      0x14c9c6bfU
#define MENU_LABEL_RDB_ENTRY_MAX_USERS                                         0xfae91cc4U

#define MENU_LABEL_VIDEO_SHADER_DEFAULT_FILTER                                 0x4468cb1bU
#define MENU_LABEL_VIDEO_SHADER_FILTER_PASS                                    0x1906c38dU
#define MENU_LABEL_VIDEO_SHADER_SCALE_PASS                                     0x18f7b82fU
#define MENU_LABEL_VIDEO_SHADER_NUM_PASSES                                     0x79b2992fU
#define MENU_LABEL_CHEAT_NUM_PASSES                                            0x1910eb87U

#define MENU_VALUE_MORE                                                        0x0b877cafU

#define MENU_VALUE_INPUT_SETTINGS                                              0xddd30846U
#define MENU_VALUE_HORIZONTAL_MENU                                             0x35761704U
#define MENU_VALUE_MAIN_MENU                                                   0x1625971fU   
#define MENU_VALUE_ON                                                          0x005974c2U
#define MENU_VALUE_OFF                                                         0x0b880c40U
#define MENU_VALUE_TRUE                                                        0x7c9e9fe5U
#define MENU_VALUE_FALSE                                                       0x0f6bcef0U

#define MENU_VALUE_COMP                                                        0x6a166ba5U
#define MENU_VALUE_CORE                                                        0x6a167f7fU
#define MENU_VALUE_CURSOR                                                      0x57bba8b4U
#define MENU_VALUE_FILE                                                        0x6a496536U
#define MENU_VALUE_RDB                                                         0x0b00f54eU
#define MENU_VALUE_DIR                                                         0x0af95f55U

#define MENU_LABEL_CONTENT_ACTIONS                                             0xa0d76970U
#define MENU_LABEL_DETECT_CORE_LIST                                            0xaa07c341U
#define MENU_LABEL_LOAD_CONTENT                                                0x5745de1fU
#define MENU_LABEL_CORE_UPDATER_LIST                                           0x0372767dU
#define MENU_LABEL_RECORD_CONFIG                                               0x11c3daf9U
#define MENU_LABEL_UNLOAD_CORE                                                 0x4b622170U
#define MENU_LABEL_QUIT_RETROARCH                                              0x84b0bc71U
#define MENU_LABEL_DEFERRED_VIDEO_FILTER                                       0x966ad201U
#define MENU_LABEL_DEFERRED_CORE_LIST_SET                                      0xa6d5fdb4U
#define MENU_LABEL_DEFERRED_DATABASE_MANAGER_LIST                              0x7c0b704fU
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST                                0x45446638U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_DEVELOPER            0xcbd89be5U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_PUBLISHER            0x125e594dU
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_ORIGIN               0x4ebaa767U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_FRANCHISE            0x77f9eff2U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_EDGE_MAGAZINE_RATING 0x1c7f8a43U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_EDGE_MAGAZINE_ISSUE  0xaaeebde7U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_FAMITSU_MAGAZINE_RATING 0xbf7ff5e7U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_ENHANCEMENT_HW       0x9866bda3U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_RELEASEMONTH         0x2b36ce66U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_RELEASEYEAR          0x9c7c6e91U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_ESRB_RATING          0x68eba20fU
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_ELSPA_RATING         0x8bf6ab18U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_PEGI_RATING          0x5fc77328U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_CERO_RATING          0x24f6172cU
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_BBFC_RATING          0x0a8e67f0U
#define MENU_LABEL_DEFERRED_CURSOR_MANAGER_LIST_RDB_ENTRY_MAX_USERS            0xbfcba816U
#define MENU_LABEL_DEFERRED_RDB_ENTRY_DETAIL                                   0xc35416c0U
#define MENU_LABEL_DEFERRED_CORE_LIST                                          0xf157d289U
#define MENU_LABEL_DEFERRED_CORE_UPDATER_LIST                                  0xbd4d493dU
#define MENU_LABEL_CONFIGURATIONS                                              0x3e930a50U
#define MENU_LABEL_DISK_IMAGE_APPEND                                           0x5af7d709U
#define MENU_LABEL_PERFORMANCE_COUNTERS                                        0xd8ab5049U
#define MENU_LABEL_CORE_LIST                                                   0xa8c3bfc9U
#define MENU_LABEL_MANAGEMENT                                                  0xb8137ec2U
#define MENU_LABEL_OPTIONS                                                     0x71f05091U
#define MENU_LABEL_SETTINGS                                                    0x1304dc16U
#define MENU_LABEL_FRONTEND_COUNTERS                                           0xe5696877U
#define MENU_LABEL_CORE_COUNTERS                                               0x64cc83e0U
#define MENU_LABEL_HISTORY_LIST                                                0x60d82032U
#define MENU_LABEL_INFO_SCREEN                                                 0xd97853d0U
#define MENU_LABEL_SYSTEM_INFORMATION                                          0x206ebf0fU
#define MENU_LABEL_CORE_INFORMATION                                            0xb638e0d3U
#define MENU_LABEL_VIDEO_SHADER_PARAMETERS                                     0x9895c3e5U
#define MENU_LABEL_VIDEO_SHADER_PRESET_PARAMETERS                              0xd18158d7U
#define MENU_LABEL_DISK_OPTIONS                                                0xc61ab5fbU
#define MENU_LABEL_CORE_OPTIONS                                                0xf65e60f9U
#define MENU_LABEL_SHADER_OPTIONS                                              0x1f7d2fc7U
#define MENU_LABEL_VIDEO_OPTIONS                                               0x6390c4e7U
#define MENU_LABEL_CORE_CHEAT_OPTIONS                                          0x9293171dU
#define MENU_LABEL_CORE_INPUT_REMAPPING_OPTIONS                                0x7836a8caU
#define MENU_LABEL_DATABASE_MANAGER_LIST                                       0x7f853d8fU
#define MENU_LABEL_CURSOR_MANAGER_LIST                                         0xa969e378U
#define MENU_LABEL_VIDEO_SHADER_PASS                                           0x4fa31028U
#define MENU_LABEL_VIDEO_SHADER_PRESET                                         0xc5d3bae4U
#define MENU_LABEL_CHEAT_FILE_LOAD                                             0x57336148U
#define MENU_LABEL_REMAP_FILE_LOAD                                             0x9c2799b8U
#define MENU_LABEL_MESSAGE                                                     0xbe463eeaU
#define MENU_LABEL_INFO_SCREEN                                                 0xd97853d0U
#define MENU_LABEL_LOAD_OPEN_ZIP                                               0x8aa3c068U
#define MENU_LABEL_CUSTOM_VIEWPORT_1                                           0x76c3016fU
#define MENU_LABEL_CUSTOM_VIEWPORT_2                                           0x76c30170U
#define MENU_LABEL_HELP                                                        0x7c97d2eeU
#define MENU_LABEL_INPUT_OVERLAY                                               0x24e24796U
#define MENU_LABEL_INPUT_OSK_OVERLAY                                           0x11f1c582U
#define MENU_LABEL_VIDEO_FONT_PATH                                             0xd0de729eU
#define MENU_LABEL_VIDEO_FILTER                                                0x1c0eb741U
#define MENU_LABEL_MENU_WALLPAPER                                              0x3b84de01U
#define MENU_LABEL_CONTENT_HISTORY_PATH                                        0x6f22fb9dU
#define MENU_LABEL_AUDIO_DSP_PLUGIN                                            0x4a69572bU
#define MENU_LABEL_RGUI_BROWSER_DIRECTORY                                      0xa86cba73U
#define MENU_LABEL_PLAYLIST_DIRECTORY                                          0x6361820bU
#define MENU_LABEL_CONTENT_DIRECTORY                                           0x7738dc14U
#define MENU_LABEL_SCREENSHOT_DIRECTORY                                        0x552612d7U
#define MENU_LABEL_VIDEO_SHADER_DIR                                            0x30f53b10U
#define MENU_LABEL_VIDEO_FILTER_DIR                                            0x67603f1fU
#define MENU_LABEL_AUDIO_FILTER_DIR                                            0x4bd96ebaU
#define MENU_LABEL_SAVESTATE_DIRECTORY                                         0x90551289U
#define MENU_LABEL_LIBRETRO_DIR_PATH                                           0x1af1eb72U
#define MENU_LABEL_LIBRETRO_INFO_PATH                                          0xe552b25fU
#define MENU_LABEL_RGUI_CONFIG_DIRECTORY                                       0x0cb3e005U
#define MENU_LABEL_SAVEFILE_DIRECTORY                                          0x92773488U
#define MENU_LABEL_OVERLAY_DIRECTORY                                           0xc4ed3d1bU
#define MENU_LABEL_SYSTEM_DIRECTORY                                            0x35a6fb9eU
#define MENU_LABEL_ASSETS_DIRECTORY                                            0xde1ae8ecU
#define MENU_LABEL_EXTRACTION_DIRECTORY                                        0x33b55ffaU
#define MENU_LABEL_JOYPAD_AUTOCONFIG_DIR                                       0x2f4822d8U
#define MENU_LABEL_DRIVER_SETTINGS                                             0x81cd2d62U
#define MENU_LABEL_CORE_SETTINGS                                               0x06795dffU
#define MENU_LABEL_CONFIGURATION_SETTINGS                                      0x5a1558ceU
#define MENU_LABEL_LOGGING_SETTINGS                                            0x902c003dU
#define MENU_LABEL_SAVING_SETTINGS                                             0x32fea87eU
#define MENU_LABEL_REWIND_SETTINGS                                             0xbff7775fU
#define MENU_LABEL_VIDEO_SETTINGS                                              0x9dd23badU
#define MENU_LABEL_RECORDING_SETTINGS                                          0x1a80b313U
#define MENU_LABEL_FRAME_THROTTLE_SETTINGS                                     0x573b8837U
#define MENU_LABEL_SHADER_SETTINGS                                             0xd6657e8dU
#define MENU_LABEL_FONT_SETTINGS                                               0x67571029U
#define MENU_LABEL_AUDIO_SETTINGS                                              0x8f74c888U
#define MENU_LABEL_INPUT_SETTINGS                                              0xddd30846U
#define MENU_LABEL_INPUT_HOTKEY_SETTINGS                                       0xa4fee31aU
#define MENU_LABEL_OVERLAY_SETTINGS                                            0x34377f98U
#define MENU_LABEL_ONSCREEN_KEYBOARD_OVERLAY_SETTINGS                          0xa6de9ba6U
#define MENU_LABEL_MENU_SETTINGS                                               0x61e4544bU
#define MENU_LABEL_UI_SETTINGS                                                 0xf8da6ef4U
#define MENU_LABEL_PATCH_SETTINGS                                              0xa78b0986U
#define MENU_LABEL_PLAYLIST_SETTINGS                                           0x4d276288U
#define MENU_LABEL_CORE_UPDATER_SETTINGS                                       0x124ad454U
#define MENU_LABEL_NETWORK_SETTINGS                                            0x8b50d180U
#define MENU_LABEL_ARCHIVE_SETTINGS                                            0x78e85398U
#define MENU_LABEL_USER_SETTINGS                                               0xcdc9a8f5U
#define MENU_LABEL_DIRECTORY_SETTINGS                                          0xb817bd2bU
#define MENU_LABEL_PRIVACY_SETTINGS                                            0xce106254U
#define MENU_LABEL_SHADER_APPLY_CHANGES                                        0x4f7306b9U
#define MENU_LABEL_SAVE_NEW_CONFIG                                             0xcce9ab72U
#define MENU_LABEL_ONSCREEN_DISPLAY_SETTINGS                                   0x67571029U
#define MENU_LABEL_CHEAT_APPLY_CHANGES                                         0xde88aa27U
#define MENU_LABEL_CUSTOM_BIND                                                 0x1e84b3fcU
#define MENU_LABEL_CUSTOM_BIND_ALL                                             0x79ac14f4U
#define MENU_LABEL_CUSTOM_BIND_DEFAULTS                                        0xe88f7b13U
#define MENU_LABEL_SAVESTATE                                                   0x3a4849b5U
#define MENU_LABEL_LOADSTATE                                                   0xa39eb286U
#define MENU_LABEL_RESUME_CONTENT                                              0xd9f088b0U
#define MENU_LABEL_RESTART_CONTENT                                             0x1ea2e224U
#define MENU_LABEL_TAKE_SCREENSHOT                                             0x6786e867U
#define MENU_LABEL_FILE_LOAD_OR_RESUME                                         0x952941f4U
#define MENU_LABEL_DISK_IMAGE_APPEND                                           0x5af7d709U
#define MENU_LABEL_CONFIGURATIONS                                              0x3e930a50U
#define MENU_LABEL_CHEAT_FILE_SAVE_AS                                          0x1f58dccaU
#define MENU_LABEL_REMAP_FILE_SAVE_AS                                          0xcebf7f3aU
#define MENU_LABEL_VIDEO_SHADER_PRESET_SAVE_AS                                 0x3d6e5ce5U
#define MENU_LABEL_REMAP_FILE_SAVE_CORE                                        0x7c9d4c8fU
#define MENU_LABEL_REMAP_FILE_SAVE_GAME                                        0x7c9f41e0U
#define MENU_LABEL_CONTENT_COLLECTION_LIST                                     0x0f8a9086U
#define MENU_LABEL_OSK_ENABLE                                                  0x8e208498U
#define MENU_LABEL_AUDIO_MUTE                                                  0xe0ca1151U
#define MENU_LABEL_EXIT_EMULATOR                                               0x86d5d467U

#ifdef __cplusplus
}
#endif

#endif
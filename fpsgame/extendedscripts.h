#ifndef __EXTENDEDSCRIPTS_H__
#define __EXTENDEDSCRIPTS_H__


const char *extended_settings_gui =
"newgui extended_settings [\n"

    "guicheckbox \"Reduce sparks\" reducesparks\n"
    "guicheckbox \"Reduce explosions\" reduceexplosions\n"
    "guistrut 1\n"

    "guitext \"Smoke density:\" 0\n"
    "guislider smokefps\n"


    "guitab \"Game Clock\"\n"

    "guicheckbox \"Show clock\" gameclock\n"
    "guitext \"Size:\" 0\n"
    "guislider gameclocksize\n"
    "guistrut 1\n"

    "guitext \"Offset (X/Y) ^f4(radar absent)^f~:\" 0\n"
    "guislider gameclockoffset_x\n"
    "guislider gameclockoffset_y\n"
    "guistrut 1\n"

    "guitext \"Offset (X/Y) ^f4(radar present)^f~:\" 0\n"
    "guislider gameclockoffset_x_withradar\n"
    "guislider gameclockoffset_y_withradar\n"
    "guistrut 1\n"

    "guitext \"Color (^f3R^f~/^f0G^f~/^f1B^f~/^f4A^f~):\" 0\n"
    "guislider gameclockcolor_r\n"
    "guislider gameclockcolor_g\n"
    "guislider gameclockcolor_b\n"
    "guislider gameclockcolor_a\n"

    "guitab \"Hud Scores\"\n"

    "guicheckbox \"Show hud scores\" hudscores\n"
    "guitext \"Size:\" 0\n"
    "guislider hudscoressize\n"
    "guistrut 1\n"

    "guitext \"Offset (X/Y) ^f4(radar absent)^f~:\" 0\n"
    "guislider hudscoresoffset_x\n"
    "guislider hudscoresoffset_y\n"
    "guistrut 1\n"

    "guitext \"Offset (X/Y) ^f4(radar present)^f~:\" 0\n"
    "guislider hudscoresoffset_x_withradar\n"
    "guislider hudscoresoffset_y_withradar\n"
    "guistrut 1\n"

    "guitab \"Hud Scores Coloring\"\n"

    "guitext \"Player color (^f3R^f~/^f0G^f~/^f1B^f~/^f4A^f~):\" 0\n"
    "guislider hudscoresplayercolor_r\n"
    "guislider hudscoresplayercolor_g\n"
    "guislider hudscoresplayercolor_b\n"
    "guislider hudscoresplayercolor_a\n"
    "guistrut 1\n"

    "guitext \"Enemy color (^f3R^f~/^f0G^f~/^f1B^f~/^f4A^f~):\" 0\n"
    "guislider hudscoresenemycolor_r\n"
    "guislider hudscoresenemycolor_g\n"
    "guislider hudscoresenemycolor_b\n"
    "guislider hudscoresenemycolor_a\n"

"] \"Extended settings\"\n";

const char *game_scripts[] = { extended_settings_gui, 0 };


#endif

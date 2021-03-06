//
// Created by abel on 29/09/18.
//

#ifndef DANCE_H
#define DANCE_H

/**
 * Function executed only first time mode is executed
 */
void dance_mode_setup();

/**
 * Function executed when mode is stopped and relaunch.
 * If on_mode_create is executed, then this will be executed
 */
void dance_mode_start();

/**
 * Function executed when mode is paused an resume ( When someone press the mode assigned key ).
 * If on_mode_start is executed, then this will be executed
 */
void dance_mode_resume();

/**
 * Function executed when mode is paused ( When someone press the mode assigned key )
 */
void dance_mode_pause();

/**
 * Function executed when mode is stopped ( When someone press a different mode assigned key ). Its always be executed after
 * on_mode_pause.
 */
void dance_mode_stop();

/**
 * Main loop of the mode
 */
void dance_mode_loop();

#endif //DANCE_H

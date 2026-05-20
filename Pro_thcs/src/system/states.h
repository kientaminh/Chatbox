#ifndef _STATES_H_
#define _STATES_H_

#include <Arduino.h>
#include "../display/display_manager.h"

#define CMD_OPEN   "DOOR_OPEN"
#define CMD_CLOSE  "DOOR_CLOSE"

enum State {
    IDLE,
    LISTENING,
    VOICE_FAILED,
    PASSWORD,
    ACCESS_GRANTED,
    ACCESS_DENIED
};

extern State currentState;

static String inputPassword = "";
static String correctPassword = "1234";
extern bool passwordEntered;

void enterListeningState();
void updateListeningState();

void enterPasswordState();
void updatePasswordState();
void updatePasswordInput();
bool isPasswordEntered();

void enterSuccessState();
void updateSuccessState();

void enterFailState();
void updateFailState();
#endif
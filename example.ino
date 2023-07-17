struct Indicator {
    bool oldState;
    int cyclesPassed;
};

Indicator rightIndicator = {false, 0};
Indicator leftIndicator = {false, 0};

const int ALLOWED_CYCLES = 300; // Change this to change the time (unojoy cycles) for which the button will be pressed
// Other global variables declared above...

// Void Setup() and Void Loop() same as default...

// Function to simulate a toggle switch button
bool simulatePushButton(bool currState, Indicator &indicator) {
    indicator.cyclesPassed = indicator.oldState == currState ? indicator.cyclesPassed : 0;
    if (indicator.cyclesPassed <= ALLOWED_CYCLES) {
        indicator.cyclesPassed++;
        indicator.oldState = currState;
        return true;
    }
    return false;
}

// Look for this function in the original code
dataForController_t getControllerData(void) {
    // Change your required button as following (dpadDown in this case) :
    // controllerData.dpadDownOn = !digitalRead(6); Replace this with the line below
    controllerData.dpadDownOn = simulatePushButton(!digitalRead(6), leftIndicator);
    // Similarly for right indicator
    controllerData.crossOn = simulatePushButton(!digitalRead(5), rightIndicator);

    // Now dpadDownOn will be toggled on when you move toggle switch, and then toggled off when you move it again.
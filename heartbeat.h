/*
 * Heartbeat. Yay
 */
#ifndef _HEARTBEAT_H_
#define _HEARTBEAT_H_

class Heartbeat {
    private:
        unsigned long nextMillis = 0;
        bool state = false;
        int pin = 23;
        int gap = 3000;
        int duration = 50;
    
    public:
        Heartbeat(int _pin);
        Heartbeat(int _pin, int _gap, int _duration);
        void SetGap(int _gap);
        void SetDuration(int _duration);
        void SetPin(int _pin);
        void Pulse();
};

#endif
/*********************************************************************************************************
 * END FILE
 *********************************************************************************************************/

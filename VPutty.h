#include "Arduino.h"

class VPutty {
  public:
    /*!
    ********************************************

    recommendation to set more than 115200 baud

    ********************************************
    */
    VPutty();

    void cursor(int x,int y);
    
    void clear();
  
    void graphic(int first);
    void graphic(int first, int second);
    void graphic(int first, int second, int third);
};
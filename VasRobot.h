#ifndef VASROBOT_H
#define VASROBOT_H

#include "Prohledavac.h"
#include <vector>

class VasRobot : public Prohledavac {
public:
    virtual bool start(Bludiste & map);
    virtual bool start(BludisteOdkryte & map);
    virtual bool stop();
    virtual void krok(Bludiste & map);
    virtual void krok(BludisteOdkryte & map);
    virtual std::string jmeno();
    std::vector <std::vector <bool>> navstiveno;
    virtual void zapisPolohu(Bludiste & map);
};

#endif

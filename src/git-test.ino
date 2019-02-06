/*
 * Project git-test
 * Description:
 * Author: nrobinson2000
 * Date:
 */

 #include "metadata.h"

void setup() {

}

void loop() {
        static uint32_t msDelay = 0;
        if (millis() - msDelay >= 10000) {
                Particle.publish("git-branch-name", __GITBRANCH__, 60, PRIVATE);
                msDelay = millis();
        }
}

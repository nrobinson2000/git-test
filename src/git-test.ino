/*
 * Project git-test
 * Description:
 * Author: nrobinson2000
 * Date:
 */

#include "metadata.h"

char gitData[100];

void setup() {
        snprintf(gitData, sizeof(gitData), "%s,%s", __GITBRANCH__, __GITCOMMIT__);
}

void loop() {
        static uint32_t msDelay = 0;
        if (millis() - msDelay >= 10000) {
                Particle.publish("git-branch-name", __GITBRANCH__, 60, PRIVATE);
                Particle.publish("git-data", gitData, 60, PRIVATE);
                msDelay = millis();
        }
}

//
// Created by swithana on 9/12/18.
//

#ifndef PROJECT_OBSTACLE_H
#define PROJECT_OBSTACLE_H

#include "Node.h"

namespace e503 {
    class Obstacle {
    public:
        Obstacle(float min_x, float max_x, float min_y, float max_y, float robotScaleX, float robotScaleY);

        bool isWithinObstacle(Node *node);

        bool edgeWithinObstacle(Node *node1, Node *node2);

        float min_x, max_x, min_y, max_y;
    private:
        float obstacle_obstructed_radius;
        float calculateObstacleRadius();
        float center_x, center_y;
    };
}

#endif //PROJECT_OBSTACLE_H

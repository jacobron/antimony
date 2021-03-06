#ifndef TRIANGLE_CONTROL_H
#define TRIANGLE_CONTROL_H

#include "control/wireframe.h"

class Point2DControl;
class Node;

class TriangleControl : public WireframeControl
{
public:
    explicit TriangleControl(Node* node, QObject* parent=NULL);
    QVector<QVector<QVector3D>> lines() const override;
    void drag(QVector3D center, QVector3D delta) override;
protected:
    Point2DControl* a;
    Point2DControl* b;
    Point2DControl* c;
};

#endif // TRIANGLE_CONTROL_H

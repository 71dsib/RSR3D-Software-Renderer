#ifndef TRANSFORM_H_INCLUDED
#define TRANSFORM_H_INCLUDED

namespace transform{
    void rotateModelXY(render::model::Model& model, float rotate);
    void rotateModelXZ(render::model::Model& model, float rotate);
    void rotateModelYZ(render::model::Model& model, float rotate);
    void setModelPos(render::model::Model& model, render::Point3D newPos);
}

#endif

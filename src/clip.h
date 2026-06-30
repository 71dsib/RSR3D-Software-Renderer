#ifndef CLIP_H_INCLUDED
#define CLIP_H_INCLUDED

namespace clip{
    render::Point3D toCameraSpace(const render::Point3D& p);
    render::Point3D toWorldSpace(const render::Point3D& p);
    render::Point3D returnPlaneIntercept(const render::Point3D& pointA, const render::Point3D& pointB, float plane);
    float returnT(const render::Point3D& pointA, const render::Point3D& pointB, float plane);
    vectorFunctions::Vector3D returnPlaneInterceptN(const vectorFunctions::Vector3D& vectorA, const vectorFunctions::Vector3D& vectorB, float plane, float t);
    void makeTriangleClockwise(render::model::Triangle& tri, bool inCamSpace);
    std::vector<render::model::Triangle> clipTriangle(const render::model::Triangle& tri, bool makeClockwise = true);
}

#endif

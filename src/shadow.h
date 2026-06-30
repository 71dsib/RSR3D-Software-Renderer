#ifndef SHADOW_H_INCLUDED
#define SHADOW_H_INCLUDED

namespace shadowFunctions{
    struct ShadowMap{
        int width {};
        int height {};
        std::vector<float> buffer;

        void allocate(){
            buffer.resize(width * height, FLT_MAX);
        }
    };

    extern std::vector<ShadowMap> shadowMaps;
}
namespace shadowFunctions{
    render::Point3D toSpotLightSpace(const render::Point3D& point, const vectorFunctions::SpotLight& spotLight);
    render::Point3D fromSLToWorldSpace(const render::Point3D& point, const vectorFunctions::SpotLight& spotLight);
    render::Point2D projectPointSL(const render::Point3D& point, const vectorFunctions::SpotLight& spotLight, int width, int height);
    void rasterizeTriangleSLClip(render::model::Triangle tri, const vectorFunctions::SpotLight& light, ShadowMap& shadowMap);
}

#endif

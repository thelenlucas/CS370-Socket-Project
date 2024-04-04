#pragma once

#include "Vec.h"

// Quaternions are internally stored as a 4D vector
// usually these are set and getted as a 3D vector of euler angles
// but can also be set and getted as a 4D vector, as they extend Vec4

class Quaternion : public Vec4<float> {
public:
    Quaternion();
    Quaternion(float x, float y, float z, float w);
    Quaternion(float* arr);
    Quaternion(const Vec3<float>& euler);
    Quaternion(const Vec4<float>& vec);

    // Setters and getters
    void setEuler(const Vec3<float>& euler);
    Vec3<float> getEuler() const;
    void setVec4(const Vec4<float>& vec);
    Vec4<float> getVec4() const;

    // Quaternion multiplication
    Quaternion operator*(const Quaternion& q) const;

    // Rotate a vector by this quaternion
    Vec3<float> rotate(const Vec3<float>& v) const;
};
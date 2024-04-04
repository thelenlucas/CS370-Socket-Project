#pragma once

#define NUM_VEC_DIMENSIONS 3

// 3D vector class
template <typename T>
class Vec3 {
private:
    T data[NUM_VEC_DIMENSIONS];

public:
    Vec3();
    Vec3(T x, T y, T z);
    Vec3(T* arr);

    // [] access and assignment
    T& operator[](int i);
    const T& operator[](int i) const;

    // Addition, subtraction, and dot product
    Vec3<T> operator+(const Vec3<T>& v) const;
    Vec3<T> operator-(const Vec3<T>& v) const;
    T operator*(const Vec3<T>& v) const;

    // Scalar multiplication
    Vec3<T> operator*(T s) const;
    Vec3<T> operator/(T s) const;
};

// 4D vector class
template <typename T>
class Vec4 {
private:
    T data[4];

public:
    Vec4();
    Vec4(T x, T y, T z, T w);
    Vec4(T* arr);

    // [] access and assignment
    T& operator[](int i);
    const T& operator[](int i) const;

    // Addition, subtraction, and dot product
    Vec4<T> operator+(const Vec4<T>& v) const;
    Vec4<T> operator-(const Vec4<T>& v) const;
    T operator*(const Vec4<T>& v) const;

    // Scalar multiplication
    Vec4<T> operator*(T s) const;
    Vec4<T> operator/(T s) const;
};
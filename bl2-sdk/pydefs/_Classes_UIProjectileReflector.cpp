#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIProjectileReflector()
{
    py::class_< UIProjectileReflector,  UInterface   >("UIProjectileReflector")
        .def("StaticClass", &UIProjectileReflector::StaticClass, py::return_value_policy::reference)
        .def("GetBulletReflectedOffSelfDamageScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageScale)
        .def("GetBulletReflectedOffEnemyDamageScale", &UIProjectileReflector::GetBulletReflectedOffEnemyDamageScale)
        .def("GetBulletReflectedOffSelfDamageTakenScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageTakenScale)
        .def("GetEnemyReflectionChance", &UIProjectileReflector::GetEnemyReflectionChance)
        .def("GetSelfReflectionChance", &UIProjectileReflector::GetSelfReflectionChance)
        .staticmethod("StaticClass")
  ;
}
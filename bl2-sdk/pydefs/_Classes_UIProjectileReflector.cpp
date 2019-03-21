#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIProjectileReflector()
{
    class_< UIProjectileReflector, bases< UInterface >  , boost::noncopyable>("UIProjectileReflector", no_init)
        .def("StaticClass", &UIProjectileReflector::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetBulletReflectedOffSelfDamageScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageScale)
        .def("GetBulletReflectedOffEnemyDamageScale", &UIProjectileReflector::GetBulletReflectedOffEnemyDamageScale)
        .def("GetBulletReflectedOffSelfDamageTakenScale", &UIProjectileReflector::GetBulletReflectedOffSelfDamageTakenScale)
        .def("GetEnemyReflectionChance", &UIProjectileReflector::GetEnemyReflectionChance)
        .def("GetSelfReflectionChance", &UIProjectileReflector::GetSelfReflectionChance)
        .staticmethod("StaticClass")
  ;
}
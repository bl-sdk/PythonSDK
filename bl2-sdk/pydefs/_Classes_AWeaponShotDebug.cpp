#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWeaponShotDebug()
{
    class_< AWeaponShotDebug, bases< AActor >  , boost::noncopyable>("AWeaponShotDebug", no_init)
        .def_readwrite("AimArrow", &AWeaponShotDebug::AimArrow)
        .def_readwrite("ShotArrow", &AWeaponShotDebug::ShotArrow)
        .def_readwrite("SpreadShotArrow", &AWeaponShotDebug::SpreadShotArrow)
        .def("StaticClass", &AWeaponShotDebug::StaticClass, return_value_policy< reference_existing_object >())
        .def("FinalizeComponentInitialization", &AWeaponShotDebug::FinalizeComponentInitialization)
        .staticmethod("StaticClass")
  ;
}
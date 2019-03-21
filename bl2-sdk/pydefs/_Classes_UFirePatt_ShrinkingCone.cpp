#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFirePatt_ShrinkingCone()
{
    class_< UFirePatt_ShrinkingCone, bases< UFiringPattern >  , boost::noncopyable>("UFirePatt_ShrinkingCone", no_init)
        .def_readwrite("CurrentAccuracyConeDeg", &UFirePatt_ShrinkingCone::CurrentAccuracyConeDeg)
        .def_readwrite("LastDesiredAim", &UFirePatt_ShrinkingCone::LastDesiredAim)
        .def_readwrite("MaxAccuracyConeDeg", &UFirePatt_ShrinkingCone::MaxAccuracyConeDeg)
        .def_readwrite("ConeMultiplierPerShot", &UFirePatt_ShrinkingCone::ConeMultiplierPerShot)
        .def_readwrite("ShotSpreadType", &UFirePatt_ShrinkingCone::ShotSpreadType)
        .def("StaticClass", &UFirePatt_ShrinkingCone::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
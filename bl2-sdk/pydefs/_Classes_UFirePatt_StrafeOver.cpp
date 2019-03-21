#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFirePatt_StrafeOver()
{
    class_< UFirePatt_StrafeOver, bases< UFiringPattern >  , boost::noncopyable>("UFirePatt_StrafeOver", no_init)
        .def_readwrite("CurrentAimRotation", &UFirePatt_StrafeOver::CurrentAimRotation)
        .def_readwrite("PitchDeltaPerShot", &UFirePatt_StrafeOver::PitchDeltaPerShot)
        .def_readwrite("MaxYawDeltaPerShot", &UFirePatt_StrafeOver::MaxYawDeltaPerShot)
        .def_readwrite("RefireRate", &UFirePatt_StrafeOver::RefireRate)
        .def_readwrite("LineOfShotsSpeed", &UFirePatt_StrafeOver::LineOfShotsSpeed)
        .def_readwrite("LineOfShotsEndZ", &UFirePatt_StrafeOver::LineOfShotsEndZ)
        .def_readwrite("YawDeltaRatio", &UFirePatt_StrafeOver::YawDeltaRatio)
        .def_readwrite("TargetPosition", &UFirePatt_StrafeOver::TargetPosition)
        .def("StaticClass", &UFirePatt_StrafeOver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
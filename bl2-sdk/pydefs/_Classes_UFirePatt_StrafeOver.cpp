#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFirePatt_StrafeOver(py::module &m)
{
    py::class_< UFirePatt_StrafeOver,  UFiringPattern   >(m, "UFirePatt_StrafeOver")
        .def_readwrite("CurrentAimRotation", &UFirePatt_StrafeOver::CurrentAimRotation)
        .def_readwrite("PitchDeltaPerShot", &UFirePatt_StrafeOver::PitchDeltaPerShot)
        .def_readwrite("MaxYawDeltaPerShot", &UFirePatt_StrafeOver::MaxYawDeltaPerShot)
        .def_readwrite("RefireRate", &UFirePatt_StrafeOver::RefireRate)
        .def_readwrite("LineOfShotsSpeed", &UFirePatt_StrafeOver::LineOfShotsSpeed)
        .def_readwrite("LineOfShotsEndZ", &UFirePatt_StrafeOver::LineOfShotsEndZ)
        .def_readwrite("YawDeltaRatio", &UFirePatt_StrafeOver::YawDeltaRatio)
        .def_readwrite("TargetPosition", &UFirePatt_StrafeOver::TargetPosition)
          ;
}
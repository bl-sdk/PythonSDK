#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFirePatt_ShrinkingCone(py::object m)
{
    py::class_< UFirePatt_ShrinkingCone,  UFiringPattern   >(m, "UFirePatt_ShrinkingCone")
        .def_readwrite("CurrentAccuracyConeDeg", &UFirePatt_ShrinkingCone::CurrentAccuracyConeDeg)
        .def_readwrite("LastDesiredAim", &UFirePatt_ShrinkingCone::LastDesiredAim)
        .def_readwrite("MaxAccuracyConeDeg", &UFirePatt_ShrinkingCone::MaxAccuracyConeDeg)
        .def_readwrite("ConeMultiplierPerShot", &UFirePatt_ShrinkingCone::ConeMultiplierPerShot)
        .def_readwrite("ShotSpreadType", &UFirePatt_ShrinkingCone::ShotSpreadType)
        .def("StaticClass", &UFirePatt_ShrinkingCone::StaticClass, py::return_value_policy::reference)
          ;
}
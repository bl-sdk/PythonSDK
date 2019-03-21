#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerVolume()
{
    py::class_< ATriggerVolume,  AVolume   >("ATriggerVolume")
        .def("StaticClass", &ATriggerVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &ATriggerVolume::StopsProjectile)
        .def("eventPostBeginPlay", &ATriggerVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
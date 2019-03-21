#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggerVolume(py::object m)
{
    py::class_< ATriggerVolume,  AVolume   >(m, "ATriggerVolume")
        .def("StaticClass", &ATriggerVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &ATriggerVolume::StopsProjectile)
        .def("eventPostBeginPlay", &ATriggerVolume::eventPostBeginPlay)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicPhysicsVolume(py::module &m)
{
    py::class_< ADynamicPhysicsVolume,  APhysicsVolume   >(m, "ADynamicPhysicsVolume")
        .def("StaticClass", &ADynamicPhysicsVolume::StaticClass, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &ADynamicPhysicsVolume::eventPostBeginPlay)
          ;
}
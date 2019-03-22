#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicPhysicsVolume(py::module &m)
{
    py::class_< ADynamicPhysicsVolume,  APhysicsVolume   >(m, "ADynamicPhysicsVolume")
        .def("eventPostBeginPlay", &ADynamicPhysicsVolume::eventPostBeginPlay)
          ;
}
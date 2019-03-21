#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationDirect(py::object m)
{
    py::class_< UParticleModuleLocationDirect,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationDirect")
        .def_readwrite("Location", &UParticleModuleLocationDirect::Location)
        .def_readwrite("LocationOffset", &UParticleModuleLocationDirect::LocationOffset)
        .def_readwrite("ScaleFactor", &UParticleModuleLocationDirect::ScaleFactor)
        .def_readwrite("Direction", &UParticleModuleLocationDirect::Direction)
        .def("StaticClass", &UParticleModuleLocationDirect::StaticClass, py::return_value_policy::reference)
          ;
}
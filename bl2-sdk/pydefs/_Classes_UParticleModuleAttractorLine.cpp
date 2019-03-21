#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorLine(py::object m)
{
    py::class_< UParticleModuleAttractorLine,  UParticleModuleAttractorBase   >(m, "UParticleModuleAttractorLine")
        .def_readwrite("EndPoint0", &UParticleModuleAttractorLine::EndPoint0)
        .def_readwrite("EndPoint1", &UParticleModuleAttractorLine::EndPoint1)
        .def_readwrite("Range", &UParticleModuleAttractorLine::Range)
        .def_readwrite("Strength", &UParticleModuleAttractorLine::Strength)
        .def("StaticClass", &UParticleModuleAttractorLine::StaticClass, py::return_value_policy::reference)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEdCoordSystem()
{
    py::class_< UEdCoordSystem,  UObject   >("UEdCoordSystem")
        .def_readonly("UnknownData00", &UEdCoordSystem::UnknownData00)
        .def_readwrite("M", &UEdCoordSystem::M)
        .def_readwrite("Desc", &UEdCoordSystem::Desc)
        .def("StaticClass", &UEdCoordSystem::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
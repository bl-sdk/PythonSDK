#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEdCoordSystem(py::object m)
{
    py::class_< UEdCoordSystem,  UObject   >(m, "UEdCoordSystem")
        .def_readonly("UnknownData00", &UEdCoordSystem::UnknownData00)
        .def_readwrite("M", &UEdCoordSystem::M)
        .def_readwrite("Desc", &UEdCoordSystem::Desc)
        .def("StaticClass", &UEdCoordSystem::StaticClass, py::return_value_policy::reference)
          ;
}
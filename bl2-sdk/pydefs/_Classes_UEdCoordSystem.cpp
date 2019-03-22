#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEdCoordSystem(py::module &m)
{
    py::class_< UEdCoordSystem,  UObject   >(m, "UEdCoordSystem")
        .def_readwrite("M", &UEdCoordSystem::M)
        .def_readwrite("Desc", &UEdCoordSystem::Desc)
          ;
}
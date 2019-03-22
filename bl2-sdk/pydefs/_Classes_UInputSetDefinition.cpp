#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputSetDefinition(py::module &m)
{
    py::class_< UInputSetDefinition,  UGBXDefinition   >(m, "UInputSetDefinition")
        .def_readwrite("InputActions", &UInputSetDefinition::InputActions)
          ;
}
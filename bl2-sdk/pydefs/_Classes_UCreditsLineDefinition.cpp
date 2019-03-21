#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsLineDefinition()
{
    py::class_< UCreditsLineDefinition,  UGBXDefinition   >("UCreditsLineDefinition")
        .def_readwrite("LinkageName", &UCreditsLineDefinition::LinkageName)
        .def("StaticClass", &UCreditsLineDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
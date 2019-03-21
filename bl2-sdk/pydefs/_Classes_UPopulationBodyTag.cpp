#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationBodyTag()
{
    py::class_< UPopulationBodyTag,  UGBXDefinition   >("UPopulationBodyTag")
        .def("StaticClass", &UPopulationBodyTag::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
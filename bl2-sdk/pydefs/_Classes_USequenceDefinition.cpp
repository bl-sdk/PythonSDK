#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceDefinition()
{
    py::class_< USequenceDefinition,  USequence   >("USequenceDefinition")
        .def("StaticClass", &USequenceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
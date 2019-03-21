#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceDefinition(py::object m)
{
    py::class_< USequenceDefinition,  USequence   >(m, "USequenceDefinition")
        .def("StaticClass", &USequenceDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
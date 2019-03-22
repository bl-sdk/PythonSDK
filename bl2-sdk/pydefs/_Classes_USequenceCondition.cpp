#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceCondition(py::module &m)
{
    py::class_< USequenceCondition,  USequenceOp   >(m, "USequenceCondition")
        .def("StaticClass", &USequenceCondition::StaticClass, py::return_value_policy::reference)
          ;
}
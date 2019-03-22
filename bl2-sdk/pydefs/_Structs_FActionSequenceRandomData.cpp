#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActionSequenceRandomData(py::module &m)
{
    py::class_< FActionSequenceRandomData >(m, "FActionSequenceRandomData")
        .def_readwrite("ProbabilityData", &FActionSequenceRandomData::ProbabilityData)
        .def_readwrite("ActionToRunWhenTrue", &FActionSequenceRandomData::ActionToRunWhenTrue)
  ;
}
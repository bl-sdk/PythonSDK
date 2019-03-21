#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActionSequenceRandomData()
{
    py::class_< FActionSequenceRandomData >("FActionSequenceRandomData")
        .def_readwrite("ProbabilityData", &FActionSequenceRandomData::ProbabilityData)
        .def_readwrite("ActionToRunWhenTrue", &FActionSequenceRandomData::ActionToRunWhenTrue)
  ;
}
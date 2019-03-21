#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ResetPopulationCount()
{
    py::class_< UGearboxSeqAct_ResetPopulationCount,  USequenceAction   >("UGearboxSeqAct_ResetPopulationCount")
        .def("StaticClass", &UGearboxSeqAct_ResetPopulationCount::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
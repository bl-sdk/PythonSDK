#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ResetPopulationCount(py::object m)
{
    py::class_< UGearboxSeqAct_ResetPopulationCount,  USequenceAction   >(m, "UGearboxSeqAct_ResetPopulationCount")
        .def("StaticClass", &UGearboxSeqAct_ResetPopulationCount::StaticClass, py::return_value_policy::reference)
          ;
}
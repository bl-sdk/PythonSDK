#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkClearBanks()
{
    py::class_< USeqAct_AkClearBanks,  USequenceAction   >("USeqAct_AkClearBanks")
        .def("StaticClass", &USeqAct_AkClearBanks::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
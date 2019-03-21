#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkClearBanks(py::object m)
{
    py::class_< USeqAct_AkClearBanks,  USequenceAction   >(m, "USeqAct_AkClearBanks")
        .def("StaticClass", &USeqAct_AkClearBanks::StaticClass, py::return_value_policy::reference)
          ;
}
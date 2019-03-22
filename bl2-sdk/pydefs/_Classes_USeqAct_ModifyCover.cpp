#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyCover(py::module &m)
{
    py::class_< USeqAct_ModifyCover,  USequenceAction   >(m, "USeqAct_ModifyCover")
        .def_readwrite("Slots", &USeqAct_ModifyCover::Slots)
        .def_readwrite("ManualCoverType", &USeqAct_ModifyCover::ManualCoverType)
          ;
}
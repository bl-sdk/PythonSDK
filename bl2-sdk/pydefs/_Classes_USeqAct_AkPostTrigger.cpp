#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkPostTrigger(py::module &m)
{
    py::class_< USeqAct_AkPostTrigger,  USequenceAction   >(m, "USeqAct_AkPostTrigger")
        .def_readwrite("AkTrigger", &USeqAct_AkPostTrigger::AkTrigger)
          ;
}
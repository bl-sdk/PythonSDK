#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CommitMapChange()
{
    py::class_< USeqAct_CommitMapChange,  USequenceAction   >("USeqAct_CommitMapChange")
        .def("StaticClass", &USeqAct_CommitMapChange::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
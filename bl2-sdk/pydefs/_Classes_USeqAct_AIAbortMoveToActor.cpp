#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AIAbortMoveToActor()
{
    py::class_< USeqAct_AIAbortMoveToActor,  USequenceAction   >("USeqAct_AIAbortMoveToActor")
        .def("StaticClass", &USeqAct_AIAbortMoveToActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
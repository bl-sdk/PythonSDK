#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkStopAll()
{
    py::class_< USeqAct_AkStopAll,  USequenceAction   >("USeqAct_AkStopAll")
        .def("StaticClass", &USeqAct_AkStopAll::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLookAtActor()
{
    py::class_< UWillowSeqAct_SetLookAtActor,  USequenceAction   >("UWillowSeqAct_SetLookAtActor")
        .def_readwrite("Offset", &UWillowSeqAct_SetLookAtActor::Offset)
        .def("StaticClass", &UWillowSeqAct_SetLookAtActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
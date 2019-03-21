#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AILookAt()
{
    py::class_< UWillowSeqAct_AILookAt,  USequenceAction   >("UWillowSeqAct_AILookAt")
        .def_readwrite("LookAt", &UWillowSeqAct_AILookAt::LookAt)
        .def("StaticClass", &UWillowSeqAct_AILookAt::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
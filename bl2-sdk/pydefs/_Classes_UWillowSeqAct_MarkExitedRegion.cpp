#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkExitedRegion()
{
    py::class_< UWillowSeqAct_MarkExitedRegion,  USequenceAction   >("UWillowSeqAct_MarkExitedRegion")
        .def_readwrite("Region", &UWillowSeqAct_MarkExitedRegion::Region)
        .def("StaticClass", &UWillowSeqAct_MarkExitedRegion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
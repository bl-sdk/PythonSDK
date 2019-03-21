#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkEnteredRegion()
{
    py::class_< UWillowSeqAct_MarkEnteredRegion,  USequenceAction   >("UWillowSeqAct_MarkEnteredRegion")
        .def_readwrite("Region", &UWillowSeqAct_MarkEnteredRegion::Region)
        .def("StaticClass", &UWillowSeqAct_MarkEnteredRegion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
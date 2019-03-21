#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkExitedRegion(py::object m)
{
    py::class_< UWillowSeqAct_MarkExitedRegion,  USequenceAction   >(m, "UWillowSeqAct_MarkExitedRegion")
        .def_readwrite("Region", &UWillowSeqAct_MarkExitedRegion::Region)
        .def("StaticClass", &UWillowSeqAct_MarkExitedRegion::StaticClass, py::return_value_policy::reference)
          ;
}
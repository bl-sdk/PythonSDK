#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkExitedRegion(py::module &m)
{
    py::class_< UWillowSeqAct_MarkExitedRegion,  USequenceAction   >(m, "UWillowSeqAct_MarkExitedRegion")
        .def_readwrite("Region", &UWillowSeqAct_MarkExitedRegion::Region)
          ;
}
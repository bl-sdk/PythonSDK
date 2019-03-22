#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MarkEnteredRegion(py::module &m)
{
    py::class_< UWillowSeqAct_MarkEnteredRegion,  USequenceAction   >(m, "UWillowSeqAct_MarkEnteredRegion")
        .def_readwrite("Region", &UWillowSeqAct_MarkEnteredRegion::Region)
          ;
}
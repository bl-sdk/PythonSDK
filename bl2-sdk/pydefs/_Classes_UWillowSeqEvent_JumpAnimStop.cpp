#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStop(py::module &m)
{
    py::class_< UWillowSeqEvent_JumpAnimStop,  USequenceEvent   >(m, "UWillowSeqEvent_JumpAnimStop")
          ;
}
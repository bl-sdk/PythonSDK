#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimIdle(py::module &m)
{
    py::class_< UWillowSeqEvent_JumpAnimIdle,  USequenceEvent   >(m, "UWillowSeqEvent_JumpAnimIdle")
          ;
}
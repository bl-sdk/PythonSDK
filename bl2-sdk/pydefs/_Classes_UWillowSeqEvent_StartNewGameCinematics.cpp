#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_StartNewGameCinematics(py::module &m)
{
    py::class_< UWillowSeqEvent_StartNewGameCinematics,  USequenceEvent   >(m, "UWillowSeqEvent_StartNewGameCinematics")
          ;
}
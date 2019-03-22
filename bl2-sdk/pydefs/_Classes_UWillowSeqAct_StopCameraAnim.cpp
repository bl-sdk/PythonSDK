#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_StopCameraAnim(py::module &m)
{
    py::class_< UWillowSeqAct_StopCameraAnim,  USequenceAction   >(m, "UWillowSeqAct_StopCameraAnim")
          ;
}
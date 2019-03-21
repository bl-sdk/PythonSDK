#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_StopCameraAnim()
{
    py::class_< UWillowSeqAct_StopCameraAnim,  USequenceAction   >("UWillowSeqAct_StopCameraAnim")
        .def("StaticClass", &UWillowSeqAct_StopCameraAnim::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
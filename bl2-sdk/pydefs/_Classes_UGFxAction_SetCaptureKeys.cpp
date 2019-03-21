#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxAction_SetCaptureKeys()
{
    py::class_< UGFxAction_SetCaptureKeys,  USequenceAction   >("UGFxAction_SetCaptureKeys")
        .def_readwrite("Movie", &UGFxAction_SetCaptureKeys::Movie)
        .def_readwrite("CaptureKeys", &UGFxAction_SetCaptureKeys::CaptureKeys)
        .def("StaticClass", &UGFxAction_SetCaptureKeys::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
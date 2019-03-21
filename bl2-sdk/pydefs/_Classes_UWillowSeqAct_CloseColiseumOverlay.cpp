#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CloseColiseumOverlay()
{
    py::class_< UWillowSeqAct_CloseColiseumOverlay,  USequenceAction   >("UWillowSeqAct_CloseColiseumOverlay")
        .def("StaticClass", &UWillowSeqAct_CloseColiseumOverlay::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_CloseColiseumOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}
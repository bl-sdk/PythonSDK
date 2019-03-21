#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_OpenColiseumOverlay()
{
    py::class_< UWillowSeqAct_OpenColiseumOverlay,  USequenceAction   >("UWillowSeqAct_OpenColiseumOverlay")
        .def_readwrite("OverlayDefinition", &UWillowSeqAct_OpenColiseumOverlay::OverlayDefinition)
        .def("StaticClass", &UWillowSeqAct_OpenColiseumOverlay::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_OpenColiseumOverlay::eventActivated)
        .staticmethod("StaticClass")
  ;
}
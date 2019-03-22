#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_OpenColiseumOverlay(py::module &m)
{
    py::class_< UWillowSeqAct_OpenColiseumOverlay,  USequenceAction   >(m, "UWillowSeqAct_OpenColiseumOverlay")
        .def_readwrite("OverlayDefinition", &UWillowSeqAct_OpenColiseumOverlay::OverlayDefinition)
        .def("eventActivated", &UWillowSeqAct_OpenColiseumOverlay::eventActivated)
          ;
}
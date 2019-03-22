#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CloseColiseumOverlay(py::module &m)
{
    py::class_< UWillowSeqAct_CloseColiseumOverlay,  USequenceAction   >(m, "UWillowSeqAct_CloseColiseumOverlay")
        .def("eventActivated", &UWillowSeqAct_CloseColiseumOverlay::eventActivated)
          ;
}
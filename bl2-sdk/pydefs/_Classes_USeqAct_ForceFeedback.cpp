#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ForceFeedback(py::module &m)
{
    py::class_< USeqAct_ForceFeedback,  USequenceAction   >(m, "USeqAct_ForceFeedback")
        .def_readwrite("FFWaveform", &USeqAct_ForceFeedback::FFWaveform)
        .def_readwrite("PredefinedWaveForm", &USeqAct_ForceFeedback::PredefinedWaveForm)
          ;
}
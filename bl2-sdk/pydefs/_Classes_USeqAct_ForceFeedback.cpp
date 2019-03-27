#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ForceFeedback(py::module &m)
{
    py::class_< USeqAct_ForceFeedback,  USequenceAction   >(m, "USeqAct_ForceFeedback")
		.def_static("StaticClass", &USeqAct_ForceFeedback::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FFWaveform", &USeqAct_ForceFeedback::FFWaveform)
        .def_readwrite("PredefinedWaveForm", &USeqAct_ForceFeedback::PredefinedWaveForm)
          ;
}
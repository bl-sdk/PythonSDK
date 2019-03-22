#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForceFeedbackWaveform(py::module &m)
{
    py::class_< UForceFeedbackWaveform,  UObject   >(m, "UForceFeedbackWaveform")
        .def_readwrite("Samples", &UForceFeedbackWaveform::Samples)
        .def_readwrite("Scale", &UForceFeedbackWaveform::Scale)
        .def_readwrite("WaveformFalloffStartDistance", &UForceFeedbackWaveform::WaveformFalloffStartDistance)
        .def_readwrite("MaxWaveformDistance", &UForceFeedbackWaveform::MaxWaveformDistance)
        .def_readwrite("WaveformRef", &UForceFeedbackWaveform::WaveformRef)
        .def("CopyDataTo", [](UForceFeedbackWaveform &self ) { class UForceFeedbackWaveform** pydst = 0 ;   self.CopyDataTo(pydst); return py::make_tuple(*pydst); })
          ;
}
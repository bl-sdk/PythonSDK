#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForceFeedbackWaveform()
{
    class_< UForceFeedbackWaveform, bases< UObject >  , boost::noncopyable>("UForceFeedbackWaveform", no_init)
        .def_readwrite("Samples", &UForceFeedbackWaveform::Samples)
        .def_readwrite("Scale", &UForceFeedbackWaveform::Scale)
        .def_readwrite("WaveformFalloffStartDistance", &UForceFeedbackWaveform::WaveformFalloffStartDistance)
        .def_readwrite("MaxWaveformDistance", &UForceFeedbackWaveform::MaxWaveformDistance)
        .def_readwrite("WaveformRef", &UForceFeedbackWaveform::WaveformRef)
        .def("StaticClass", &UForceFeedbackWaveform::StaticClass, return_value_policy< reference_existing_object >())
        .def("CopyDataTo", &UForceFeedbackWaveform::CopyDataTo)
        .staticmethod("StaticClass")
  ;
}
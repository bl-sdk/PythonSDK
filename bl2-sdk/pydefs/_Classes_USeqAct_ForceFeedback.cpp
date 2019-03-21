#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ForceFeedback()
{
    class_< USeqAct_ForceFeedback, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ForceFeedback", no_init)
        .def_readwrite("FFWaveform", &USeqAct_ForceFeedback::FFWaveform)
        .def_readwrite("PredefinedWaveForm", &USeqAct_ForceFeedback::PredefinedWaveForm)
        .def("StaticClass", &USeqAct_ForceFeedback::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
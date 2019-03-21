#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Delay()
{
    class_< USeqAct_Delay, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_Delay", no_init)
        .def_readwrite("DefaultDuration", &USeqAct_Delay::DefaultDuration)
        .def_readwrite("Duration", &USeqAct_Delay::Duration)
        .def_readwrite("LastUpdateTime", &USeqAct_Delay::LastUpdateTime)
        .def_readwrite("RemainingTime", &USeqAct_Delay::RemainingTime)
        .def("StaticClass", &USeqAct_Delay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetDelayActive", &USeqAct_Delay::ResetDelayActive)
        .def("Reset", &USeqAct_Delay::Reset)
        .staticmethod("StaticClass")
  ;
}
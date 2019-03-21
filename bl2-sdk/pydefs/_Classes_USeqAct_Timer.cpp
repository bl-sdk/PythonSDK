#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Timer()
{
    class_< USeqAct_Timer, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Timer", no_init)
        .def_readwrite("ActivationTime", &USeqAct_Timer::ActivationTime)
        .def_readwrite("Time", &USeqAct_Timer::Time)
        .def("StaticClass", &USeqAct_Timer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
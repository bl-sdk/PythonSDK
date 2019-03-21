#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AndGate()
{
    class_< USeqAct_AndGate, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AndGate", no_init)
        .def_readwrite("LinkedOutputFiredStatus", &USeqAct_AndGate::LinkedOutputFiredStatus)
        .def_readwrite("LinkedOutputs", &USeqAct_AndGate::LinkedOutputs)
        .def("StaticClass", &USeqAct_AndGate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
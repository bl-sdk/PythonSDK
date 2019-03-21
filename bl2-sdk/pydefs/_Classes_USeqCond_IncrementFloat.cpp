#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IncrementFloat()
{
    class_< USeqCond_IncrementFloat, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IncrementFloat", no_init)
        .def_readwrite("IncrementAmount", &USeqCond_IncrementFloat::IncrementAmount)
        .def_readwrite("ValueA", &USeqCond_IncrementFloat::ValueA)
        .def_readwrite("ValueB", &USeqCond_IncrementFloat::ValueB)
        .def("StaticClass", &USeqCond_IncrementFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
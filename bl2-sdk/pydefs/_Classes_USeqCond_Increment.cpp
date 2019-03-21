#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_Increment()
{
    class_< USeqCond_Increment, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_Increment", no_init)
        .def_readwrite("IncrementAmount", &USeqCond_Increment::IncrementAmount)
        .def_readwrite("ValueA", &USeqCond_Increment::ValueA)
        .def_readwrite("ValueB", &USeqCond_Increment::ValueB)
        .def("StaticClass", &USeqCond_Increment::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
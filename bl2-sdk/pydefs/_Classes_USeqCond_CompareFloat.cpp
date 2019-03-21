#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareFloat()
{
    class_< USeqCond_CompareFloat, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareFloat", no_init)
        .def_readwrite("ValueA", &USeqCond_CompareFloat::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareFloat::ValueB)
        .def("StaticClass", &USeqCond_CompareFloat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
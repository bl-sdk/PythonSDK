#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareInt()
{
    class_< USeqCond_CompareInt, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareInt", no_init)
        .def_readwrite("ValueA", &USeqCond_CompareInt::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareInt::ValueB)
        .def("StaticClass", &USeqCond_CompareInt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
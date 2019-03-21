#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareString()
{
    class_< USeqCond_CompareString, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareString", no_init)
        .def("StaticClass", &USeqCond_CompareString::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
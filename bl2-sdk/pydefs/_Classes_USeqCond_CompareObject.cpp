#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareObject()
{
    class_< USeqCond_CompareObject, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareObject", no_init)
        .def("StaticClass", &USeqCond_CompareObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
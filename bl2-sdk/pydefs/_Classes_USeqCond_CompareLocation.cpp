#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_CompareLocation()
{
    class_< USeqCond_CompareLocation, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_CompareLocation", no_init)
        .def_readwrite("CheckRadius", &USeqCond_CompareLocation::CheckRadius)
        .def("StaticClass", &USeqCond_CompareLocation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
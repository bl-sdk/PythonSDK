#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsAlive()
{
    class_< USeqCond_IsAlive, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsAlive", no_init)
        .def("StaticClass", &USeqCond_IsAlive::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
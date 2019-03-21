#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsBenchmarking()
{
    class_< USeqCond_IsBenchmarking, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsBenchmarking", no_init)
        .def("StaticClass", &USeqCond_IsBenchmarking::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqCond_IsBenchmarking::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}
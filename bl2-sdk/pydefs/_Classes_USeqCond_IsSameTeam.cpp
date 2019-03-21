#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_IsSameTeam()
{
    class_< USeqCond_IsSameTeam, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_IsSameTeam", no_init)
        .def("StaticClass", &USeqCond_IsSameTeam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
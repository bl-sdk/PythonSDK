#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchPlatform()
{
    class_< USeqCond_SwitchPlatform, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_SwitchPlatform", no_init)
        .def("StaticClass", &USeqCond_SwitchPlatform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PhysXSwitch()
{
    class_< USeqAct_PhysXSwitch, bases< USequenceAction >  , boost::noncopyable>("USeqAct_PhysXSwitch", no_init)
        .def("StaticClass", &USeqAct_PhysXSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetSwitch()
{
    class_< USeqAct_AkSetSwitch, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AkSetSwitch", no_init)
        .def_readwrite("AkSwitch", &USeqAct_AkSetSwitch::AkSwitch)
        .def("StaticClass", &USeqAct_AkSetSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
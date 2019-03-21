#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_ObjectParameterSwitch()
{
    class_< UGearboxDialogAct_ObjectParameterSwitch, bases< UGearboxDialogAction >  , boost::noncopyable>("UGearboxDialogAct_ObjectParameterSwitch", no_init)
        .def_readwrite("Outputs", &UGearboxDialogAct_ObjectParameterSwitch::Outputs)
        .def("StaticClass", &UGearboxDialogAct_ObjectParameterSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAct_ObjectParameterSwitch::eventActivate)
        .staticmethod("StaticClass")
  ;
}
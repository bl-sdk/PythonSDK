#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Trigger()
{
    class_< UGearboxDialogAct_Trigger, bases< UGearboxDialogAction >  , boost::noncopyable>("UGearboxDialogAct_Trigger", no_init)
        .def_readwrite("DialogEvent", &UGearboxDialogAct_Trigger::DialogEvent)
        .def("StaticClass", &UGearboxDialogAct_Trigger::StaticClass, return_value_policy< reference_existing_object >())
        .def("ActivateOutput", &UGearboxDialogAct_Trigger::ActivateOutput)
        .def("eventActivate", &UGearboxDialogAct_Trigger::eventActivate)
        .staticmethod("StaticClass")
  ;
}
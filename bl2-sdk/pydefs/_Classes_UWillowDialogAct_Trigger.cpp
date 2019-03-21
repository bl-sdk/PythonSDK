#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_Trigger()
{
    class_< UWillowDialogAct_Trigger, bases< UGearboxDialogAct_Trigger >  , boost::noncopyable>("UWillowDialogAct_Trigger", no_init)
        .def("StaticClass", &UWillowDialogAct_Trigger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
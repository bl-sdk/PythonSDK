#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Chance()
{
    class_< UGearboxDialogAct_Chance, bases< UGearboxDialogAction >  , boost::noncopyable>("UGearboxDialogAct_Chance", no_init)
        .def_readwrite("Chance", &UGearboxDialogAct_Chance::Chance)
        .def_readwrite("QuietTimeMin", &UGearboxDialogAct_Chance::QuietTimeMin)
        .def_readwrite("QuietTimeMax", &UGearboxDialogAct_Chance::QuietTimeMax)
        .def_readwrite("NextFireTime", &UGearboxDialogAct_Chance::NextFireTime)
        .def("StaticClass", &UGearboxDialogAct_Chance::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAct_Chance::eventActivate)
        .staticmethod("StaticClass")
  ;
}
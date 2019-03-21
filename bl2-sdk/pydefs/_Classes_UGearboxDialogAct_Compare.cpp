#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Compare()
{
    class_< UGearboxDialogAct_Compare, bases< UGearboxDialogAction >  , boost::noncopyable>("UGearboxDialogAct_Compare", no_init)
        .def("StaticClass", &UGearboxDialogAct_Compare::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAct_Compare::eventActivate)
        .staticmethod("StaticClass")
  ;
}
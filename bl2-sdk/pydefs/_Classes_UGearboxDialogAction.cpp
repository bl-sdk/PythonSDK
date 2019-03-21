#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAction()
{
    class_< UGearboxDialogAction, bases< UGearboxDialogNode >  , boost::noncopyable>("UGearboxDialogAction", no_init)
        .def("StaticClass", &UGearboxDialogAction::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
        .staticmethod("StaticClass")
  ;
}
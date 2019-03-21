#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogNonTemplateAction()
{
    class_< UGearboxDialogNonTemplateAction, bases< UGearboxDialogNode >  , boost::noncopyable>("UGearboxDialogNonTemplateAction", no_init)
        .def("StaticClass", &UGearboxDialogNonTemplateAction::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
        .staticmethod("StaticClass")
  ;
}
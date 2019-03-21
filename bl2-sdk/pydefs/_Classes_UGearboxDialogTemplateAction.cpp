#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateAction()
{
    class_< UGearboxDialogTemplateAction, bases< UGearboxDialogAction >  , boost::noncopyable>("UGearboxDialogTemplateAction", no_init)
        .def("StaticClass", &UGearboxDialogTemplateAction::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
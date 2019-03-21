#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateEvent()
{
    class_< UGearboxDialogTemplateEvent, bases< UGearboxDialogEvent >  , boost::noncopyable>("UGearboxDialogTemplateEvent", no_init)
        .def("StaticClass", &UGearboxDialogTemplateEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
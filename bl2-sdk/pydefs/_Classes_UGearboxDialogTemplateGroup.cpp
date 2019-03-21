#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateGroup()
{
    class_< UGearboxDialogTemplateGroup, bases< UGearboxDialogGroup >  , boost::noncopyable>("UGearboxDialogTemplateGroup", no_init)
        .def("StaticClass", &UGearboxDialogTemplateGroup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
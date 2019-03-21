#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogEventTag()
{
    class_< UGearboxDialogEventTag, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxDialogEventTag", no_init)
        .def_readwrite("Priority", &UGearboxDialogEventTag::Priority)
        .def("StaticClass", &UGearboxDialogEventTag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
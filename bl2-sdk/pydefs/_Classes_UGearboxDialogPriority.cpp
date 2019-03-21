#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogPriority()
{
    class_< UGearboxDialogPriority, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxDialogPriority", no_init)
        .def("StaticClass", &UGearboxDialogPriority::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
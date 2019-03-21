#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogVariable()
{
    class_< UGearboxDialogVariable, bases< UGearboxDialogNode >  , boost::noncopyable>("UGearboxDialogVariable", no_init)
        .def("StaticClass", &UGearboxDialogVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveToArgumentValue", &UGearboxDialogVariable::ResolveToArgumentValue)
        .def("GetTalkers", &UGearboxDialogVariable::GetTalkers)
        .staticmethod("StaticClass")
  ;
}
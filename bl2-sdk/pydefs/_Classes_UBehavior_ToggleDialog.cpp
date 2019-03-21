#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleDialog()
{
    class_< UBehavior_ToggleDialog, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ToggleDialog", no_init)
        .def_readwrite("Option", &UBehavior_ToggleDialog::Option)
        .def("StaticClass", &UBehavior_ToggleDialog::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ToggleDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
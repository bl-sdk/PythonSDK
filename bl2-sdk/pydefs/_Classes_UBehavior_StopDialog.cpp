#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StopDialog()
{
    class_< UBehavior_StopDialog, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StopDialog", no_init)
        .def_readwrite("EventTag", &UBehavior_StopDialog::EventTag)
        .def("StaticClass", &UBehavior_StopDialog::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StopDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
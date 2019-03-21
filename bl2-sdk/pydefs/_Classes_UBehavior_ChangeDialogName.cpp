#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDialogName()
{
    class_< UBehavior_ChangeDialogName, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeDialogName", no_init)
        .def_readwrite("NewNameTag", &UBehavior_ChangeDialogName::NewNameTag)
        .def("StaticClass", &UBehavior_ChangeDialogName::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDialogName::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
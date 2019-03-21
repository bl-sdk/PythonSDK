#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAIMissionContextDialog()
{
    class_< UBehavior_PlayAIMissionContextDialog, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PlayAIMissionContextDialog", no_init)
        .def_readwrite("PlayerWhoUsedMe", &UBehavior_PlayAIMissionContextDialog::PlayerWhoUsedMe)
        .def("StaticClass", &UBehavior_PlayAIMissionContextDialog::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PlayAIMissionContextDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
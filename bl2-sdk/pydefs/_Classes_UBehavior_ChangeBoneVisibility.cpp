#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeBoneVisibility()
{
    class_< UBehavior_ChangeBoneVisibility, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeBoneVisibility", no_init)
        .def_readwrite("Status", &UBehavior_ChangeBoneVisibility::Status)
        .def_readwrite("BoneName", &UBehavior_ChangeBoneVisibility::BoneName)
        .def("StaticClass", &UBehavior_ChangeBoneVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeBoneVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
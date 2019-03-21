#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttachItems()
{
    class_< UBehavior_AttachItems, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttachItems", no_init)
        .def("StaticClass", &UBehavior_AttachItems::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AttachItems::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
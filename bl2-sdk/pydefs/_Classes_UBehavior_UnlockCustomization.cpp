#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockCustomization()
{
    class_< UBehavior_UnlockCustomization, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UnlockCustomization", no_init)
        .def_readwrite("DefinitionToUnlock", &UBehavior_UnlockCustomization::DefinitionToUnlock)
        .def("StaticClass", &UBehavior_UnlockCustomization::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UnlockCustomization::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
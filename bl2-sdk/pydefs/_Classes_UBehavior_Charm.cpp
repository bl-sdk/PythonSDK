#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Charm()
{
    class_< UBehavior_Charm, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Charm", no_init)
        .def_readwrite("Action", &UBehavior_Charm::Action)
        .def_readwrite("CharmOwner", &UBehavior_Charm::CharmOwner)
        .def("StaticClass", &UBehavior_Charm::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Charm::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
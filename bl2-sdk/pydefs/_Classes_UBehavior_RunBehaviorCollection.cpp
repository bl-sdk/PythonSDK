#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RunBehaviorCollection()
{
    class_< UBehavior_RunBehaviorCollection, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RunBehaviorCollection", no_init)
        .def_readwrite("CollectionDefinition", &UBehavior_RunBehaviorCollection::CollectionDefinition)
        .def_readwrite("OverrideName", &UBehavior_RunBehaviorCollection::OverrideName)
        .def_readwrite("OverrideContext", &UBehavior_RunBehaviorCollection::OverrideContext)
        .def("StaticClass", &UBehavior_RunBehaviorCollection::StaticClass, return_value_policy< reference_existing_object >())
        .def("RunBehaviorCollection", &UBehavior_RunBehaviorCollection::RunBehaviorCollection)
        .def("ApplyBehaviorToContext", &UBehavior_RunBehaviorCollection::ApplyBehaviorToContext)
        .def("ApplyBehavior", &UBehavior_RunBehaviorCollection::ApplyBehavior)
        .staticmethod("StaticClass")
  ;
}
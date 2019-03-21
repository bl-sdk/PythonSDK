#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringBehaviorDefinition()
{
    class_< UFiringBehaviorDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFiringBehaviorDefinition", no_init)
        .def_readwrite("ConditionalPatterns", &UFiringBehaviorDefinition::ConditionalPatterns)
        .def("StaticClass", &UFiringBehaviorDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
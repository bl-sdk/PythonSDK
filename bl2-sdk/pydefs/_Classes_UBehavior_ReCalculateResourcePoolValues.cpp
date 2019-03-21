#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ReCalculateResourcePoolValues()
{
    class_< UBehavior_ReCalculateResourcePoolValues, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ReCalculateResourcePoolValues", no_init)
        .def_readwrite("Resource", &UBehavior_ReCalculateResourcePoolValues::Resource)
        .def("StaticClass", &UBehavior_ReCalculateResourcePoolValues::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ReCalculateResourcePoolValues::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
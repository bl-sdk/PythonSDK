#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RefillResourcePool()
{
    class_< UBehavior_RefillResourcePool, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RefillResourcePool", no_init)
        .def_readwrite("Resource", &UBehavior_RefillResourcePool::Resource)
        .def_readwrite("Percentage", &UBehavior_RefillResourcePool::Percentage)
        .def_readwrite("MaxPercentage", &UBehavior_RefillResourcePool::MaxPercentage)
        .def_readwrite("PercentageContext", &UBehavior_RefillResourcePool::PercentageContext)
        .def("StaticClass", &UBehavior_RefillResourcePool::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RefillResourcePool::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
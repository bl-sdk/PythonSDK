#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DuplicateInstanceData()
{
    class_< UBehavior_DuplicateInstanceData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DuplicateInstanceData", no_init)
        .def_readwrite("DuplicateName", &UBehavior_DuplicateInstanceData::DuplicateName)
        .def_readwrite("InstanceData", &UBehavior_DuplicateInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_DuplicateInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DuplicateInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
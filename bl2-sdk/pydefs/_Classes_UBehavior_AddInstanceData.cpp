#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceData()
{
    class_< UBehavior_AddInstanceData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddInstanceData", no_init)
        .def_readwrite("InstanceData", &UBehavior_AddInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_AddInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
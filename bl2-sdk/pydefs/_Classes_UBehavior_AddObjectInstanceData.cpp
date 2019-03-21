#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddObjectInstanceData()
{
    class_< UBehavior_AddObjectInstanceData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddObjectInstanceData", no_init)
        .def_readwrite("InstanceDataObject", &UBehavior_AddObjectInstanceData::InstanceDataObject)
        .def_readwrite("InstanceDataName", &UBehavior_AddObjectInstanceData::InstanceDataName)
        .def("StaticClass", &UBehavior_AddObjectInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddObjectInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
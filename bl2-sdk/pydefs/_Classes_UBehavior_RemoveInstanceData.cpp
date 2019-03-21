#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInstanceData()
{
    class_< UBehavior_RemoveInstanceData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RemoveInstanceData", no_init)
        .def_readwrite("InstanceData", &UBehavior_RemoveInstanceData::InstanceData)
        .def("StaticClass", &UBehavior_RemoveInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInstanceData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
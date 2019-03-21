#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableLinkData2()
{
    class_< FBehaviorVariableLinkData2 >("FBehaviorVariableLinkData2", no_init)
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData2::PropertyName)
        .def_readwrite("VariableLinkType", &FBehaviorVariableLinkData2::VariableLinkType)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData2::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData2::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData2::CachedProperty)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableLinkData()
{
    class_< FBehaviorVariableLinkData >("FBehaviorVariableLinkData", no_init)
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData::PropertyName)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData::CachedProperty)
  ;
}
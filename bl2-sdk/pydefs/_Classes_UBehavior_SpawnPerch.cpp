#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnPerch()
{
    class_< UBehavior_SpawnPerch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnPerch", no_init)
        .def_readwrite("AttachPoint", &UBehavior_SpawnPerch::AttachPoint)
        .def_readwrite("PerchDef", &UBehavior_SpawnPerch::PerchDef)
        .def_readwrite("PerchLifetime", &UBehavior_SpawnPerch::PerchLifetime)
        .def_readwrite("UseRadius", &UBehavior_SpawnPerch::UseRadius)
        .def_readwrite("UseHeight", &UBehavior_SpawnPerch::UseHeight)
        .def("StaticClass", &UBehavior_SpawnPerch::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_SpawnPerch::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnPerch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
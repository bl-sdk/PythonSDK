#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Crane()
{
    class_< UBehavior_Crane, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Crane", no_init)
        .def_readwrite("Action", &UBehavior_Crane::Action)
        .def("StaticClass", &UBehavior_Crane::StaticClass, return_value_policy< reference_existing_object >())
        .def("DontDoShit", &UBehavior_Crane::DontDoShit)
        .def("FollowDummy", &UBehavior_Crane::FollowDummy)
        .def("DetachDummy", &UBehavior_Crane::DetachDummy)
        .def("AttachDummy", &UBehavior_Crane::AttachDummy)
        .def("FindDummy", &UBehavior_Crane::FindDummy)
        .def("ApplyBehaviorToContext", &UBehavior_Crane::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
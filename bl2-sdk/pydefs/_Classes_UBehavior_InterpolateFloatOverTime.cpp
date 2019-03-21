#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_InterpolateFloatOverTime()
{
    class_< UBehavior_InterpolateFloatOverTime, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_InterpolateFloatOverTime", no_init)
        .def_readwrite("Duration", &UBehavior_InterpolateFloatOverTime::Duration)
        .def_readwrite("UpdateInterval", &UBehavior_InterpolateFloatOverTime::UpdateInterval)
        .def_readwrite("EndingValue", &UBehavior_InterpolateFloatOverTime::EndingValue)
        .def_readwrite("BeginningValue", &UBehavior_InterpolateFloatOverTime::BeginningValue)
        .def("StaticClass", &UBehavior_InterpolateFloatOverTime::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_InterpolateFloatOverTime::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_InterpolateFloatOverTime::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
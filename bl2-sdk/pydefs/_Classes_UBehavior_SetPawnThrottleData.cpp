#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetPawnThrottleData()
{
    class_< UBehavior_SetPawnThrottleData, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetPawnThrottleData", no_init)
        .def_readwrite("FullThrottleDistance", &UBehavior_SetPawnThrottleData::FullThrottleDistance)
        .def_readwrite("FullThrottleTime", &UBehavior_SetPawnThrottleData::FullThrottleTime)
        .def_readwrite("MinThrottleDistance", &UBehavior_SetPawnThrottleData::MinThrottleDistance)
        .def_readwrite("MaxThrottleDistance", &UBehavior_SetPawnThrottleData::MaxThrottleDistance)
        .def_readwrite("MinThrottleTime", &UBehavior_SetPawnThrottleData::MinThrottleTime)
        .def_readwrite("MaxThrottleTime", &UBehavior_SetPawnThrottleData::MaxThrottleTime)
        .def("StaticClass", &UBehavior_SetPawnThrottleData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetPawnThrottleData::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
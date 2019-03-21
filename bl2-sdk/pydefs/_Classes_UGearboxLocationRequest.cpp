#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxLocationRequest()
{
    class_< UGearboxLocationRequest, bases< UObject >  , boost::noncopyable>("UGearboxLocationRequest", no_init)
        .def_readwrite("SearchOrigin", &UGearboxLocationRequest::SearchOrigin)
        .def_readwrite("DirectionFromOrigin", &UGearboxLocationRequest::DirectionFromOrigin)
        .def_readwrite("LocationFilterTest", &UGearboxLocationRequest::LocationFilterTest)
        .def_readwrite("DirectionCone", &UGearboxLocationRequest::DirectionCone)
        .def_readwrite("MinDistanceFromOrigin", &UGearboxLocationRequest::MinDistanceFromOrigin)
        .def_readwrite("MaxDistanceFromOrigin", &UGearboxLocationRequest::MaxDistanceFromOrigin)
        .def_readwrite("SearchRandomness", &UGearboxLocationRequest::SearchRandomness)
        .def_readwrite("SearchOriginResult", &UGearboxLocationRequest::SearchOriginResult)
        .def_readwrite("SearchDirectionResult", &UGearboxLocationRequest::SearchDirectionResult)
        .def("StaticClass", &UGearboxLocationRequest::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetLastDirection", &UGearboxLocationRequest::GetLastDirection)
        .def("GetLastOrigin", &UGearboxLocationRequest::GetLastOrigin)
        .def("GetDirection", &UGearboxLocationRequest::GetDirection)
        .def("GetOrigin", &UGearboxLocationRequest::GetOrigin)
        .def("Get", &UGearboxLocationRequest::Get)
        .staticmethod("StaticClass")
  ;
}
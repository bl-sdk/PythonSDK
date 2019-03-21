#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnMoveLocationRequest()
{
    class_< UPawnMoveLocationRequest, bases< UObject >  , boost::noncopyable>("UPawnMoveLocationRequest", no_init)
        .def_readwrite("CoverSearchFilter", &UPawnMoveLocationRequest::CoverSearchFilter)
        .def_readwrite("RepathOption", &UPawnMoveLocationRequest::RepathOption)
        .def_readwrite("CoverFailureResponse", &UPawnMoveLocationRequest::CoverFailureResponse)
        .def_readwrite("DestinationTestNonCover", &UPawnMoveLocationRequest::DestinationTestNonCover)
        .def_readwrite("RepathDistanceThresh", &UPawnMoveLocationRequest::RepathDistanceThresh)
        .def_readwrite("FailureEvent", &UPawnMoveLocationRequest::FailureEvent)
        .def_readwrite("OverrideDistanceForCover", &UPawnMoveLocationRequest::OverrideDistanceForCover)
        .def_readwrite("SearchOrigin", &UGearboxLocationRequest::SearchOrigin)
        .def_readwrite("DirectionFromOrigin", &UGearboxLocationRequest::DirectionFromOrigin)
        .def_readwrite("LocationFilterTest", &UGearboxLocationRequest::LocationFilterTest)
        .def_readwrite("DirectionCone", &UGearboxLocationRequest::DirectionCone)
        .def_readwrite("MinDistanceFromOrigin", &UGearboxLocationRequest::MinDistanceFromOrigin)
        .def_readwrite("MaxDistanceFromOrigin", &UGearboxLocationRequest::MaxDistanceFromOrigin)
        .def_readwrite("SearchRandomness", &UGearboxLocationRequest::SearchRandomness)
        .def_readwrite("SearchOriginResult", &UGearboxLocationRequest::SearchOriginResult)
        .def_readwrite("SearchDirectionResult", &UGearboxLocationRequest::SearchDirectionResult)
        .def("StaticClass", &UPawnMoveLocationRequest::StaticClass, return_value_policy< reference_existing_object >())
        .def("Get", &UPawnMoveLocationRequest::Get)
        .def("GetLastDirection", &UGearboxLocationRequest::GetLastDirection)
        .def("GetLastOrigin", &UGearboxLocationRequest::GetLastOrigin)
        .def("GetDirection", &UGearboxLocationRequest::GetDirection)
        .def("GetOrigin", &UGearboxLocationRequest::GetOrigin)
        .staticmethod("StaticClass")
  ;
}
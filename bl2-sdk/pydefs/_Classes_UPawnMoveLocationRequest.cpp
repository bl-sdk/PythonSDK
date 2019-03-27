#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnMoveLocationRequest(py::module &m)
{
    py::class_< UPawnMoveLocationRequest,  UObject   >(m, "UPawnMoveLocationRequest")
		.def_static("StaticClass", &UPawnMoveLocationRequest::StaticClass, py::return_value_policy::reference)
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
        .def("Get", &UPawnMoveLocationRequest::Get)
        .def("GetLastDirection", &UGearboxLocationRequest::GetLastDirection)
        .def("GetLastOrigin", &UGearboxLocationRequest::GetLastOrigin)
        .def("GetDirection", &UGearboxLocationRequest::GetDirection)
        .def("GetOrigin", &UGearboxLocationRequest::GetOrigin)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxLocationRequest(py::module &m)
{
    py::class_< UGearboxLocationRequest,  UObject   >(m, "UGearboxLocationRequest")
        .def_readwrite("SearchOrigin", &UGearboxLocationRequest::SearchOrigin)
        .def_readwrite("DirectionFromOrigin", &UGearboxLocationRequest::DirectionFromOrigin)
        .def_readwrite("LocationFilterTest", &UGearboxLocationRequest::LocationFilterTest)
        .def_readwrite("DirectionCone", &UGearboxLocationRequest::DirectionCone)
        .def_readwrite("MinDistanceFromOrigin", &UGearboxLocationRequest::MinDistanceFromOrigin)
        .def_readwrite("MaxDistanceFromOrigin", &UGearboxLocationRequest::MaxDistanceFromOrigin)
        .def_readwrite("SearchRandomness", &UGearboxLocationRequest::SearchRandomness)
        .def_readwrite("SearchOriginResult", &UGearboxLocationRequest::SearchOriginResult)
        .def_readwrite("SearchDirectionResult", &UGearboxLocationRequest::SearchDirectionResult)
        .def("StaticClass", &UGearboxLocationRequest::StaticClass, py::return_value_policy::reference)
        .def("GetLastDirection", &UGearboxLocationRequest::GetLastDirection)
        .def("GetLastOrigin", &UGearboxLocationRequest::GetLastOrigin)
        .def("GetDirection", &UGearboxLocationRequest::GetDirection)
        .def("GetOrigin", &UGearboxLocationRequest::GetOrigin)
        .def("Get", &UGearboxLocationRequest::Get)
          ;
}
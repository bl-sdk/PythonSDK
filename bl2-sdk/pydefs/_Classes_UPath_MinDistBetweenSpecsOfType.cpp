#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_MinDistBetweenSpecsOfType()
{
    py::class_< UPath_MinDistBetweenSpecsOfType,  UPathConstraint   >("UPath_MinDistBetweenSpecsOfType")
        .def_readwrite("MinDistBetweenSpecTypes", &UPath_MinDistBetweenSpecsOfType::MinDistBetweenSpecTypes)
        .def_readwrite("InitLocation", &UPath_MinDistBetweenSpecsOfType::InitLocation)
        .def_readwrite("ReachSpecClass", &UPath_MinDistBetweenSpecsOfType::ReachSpecClass)
        .def("StaticClass", &UPath_MinDistBetweenSpecsOfType::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_MinDistBetweenSpecsOfType::Recycle)
        .def("EnforceMinDist", &UPath_MinDistBetweenSpecsOfType::EnforceMinDist)
        .staticmethod("StaticClass")
  ;
}
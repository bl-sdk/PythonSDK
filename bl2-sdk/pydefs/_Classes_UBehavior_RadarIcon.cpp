#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RadarIcon(py::object m)
{
    py::class_< UBehavior_RadarIcon,  UBehaviorBase   >(m, "UBehavior_RadarIcon")
        .def_readwrite("IconType", &UBehavior_RadarIcon::IconType)
        .def_readwrite("Action", &UBehavior_RadarIcon::Action)
        .def_readwrite("OverrideDuration", &UBehavior_RadarIcon::OverrideDuration)
        .def("StaticClass", &UBehavior_RadarIcon::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RadarIcon::ApplyBehaviorToContext)
          ;
}
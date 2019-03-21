#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendList()
{
    py::class_< UWillowAnimNodeBlendList,  UAnimNodeBlendList   >("UWillowAnimNodeBlendList")
        .def_readwrite("ChildBlendInTime", &UWillowAnimNodeBlendList::ChildBlendInTime)
        .def("StaticClass", &UWillowAnimNodeBlendList::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
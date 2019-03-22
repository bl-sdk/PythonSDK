#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendList(py::module &m)
{
    py::class_< UWillowAnimNodeBlendList,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendList")
        .def_readwrite("ChildBlendInTime", &UWillowAnimNodeBlendList::ChildBlendInTime)
        .def("StaticClass", &UWillowAnimNodeBlendList::StaticClass, py::return_value_policy::reference)
          ;
}
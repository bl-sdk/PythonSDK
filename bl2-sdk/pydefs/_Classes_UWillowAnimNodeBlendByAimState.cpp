#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendByAimState(py::object m)
{
    py::class_< UWillowAnimNodeBlendByAimState,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendByAimState")
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendByAimState::BlendTime)
        .def("StaticClass", &UWillowAnimNodeBlendByAimState::StaticClass, py::return_value_policy::reference)
          ;
}
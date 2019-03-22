#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimBlendByPosture(py::module &m)
{
    py::class_< UWillowAnimBlendByPosture,  UAnimNodeBlendList   >(m, "UWillowAnimBlendByPosture")
        .def_readwrite("BlendTime", &UWillowAnimBlendByPosture::BlendTime)
        .def("StaticClass", &UWillowAnimBlendByPosture::StaticClass, py::return_value_policy::reference)
          ;
}